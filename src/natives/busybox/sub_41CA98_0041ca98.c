// busybox.exe @ 0x41ca98 size=96

int sub_41CA98()
{
  int v0; // ebx
  int v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  char v4; // dl

  ++*(_DWORD *)(dword_485FF0 + 56);
  v0 = dword_4731A4;
  v1 = dword_4731A4 + 124;
  while ( v0 != v1 )
  {
    v2 = (_DWORD *)v0;
    while ( 1 )
    {
      v3 = (_DWORD *)*v2;
      if ( *v2 == 0 )
        break;
      v4 = *((_BYTE *)v3 + 8);
      if ( v4 != 0 && (v4 != 2 || (**(_BYTE **)v3[1] & 2) != 0 || dword_473194 <= 0) )
      {
        v2 = (_DWORD *)*v2;
      }
      else
      {
        *v2 = *v3;
        sub_4631A8();
      }
    }
    v0 += 4;
  }
  return sub_43B8DC();
}

