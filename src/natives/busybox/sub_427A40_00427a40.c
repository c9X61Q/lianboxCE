// busybox.exe @ 0x427a40 size=370

int sub_427A40()
{
  const char *Str; // ebx
  int v1; // ecx
  int i; // edx
  int v3; // ecx
  int v4; // ebx
  int v6; // [esp+Ch] [ebp-78h]
  int v7; // [esp+10h] [ebp-74h]
  _DWORD v8[27]; // [esp+18h] [ebp-6Ch] BYREF

  sub_446AFC();
  v7 = dword_47310C;
  Str = *(const char **)dword_47310C;
  if ( *(_DWORD *)dword_47310C == 0 )
    return 2;
  if ( strchr(Str, 47) == nullptr && strchr(Str, 92) == nullptr )
  {
    do
    {
      if ( sub_448618() < 0 )
        sub_415B40(v1, "%s: not found", Str);
    }
    while ( dword_4734F0 != 0 && *(_BYTE *)dword_4734F0 != 102
         || sub_444C28(*(_DWORD *)(dword_485FF4 + 4), v8) != 0
         || (v8[4] & 0xF000) != 0x8000 );
    Str = (const char *)sub_462C74();
  }
  v6 = *(_DWORD *)(v7 + 4);
  if ( v6 != 0 )
  {
    qmemcpy(v8, (const void *)dword_485FEC, 0x14u);
    *(_BYTE *)(dword_485FEC + 12) = 0;
    for ( i = 1; *(_DWORD *)(v7 + 4 * i + 4) != 0; ++i )
      ;
    v3 = dword_485FEC;
    *(_DWORD *)dword_485FEC = i;
    *(_DWORD *)(v3 + 16) = v7 + 4;
  }
  sub_45E674();
  *(_DWORD *)(dword_485FF0 + 48) = Str;
  v4 = sub_41CC8C(0);
  sub_44D8A4();
  if ( v6 != 0 )
  {
    sub_431F40();
    qmemcpy((void *)dword_485FEC, v8, 20);
  }
  return v4;
}

