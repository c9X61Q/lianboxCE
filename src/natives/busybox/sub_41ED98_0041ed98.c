// busybox.exe @ 0x41ed98 size=69

int *__usercall sub_41ED98@<eax>(int a1@<eax>, int a2@<edx>)
{
  int *result; // eax
  int *v4; // [esp+Ch] [ebp-8h] BYREF

  *(double *)a2 = sub_402B30(a1, (int)&v4);
  result = v4;
  if ( *(_BYTE *)v4 != 0 )
  {
    result = _errno();
    *result = 34;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return result;
}

