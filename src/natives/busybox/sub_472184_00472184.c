// busybox.exe @ 0x472184 size=243

int sub_472184()
{
  int result; // eax
  int Val; // ebx
  int v2; // eax
  char *v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // esi

  if ( byte_4735A8 != 0 )
  {
    byte_4735A8 = 0;
    return byte_473450;
  }
  sub_45E8B8(byte_4734B0, 2);
  while ( 1 )
  {
    do
    {
      do
        Val = sub_44CC6C();
      while ( Val == 32 || Val == 9 );
    }
    while ( Val == 257 );
    if ( Val != 35 )
      break;
    do
      v2 = sub_44CA70();
    while ( v2 != 10 && v2 != 256 );
    sub_452778();
  }
  if ( Val != 92 )
  {
    if ( Val == 256 )
    {
      v4 = 4737886;
      goto LABEL_22;
    }
    if ( Val == 10 )
      sub_446CBC();
    v3 = strchr("\n()&|;", Val);
    v4 = (int)v3;
    if ( v3 != nullptr )
    {
      if ( v3 - "\n()&|;" <= 2 )
      {
LABEL_22:
        v6 = v4 - (_DWORD)"\n()&|;";
        result = byte_484B60[v6];
        byte_473450 = byte_484B60[v6];
        return result;
      }
      if ( Val == sub_44CC6C() )
      {
        v4 += 4;
        goto LABEL_22;
      }
      sub_452778();
      if ( Val != 38 || v5 != 62 )
        goto LABEL_22;
    }
  }
  return sub_458414(Val, 0, 0, 0);
}

