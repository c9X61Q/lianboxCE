// busybox.exe @ 0x44dfc4 size=377

int __cdecl sub_44DFC4(double a1)
{
  unsigned __int64 v1; // kr00_8
  unsigned __int64 v3; // rcx
  int v4; // [esp+Ch] [ebp-1Ch]
  unsigned __int64 v5; // [esp+Ch] [ebp-1Ch]

  if ( a1 >= 9.223372e18 )
    v1 = __PAIR64__(((unsigned __int64)(__int64)(a1 - 9.223372e18) >> 32) + 0x80000000, (__int64)(a1 - 9.223372e18));
  else
    v1 = (__int64)a1;
  switch ( *(&MultiByteStr + 1) )
  {
    case 0xAu:
      if ( (double)v1 == a1 )
        return ((_DWORD (*)(const char *, ...))sub_46F088)("%llu\n", v1);
      else
        return ((_DWORD (*)(const char *, ...))sub_46F088)("%g\n", a1);
    case 8u:
      return ((_DWORD (*)(const char *, ...))sub_46F088)("%llo\n", v1);
    case 0x10u:
      return ((_DWORD (*)(const char *, ...))sub_46F088)("%llx\n", v1);
    default:
      v4 = 63;
      v3 = 0x8000000000000000uLL;
      do
      {
        if ( (v1 & v3) != 0 )
          break;
        v3 >>= 1;
        --v4;
      }
      while ( v4 != 0 );
      do
      {
        v5 = v3;
        sub_418130(49 - ((v1 & v3) == 0));
        v3 = v5 >> 1;
      }
      while ( v5 >> 1 != 0 );
      return sub_418130(10);
  }
}

