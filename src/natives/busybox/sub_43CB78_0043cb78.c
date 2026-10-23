// busybox.exe @ 0x43cb78 size=64

int __cdecl sub_43CB78(LPCSTR a1, void (__fastcall *a2)(int, int), int a3)
{
  char *v3; // ebx
  int result; // eax
  int v5; // edx

  v3 = sub_402D50(a1);
  result = -1;
  if ( v3 != nullptr )
  {
    while ( 1 )
    {
      v5 = sub_402F30((int)v3);
      if ( v5 == 0 )
        break;
      a2(a3, v5);
    }
    sub_403050(v3);
    return 0;
  }
  return result;
}

