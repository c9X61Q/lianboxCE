@ECHO OFF
chcp 936>nul
mode con cols=71
TITLE lian工具箱命令行


set path=%cd%;%cd%\tool\Win;%path%
set framwork_workspace=%cd%

::ECHO.检查ECHOC...
if not exist %framwork_workspace%\tool\Win\ECHOC.exe ECHO.找不到ECHOC.exe& goto FATAL
ECHOC | find "Usage" 1>nul 2>nul || ECHO.ECHOC.exe无法运行&& goto FATAL
::ECHO.检查strtofile...
if not exist %framwork_workspace%\tool\Win\strtofile.exe ECHOC {%c_e%}找不到strtofile.exe{%c_i%}{\n}& goto FATAL
if exist %framwork_workspace%\tmp\bff-test.txt del %framwork_workspace%\tmp\bff-test.txt 1>nul
echo.bff-test|strtofile.exe %framwork_workspace%\tmp\bff-test.txt || ECHOC {%c_e%}strtofile.exe无法运行{%c_i%}{\n}&& goto FATAL
for /f %%a in (%framwork_workspace%\tmp\bff-test.txt) do (if not "%%a"=="bff-test" ECHOC {%c_e%}strtofile.exe无法运行{%c_i%}{\n}& goto FATAL)
del %framwork_workspace%\tmp\bff-test.txt 1>nul


:CMD
CLS
ECHOC {0E}=--------------------------------------------------------------------={0F}{\n}
ECHO.
ECHO.                       lian工具箱 - 命令行
ECHO.
ECHOC {0E}=--------------------------------------------------------------------={0F}{\n}
ECHO.
ECHOC {0E} 已配置ADB和Fastboot环境. 请输入命令, 按Enter执行. 下面是一些预置命令.{0F}{\n}
ECHO.
ECHOC {0E} cc{0F}  检查ADB和Fastboot连接  {0E}kil{0F} 结束所有ADB和Fastboot进程{0F}{\n}
ECHOC {0E} mmc{0F} 启动设备管理器         {0E}cls{0F} 清空屏幕{0F}{\n}
ECHO. 
:CMD-CONTINUE
ECHOC {0E}=--------------------------------------------------------------------={0F}{\n}
ECHOC {0E}[命令]{0F} & call strtofile.exe %framwork_workspace%\tmp\cmd.bat
for /f %%a in (%framwork_workspace%\tmp\cmd.bat) do set cmd=%%a
if "%cmd%"=="" ECHOC {0C}                                                        [没有输入命令]{0F}{\n}& goto CMD-CONTINUE
if "%cmd%"=="cls" goto CMD
if "%cmd%"=="CLS" goto CMD
if "%cmd%"=="cc" (
    ECHO.检查ADB连接...& adb.exe devices | findstr /v "attached"
    ECHO.检查Fastboot连接...& fastboot.exe devices & goto CMD-CONTINUE)
if "%cmd%"=="mmc" (
    tasklist | find "mmc.exe" 1>nul 2>nul && ECHOC {0A}设备管理器已在运行！{0F}{\n}&& goto CMD-CONTINUE
    start %windir%\system32\devmgmt.msc & goto CMD-CONTINUE)
if "%cmd%"=="kil" (
    tasklist | find "adb.exe" 1>nul 2>nul && taskkill /f /im adb.exe
    tasklist | find "fastboot.exe" 1>nul 2>nul && taskkill /f /im fastboot.exe
    goto CMD-CONTINUE)
call %framwork_workspace%\tmp\cmd.bat || ECHOC {0C}                                                          [好像出错了]{0F}{\n}
goto CMD-CONTINUE

::goto :eof


:NODEV
ECHOC {0C}                                                    [设备未(正确)连接]{0F}{\n}
goto CMD-CONTINUE






:FATAL
ECHO. & if exist tool\Win\ECHOC.exe (tool\Win\ECHOC {%c_e%}可真是个杂鱼呢，脚本无法运行了呢. 请查看日志. {%c_h%}按任意键退出...{%c_i%}{\n}& pause>nul & EXIT) else (ECHO.可真是个杂鱼呢，脚本无法运行了呢. 按任意键退出...& pause>nul & EXIT)
