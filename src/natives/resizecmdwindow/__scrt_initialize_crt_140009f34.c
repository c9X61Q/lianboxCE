// resizecmdwindow.exe @ 0x140009f34 size=73

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_14000FA80;
  if ( a1 == 0 )
    v1 = 1;
  byte_14000FA80 = v1;
  _isa_available_init();
  if ( (unsigned __int8)((__int64 (*)(void))sub_14000A208)() == 0 )
    return 0;
  if ( (unsigned __int8)((__int64 (*)(void))sub_14000A208)() == 0 )
  {
    sub_14000A208(0);
    return 0;
  }
  return 1;
}

