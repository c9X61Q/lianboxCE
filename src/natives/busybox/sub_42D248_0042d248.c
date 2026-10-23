// busybox.exe @ 0x42d248 size=115

int sub_42D248()
{
  int v0; // ebx
  _DWORD *v2; // [esp+4h] [ebp-8h]

  dword_4734C8 = 0;
  while ( sub_446AFC() != 0 )
    ;
  v2 = (_DWORD *)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    v0 = dword_485FF0;
    *(_WORD *)(dword_485FF0 + 66) = 0;
    sub_447F54();
    ++*(_DWORD *)(v0 + 12);
    if ( dword_4734C8 != 0 )
      *v2 = dword_4734C8;
    sub_460044(*(_DWORD *)(dword_485FEC + 208) + 5, v2, 0);
  }
  return 0;
}

