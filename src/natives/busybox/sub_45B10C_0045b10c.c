// busybox.exe @ 0x45b10c size=163

int __cdecl sub_45B10C(int a1, int a2)
{
  char v2; // al
  int v3; // ecx
  int v4; // ebx
  CHAR **v5; // esi
  int v6; // edi
  const char *v7; // eax
  char v8; // dl

  v2 = sub_435D44(a2, (int)"^fiRrv");
  v4 = -(v2 & 1) & 8;
  if ( (v2 & 2) != 0 )
    LOWORD(v4) = v4 | 0x10;
  if ( (v2 & 0xC) != 0 )
    LOWORD(v4) = v4 | 4;
  if ( (v2 & 0x10) != 0 )
    BYTE1(v4) |= 0x10u;
  v5 = (CHAR **)(a2 + 4 * dword_473090);
  if ( *v5 != nullptr )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_417A68(*v5, v3);
      if ( *v7 == 46 )
      {
        v8 = v7[1];
        if ( v8 == 0 || v8 == 46 && v7[2] == 0 )
          break;
      }
      if ( sub_45A294(*v5, v4) < 0 )
        goto LABEL_15;
LABEL_16:
      if ( *++v5 == nullptr )
        return v6;
    }
    sub_4181F8("can't remove '.' or '..'");
LABEL_15:
    v6 = 1;
    goto LABEL_16;
  }
  if ( (v4 & 8) == 0 )
    sub_418164();
  return 0;
}

