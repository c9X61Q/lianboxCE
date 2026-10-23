// busybox.exe @ 0x413328 size=73

void *__usercall sub_413328@<eax>(unsigned __int8 *a1@<eax>, void *a2@<edx>)
{
  unsigned __int8 *i; // edx
  unsigned __int8 v4; // al
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // edx
  void *Block; // [esp+0h] [ebp-Ch]

  Block = a2;
  for ( i = a1; ; ++i )
  {
    v4 = *i;
    if ( *i == 0 )
      break;
    if ( v4 == 127 || v4 <= 0x1Fu )
    {
      free(a1);
      return Block;
    }
  }
  v5 = dword_48600C;
  v6 = sub_47168C(*((_DWORD *)dword_48600C + 14), 1028);
  v5[13] = v6;
  v7 = v5[14];
  *(_DWORD *)(v6 + 4 * v7) = a1;
  v5[14] = v7 + 1;
  return Block;
}

