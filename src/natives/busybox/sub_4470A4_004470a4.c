// busybox.exe @ 0x4470a4 size=176

void *__usercall sub_4470A4@<eax>(unsigned int a1@<eax>, void *a2@<edx>)
{
  int v3; // edi
  int v4; // eax
  unsigned int i; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // edx
  void *Block; // [esp+0h] [ebp-14h]

  Block = a2;
  v3 = dword_486010;
  v4 = *(_DWORD *)(dword_486010 - 24);
  if ( a1 < v4 + 16 || *(_DWORD *)(v4 + 4) <= a1 )
    sub_4645B8();
  for ( i = a1; ; i += 24 )
  {
    v6 = *(_DWORD *)(v3 - 24);
    if ( *(_DWORD *)(v6 + 4) <= i )
      break;
    if ( (*(_DWORD *)i & 0x2002) == 2 )
    {
      v7 = (_DWORD *)sub_4394A8((int *)i);
      sub_41C970(v7);
      free(*(void **)(*(_DWORD *)(i + 20) + 16));
      free(*(void **)(i + 20));
    }
    if ( _bittest((const signed __int32 *)i, 0xBu) )
    {
      v8 = *(_DWORD **)(i + 20);
      *(_DWORD *)(i + 20) = 0;
      while ( v8 != nullptr )
      {
        v9 = (_DWORD *)v8[2];
        free(v8);
        v8 = v9;
      }
    }
    sub_41CBC4(i);
  }
  *(_DWORD *)(v6 + 4) = a1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v3 - 24);
    v11 = *(_DWORD *)(v10 + 8);
    if ( v11 == 0 || *(_DWORD *)(v10 + 4) != v10 + 16 )
      break;
    *(_DWORD *)(v3 - 24) = v11;
  }
  return Block;
}

