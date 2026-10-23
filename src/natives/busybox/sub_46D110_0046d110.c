// busybox.exe @ 0x46d110 size=84

char sub_46D110()
{
  _DWORD *v0; // ebx
  int v1; // esi
  int v2; // eax
  char v3; // al
  int v4; // eax

  v0 = dword_48600C;
  v1 = *((_DWORD *)dword_48600C + 8);
  while ( 1 )
  {
    v2 = v0[5];
    if ( v2 == 0 )
      break;
    v3 = *(_BYTE *)(v1 + v2 - 1);
    if ( v3 != 32 && (unsigned __int8)(v3 - 9) > 4u )
      break;
    sub_43B090(1u);
  }
  while ( 1 )
  {
    v4 = v0[5];
    if ( v4 == 0 )
      break;
    LOBYTE(v4) = *(_BYTE *)(v1 + v4 - 1);
    if ( (_BYTE)v4 == 32 || (unsigned __int8)(v4 - 9) <= 4u )
      break;
    sub_43B090(1u);
  }
  return v4;
}

