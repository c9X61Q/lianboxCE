// busybox.exe @ 0x46431c size=254

BOOL __cdecl sub_46431C(int a1, int a2)
{
  _BYTE *v2; // ebx
  const char *v3; // eax
  const char *v4; // eax
  FARPROC v5; // eax
  int v6; // edx
  LPCSTR v8; // [esp+0h] [ebp-54h]
  LPCSTR lpProcName; // [esp+4h] [ebp-50h]
  const char *v10; // [esp+Ch] [ebp-48h] BYREF
  _DWORD v11[17]; // [esp+10h] [ebp-44h] BYREF

  v10 = nullptr;
  sub_435D44(a2, (int)"c:", &v10);
  if ( *(_DWORD *)(a2 + 4 * dword_473090) != 0 )
    sub_418164();
  sub_433530();
  v2 = (_BYTE *)sub_47188C();
  sub_460FFC(v2);
  memset(&v11[1], 0, 0x38u);
  v11[0] = 60;
  v11[3] = "runas";
  v11[4] = v2;
  sub_443260(nullptr, 0);
  v3 = (const char *)sub_471350(v8, lpProcName);
  v4 = (const char *)sub_4708BC("--busybox ash -d \"%s\" -t \"BusyBox ash (Admin)\" ", v3);
  v11[5] = v4;
  if ( v10 != nullptr )
    v11[5] = sub_4708BC("%s -s -c \"%s\"", v4, v10);
  v11[7] = 1;
  v5 = sub_435244("shell32.dll", "ShellExecuteExA", dword_473558);
  v6 = -1;
  if ( v5 != nullptr )
    return ((__int64 (__stdcall *)(_DWORD *))v5)(v11) == 0;
  return v6;
}

