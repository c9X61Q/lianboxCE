// busybox.exe @ 0x418ea0 size=150

int sub_418EA0()
{
  _DWORD *v0; // ecx
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // edx
  int v4; // ebx
  int v5; // esi
  unsigned int v7; // [esp+0h] [ebp-1Ch]
  int v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+8h] [ebp-14h]

  v0 = (_DWORD *)dword_486010;
  v1 = *(_DWORD *)dword_486010;
  v8 = dword_486008 & 0x80;
  if ( (dword_486008 & 0x80) != 0 )
  {
    while ( v1 != 0
         && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_486010 + 52) + 4 * v1) - 4) == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_486010 + 52) + 4 * v1 - 4)
                                                                                               - 4) )
      --v1;
  }
  v2 = *(_DWORD *)(dword_486010 + 28);
  v3 = 0;
  while ( 1 )
  {
    v7 = v0[5];
    v4 = v0[12];
    if ( v7 < v1 )
      break;
    v5 = v0[13];
    v9 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * v1) - 4);
    *(_DWORD *)(v4 + 4 * v3) = *(_DWORD *)(v5 + 4 * v1);
    do
      ++v1;
    while ( v8 != 0 && v7 >= v1 && v9 == *(_DWORD *)(*(_DWORD *)(v5 + 4 * v1) - 4) );
    if ( v2 < ++v3 )
      return sub_418F38();
  }
  do
    *(_DWORD *)(v4 + 4 * v3++) = v0[14];
  while ( v2 >= v3 );
  return sub_418F38();
}

