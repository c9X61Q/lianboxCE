// busybox.exe @ 0x447f54 size=94

char sub_447F54()
{
  int v0; // ebx
  _DWORD *v1; // eax
  bool v2; // cc
  int v3; // eax

  v0 = dword_485FF0;
  v1 = (_DWORD *)(*(unsigned __int8 *)(dword_485FF0 + 66) + 1);
  if ( v1 != (_DWORD *)byte_4733A0 )
  {
    byte_4733A0 = *(_BYTE *)(dword_485FF0 + 66) + 1;
    v2 = (char)v1 <= 1;
    LOBYTE(v1) = (_BYTE)v1 - 1;
    if ( !v2 && dword_473454 == 0 )
    {
      v1 = sub_4460DC(23);
      dword_473454 = (int)v1;
      v1[3] = sub_43351C;
    }
  }
  if ( dword_473454 != 0 )
  {
    v3 = *(_DWORD *)dword_473454;
    if ( *(_BYTE *)(v0 + 77) != 0 )
      v1 = (_DWORD *)(v3 | 8);
    else
      v1 = (_DWORD *)(v3 & 0xFFFFFFF7);
    *(_DWORD *)dword_473454 = v1;
  }
  return (char)v1;
}

