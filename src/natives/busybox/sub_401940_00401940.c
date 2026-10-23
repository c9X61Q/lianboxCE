// busybox.exe @ 0x401940 size=626

int sub_401940()
{
  int result; // eax
  int v1; // eax
  void *v2; // esp
  _DWORD v3[2]; // [esp+10h] [ebp-38h] BYREF

  result = dword_4859E8;
  v3[1] = dword_4859E8;
  if ( dword_4859E8 == 0 )
  {
    dword_4859E8 = 1;
    sub_4021F0();
    v1 = sub_4115D8();
    dword_4859EC = 0;
    v2 = alloca(v1);
    dword_4859F0 = (int)v3;
    return 0;
  }
  return result;
}

