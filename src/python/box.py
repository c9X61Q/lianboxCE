# uncompyle6 version 3.9.3
# Python bytecode version base 3.7.0 (3394)
# Decompiled from: Python 3.14.8 (main, Oct  2 2026, 10:23:31) [GCC 16.2.1 20260810]
# Embedded file name: box.py
import subprocess, time, random, string, requests, tempfile, os, sys, psutil, hashlib, base64

def run_cmd(cmd):
    try:
        result = subprocess.run(cmd, stdout=(subprocess.PIPE), stderr=(subprocess.PIPE), text=True, shell=True)
        return result.stdout.strip()
    except Exception as e:
        try:
            return f"[命令执行错误] {e}"
        finally:
            e = None
            del e


def wait_for_fastboot_device(prompt='等待 fastboot 设备连接...'):
    print(prompt)
    while True:
        output = run_cmd("fastboot devices")
        if output:
            if "fastboot" in output:
                print("已检测到 fastboot 设备:", output.split()[0])
                return
        time.sleep(2)


def get_device_list(brand):
    url = f"http://moliranran.com:557/d/lanzouyun/super-master/{brand}/device"
    try:
        resp = requests.get(url, timeout=10)
        if resp.status_code == 200:
            lines = resp.text.strip().splitlines()
            return [line.strip() for line in lines if line.strip()]
        print(f"获取设备列表失败，状态码：{resp.status_code}")
        return []
    except Exception as e:
        try:
            print("请求设备列表失败：", e)
            return []
        finally:
            e = None
            del e


def choose_device(devices):
    while 1:
        print("\n可选机型：")
        for idx, name in enumerate(devices, 1):
            print(f"{idx}. {name}")

        choice = input("请输入对应序号选择机型：")
        if choice.isdigit():
            if not 1 <= int(choice) <= len(devices):
                print("输入无效，请重新输入有效序号。")
                continue
            selected = devices[int(choice) - 1]
            confirm = input(f"你选择的是：{selected}，是否确认？(Y/N)：").strip().lower()
            if confirm == "y":
                return selected


def random_filename():
    name = "".join(random.choices((string.ascii_letters + string.digits), k=8))
    ext = "." + "".join(random.choices("abcdefghijklmnopqrstuvwxyz", k=3))
    return name + ext


def download_super_img(brand, model):
    url = f"http://moliranran.com:557/d/lanzouyun/super-master/{brand}/{model}/{model}_Super.img"
    filename = random_filename()
    filepath = os.path.join(tempfile.gettempdir(), filename)
    try:
        with requests.get(url, stream=True, timeout=30) as r:
            if r.status_code == 200:
                with open(filepath, "wb") as f:
                    for chunk in r.iter_content(chunk_size=1048576):
                        if chunk:
                            f.write(chunk)

                return filepath
            return
    except Exception:
        return


def flash_super(img_path):
    print("正在修复 super 分区 ...")
    run_cmd(f'fastboot flash super "{img_path}"')
    os.remove(img_path)
    print("重启进入 fastbootd 模式 ...")
    run_cmd("fastboot reboot fastboot")


def check_lian86_process():
    for proc in psutil.process_iter(["name"]):
        if proc.info["name"] and proc.info["name"].lower() == "lian86.exe":
            return True

    return False


def super_flash_main():
    if not check_lian86_process():
        print("你用你麻痹呢")
        sys.exit(1)
    else:
        print("请选择品牌：")
        print("1. OnePlus")
        print("2. Realme")
        while True:
            brand_choice = input("输入 1 或 2：").strip()
            if brand_choice == "1":
                brand = "OnePlus"
                break
            elif brand_choice == "2":
                brand = "Realme"
                break
            else:
                print("无效输入，请重新输入 1 或 2。")

        device_list = get_device_list(brand)
        if not device_list:
            print("设备列表为空，程序终止。")
            return
            selected_model = choose_device(device_list)
            wait_for_fastboot_device()
            print("正在重启进入 bootloader...")
            run_cmd("fastboot reboot bootloader")
            time.sleep(5)
            wait_for_fastboot_device("等待设备重启进入 bootloader...")
            img_path = download_super_img(brand, selected_model)
            if img_path:
                flash_super(img_path)
        else:
            print("修复失败，程序终止。")


def device_info_main():
    if not check_lian86_process():
        print("你用你妈呢")
        sys.exit(1)
    elif len(sys.argv) >= 3:
        if sys.argv[1].lower() == "device":
            properties_path = sys.argv[2]
        else:
            print("错误：未提供payload_properties.txt路径")
            sys.exit(1)
        ota_target_version = None
        oplus_rom_version = None
        android_version = None
        try:
            with open(properties_path, "r") as f:
                for line in f:
                    line = line.strip()
                    if line.startswith("ota_target_version="):
                        ota_target_version = line.split("=", 1)[1]
                    elif line.startswith("oplus_rom_version="):
                        oplus_rom_version = line.split("=", 1)[1].lstrip("V")
                    elif line.startswith("android_version="):
                        android_version = line.split("=", 1)[1]

        except PermissionError:
            print(f"错误: 没有权限访问文件 {properties_path}，请以管理员身份运行或检查文件权限")
            sys.exit(1)
        except Exception as e:
            try:
                print(f"读取文件出错：{e}")
                sys.exit(1)
            finally:
                e = None
                del e

        coloros_detailed_version = None
        properties_dir = os.path.dirname(properties_path)
        metadata_path = os.path.join(properties_dir, "META-INF", "com", "android", "metadata")
        if os.path.exists(metadata_path):
            try:
                with open(metadata_path, "r") as f:
                    for line in f:
                        line = line.strip()
                        if line.startswith("version_name="):
                            coloros_detailed_version = line.split("=", 1)[1]
                            break

            except Exception as e:
                try:
                    print(f"读取metadata文件出错：{e}")
                finally:
                    e = None
                    del e

    elif not ota_target_version:
        print("错误：未找到ota_target_version")
        sys.exit(1)
    url = f"https://api.lian86.top/api/device?version={ota_target_version}"
    try:
        response = requests.get(url, timeout=10)
        response.raise_for_status()
        data = response.json()
        print("酷安可怜太可怜制作，偷孩用了全家死光光哦")
        if data.get("status") == "success":
            device_data = data.get("data", {})
            print(f'机型代号: {device_data.get("device_code", "N/A")}')
            print(f'设备型号: {device_data.get("device_name", "N/A")}')
        print(f'ColorOS版本号: {oplus_rom_version if oplus_rom_version else "N/A"}')
        if coloros_detailed_version:
            print(f"ColorOS详细版本号: {coloros_detailed_version}")
        if android_version:
            print(f"安卓版本号: {android_version}")
    except Exception:
        print("请求出错，可能是未收录，请联系酷安可怜太可怜进行收录")
        print(f'Coloros版本号: {oplus_rom_version if oplus_rom_version else "N/A"}')
        if coloros_detailed_version:
            print(f"ColorOS详细版本号: {coloros_detailed_version}")
        if android_version:
            print(f"安卓版本号: {android_version}")


def get_file_size(file_path):
    try:
        return os.path.getsize(file_path)
    except FileNotFoundError:
        print("错误: 未找到文件属性")
        sys.exit(1)
    except Exception as e:
        try:
            print(f"获取文件大小出错: {str(e)}")
            sys.exit(2)
        finally:
            e = None
            del e


def calculate_sha256_base64(file_path, chunk_size=65536):
    sha256_hash = hashlib.sha256()
    try:
        file_size = get_file_size(file_path)
        processed_size = 0
        start_time = time.time()
        with open(file_path, "rb") as f:
            while 1:
                chunk = f.read(chunk_size)
                if not chunk:
                    break
                sha256_hash.update(chunk)
                processed_size += len(chunk)
                if file_size > 0 and processed_size % (file_size // 20) < chunk_size:
                    progress = processed_size / file_size * 100
                    elapsed = time.time() - start_time
                    if progress > 0:
                        eta = elapsed / progress * (100 - progress)
                        print(f"\x1b[K计算哈希进度: {progress:.1f}%  预计剩余: {eta:.1f}秒", end="\r")

        print("\x1b[K哈希计算完成")
        return base64.b64encode(sha256_hash.digest()).decode("utf-8")
    except FileNotFoundError:
        print(f"错误: 未找到文件 {file_path}")
        sys.exit(1)
    except Exception as e:
        try:
            print(f"计算SHA256哈希出错: {str(e)}")
            sys.exit(3)
        finally:
            e = None
            del e


def read_properties_file(file_path):
    properties = {}
    try:
        with open(file_path, "r") as f:
            for line in f:
                line = line.strip()
                if "=" in line:
                    key, value = line.split("=", 1)
                    properties[key.strip()] = value.strip()

        return properties
    except FileNotFoundError:
        print("警告: 未找到属性文件，将跳过所有基于属性文件的验证")
        return {}
    except Exception as e:
        try:
            print("读取属性文件出错，将跳过所有基于属性文件的验证")
            return {}
        finally:
            e = None
            del e


def md5_main():
    if not check_lian86_process():
        print("你用你妈呢")
        sys.exit(1)
    else:
        if len(sys.argv) > 2:
            target_dir = sys.argv[2]
        else:
            target_dir = input("请输入目标目录路径: ").strip()
        if not os.path.isdir(target_dir):
            print(f"错误: 目录 {target_dir} 不存在")
            sys.exit(4)
        else:
            payload_path = os.path.join(target_dir, "payload.bin")
            properties_path = os.path.join(target_dir, "payload_properties.txt")
            if not os.path.exists(payload_path):
                print(f"错误: 未找到文件 {payload_path}")
                sys.exit(1)
            properties = read_properties_file(properties_path)
            start_time = time.time()
            size_validation_passed = True
            if "FILE_SIZE" in properties:
                print("正在验证文件大小...")
                try:
                    actual_size = get_file_size(payload_path)
                    expected_size = int(properties["FILE_SIZE"])
                    if actual_size != expected_size:
                        print("错误: Payload大小出错，可能损坏")
                        sys.exit(5)
                    else:
                        print("文件大小验证通过")
                except ValueError:
                    print("警告: 文件数字不是有效的数字，跳过大小验证")
                    size_validation_passed = False

            else:
                print("未找到有效值，跳过大小验证")
            size_validation_passed = False
        hash_validation_passed = True
        if "FILE_HASH" in properties:
            if size_validation_passed or "FILE_SIZE" not in properties:
                print("正在验证SHA256哈希...")
                hash_start = time.time()
                actual_hash = calculate_sha256_base64(payload_path, chunk_size=65536)
                hash_time = time.time() - hash_start
                expected_hash = properties["FILE_HASH"]
                if actual_hash != expected_hash:
                    print("错误: sha256校验未通过，可能损坏，谨慎刷入")
                    sys.exit(6)
                else:
                    print(f"SHA256哈希验证通过 (耗时: {hash_time:.2f}秒)")
            else:
                print("文件大小验证未通过，跳过哈希验证")
                hash_validation_passed = False
        else:
            print("未找到有效值，跳过哈希验证")
    print(f"总验证时间: {time.time() - start_time:.2f}秒")
    print("所有进行的验证均通过，未发现异常")
    sys.exit(0)


def main():
    if len(sys.argv) >= 2:
        arg = sys.argv[1].lower()
        if arg == "start":
            super_flash_main()
        else:
            if arg == "md5":
                md5_main()
            else:
                if arg == "device":
                    device_info_main()
                else:
                    print("无效参数")
    else:
        print("酷安可怜太可怜制作，偷孩用了全家死光光哦")


if __name__ == "__main__":
    main()

# okay decompiling box.exe_extracted/box.pyc
