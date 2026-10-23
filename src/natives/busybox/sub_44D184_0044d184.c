// busybox.exe @ 0x44d184 size=167

_BYTE *sub_44D184()
{
  int v0; // ebp
  _BYTE *v1; // esi
  int v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax

  if ( sub_458374() == 13 )
  {
    byte_473198 = 3;
    v0 = 1;
  }
  else
  {
    byte_4735A8 = 1;
    v0 = 0;
  }
  v1 = sub_448D0C();
  if ( sub_458374() == 8 )
  {
    v2 = sub_463A54();
    *(_BYTE *)v2 = 1;
    v3 = (_DWORD *)sub_463A54();
    *(_DWORD *)(v2 + 4) = v3;
    v3[1] = v1;
    do
    {
      v4 = v3;
      v3 = (_DWORD *)sub_463A54();
      byte_473198 = 7;
      v3[1] = sub_448D0C();
      *v4 = v3;
    }
    while ( sub_458374() == 8 );
    *v3 = 0;
    v1 = (_BYTE *)v2;
  }
  byte_4735A8 = 1;
  if ( v0 != 0 )
  {
    v5 = sub_463A54();
    *(_BYTE *)v5 = 26;
    *(_DWORD *)(v5 + 4) = v1;
    return (_BYTE *)v5;
  }
  return v1;
}

