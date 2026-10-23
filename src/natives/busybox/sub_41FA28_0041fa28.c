// busybox.exe @ 0x41fa28 size=85

int __usercall sub_41FA28@<eax>(const char *a1@<eax>, int a2@<edx>, _DWORD (__cdecl *a3)(const char *, int)@<ecx>)
{
  int *v5; // edx
  int result; // eax

  if ( (int)a3(a1, a2) >= 0 )
    return 2 * ((*(_DWORD *)(a2 + 16) & 0xF000) == 0x4000) + 1;
  v5 = _errno();
  result = 0;
  if ( *v5 != 2 )
  {
    sub_417FE4((int)v5, "can't stat '%s'", a1);
    return -1;
  }
  return result;
}

