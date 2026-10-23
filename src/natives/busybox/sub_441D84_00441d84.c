// busybox.exe @ 0x441d84 size=227

void *__cdecl sub_441D84(int FileHandle, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  void *result; // eax
  void *v8; // ebx
  int v9; // [esp+24h] [ebp-2Ch]
  int v10; // [esp+28h] [ebp-28h]
  DWORD BytesReturned; // [esp+2Ch] [ebp-24h] BYREF
  _DWORD v12[8]; // [esp+30h] [ebp-20h] BYREF

  v12[4] = &FileHandle;
  v5 = a2;
  v6 = a3;
  v9 = a4;
  v10 = a5;
  result = (void *)_get_osfhandle(FileHandle);
  if ( result != (void *)-1 )
  {
    v8 = result;
    DeviceIoControl(result, 0x900C4u, nullptr, 0, nullptr, 0, &BytesReturned, nullptr);
    v12[0] = v5;
    v12[1] = v6;
    v12[2] = v9;
    v12[3] = v10;
    return (void *)DeviceIoControl(v8, 622792, v12, 16, nullptr, 0, &BytesReturned, nullptr);
  }
  return result;
}

