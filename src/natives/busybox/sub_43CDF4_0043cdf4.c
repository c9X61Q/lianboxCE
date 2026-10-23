// busybox.exe @ 0x43cdf4 size=53

int __cdecl sub_43CDF4(int a1, int a2)
{
  int (__cdecl *v2)(DWORD); // ecx

  v2 = sub_43CE94;
  if ( a2 == 15 )
    return sub_43D280(v2);
  if ( a2 == 9 || a2 == 0 )
  {
    v2 = (int (__cdecl *)(DWORD))sub_43CE2C;
    return sub_43D280(v2);
  }
  *_errno() = 22;
  return -1;
}

