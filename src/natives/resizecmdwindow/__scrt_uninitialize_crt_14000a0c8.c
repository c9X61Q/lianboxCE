// resizecmdwindow.exe @ 0x14000a0c8 size=41

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( byte_14000FA80 == 0 || a2 == 0 )
  {
    sub_14000A208(a1);
    LOBYTE(v3) = v2;
    sub_14000A208(v3);
  }
  return 1;
}

