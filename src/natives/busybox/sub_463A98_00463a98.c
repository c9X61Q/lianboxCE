// busybox.exe @ 0x463a98 size=296

int __userpurge sub_463A98@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v6; // ebx
  int i; // edi
  int v8; // ecx
  int v9; // edx
  int *v10; // eax
  int v11; // edx
  int j; // edi
  int v14; // edx
  unsigned int v15; // eax
  int v16; // [esp+4h] [ebp-28h]
  int v17; // [esp+4h] [ebp-28h]
  int v18; // [esp+8h] [ebp-24h]
  size_t Block[7]; // [esp+10h] [ebp-1Ch] BYREF

  v6 = a1[7] + 12 * a2;
  memset(Block, 0, 0xCu);
  for ( i = 0; *(_DWORD *)(v6 + 4) > i; ++i )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * i);
    if ( a2 != v8 && (*(_BYTE *)(*a1 + 8 * v8 + 4) & 8) != 0 )
    {
      v18 = 12 * v8;
      v9 = 12 * v8 + a1[5];
      v10 = *(int **)(v9 + 8);
      v16 = -1;
      if ( *(int *)(v9 + 4) > 1 )
        v16 = v10[1];
      if ( sub_4541D4(v6, *v10) == 0 && sub_4541D4(a3, v11) != 0
        || v16 > 0 && sub_4541D4(v6, v16) == 0 && sub_4541D4(a3, v16) != 0 )
      {
        v17 = sub_454010(Block, a4, a1[7] + v18);
        if ( v17 != 0 )
        {
          free((void *)Block[2]);
          return v17;
        }
      }
    }
  }
  for ( j = 0; *(_DWORD *)(v6 + 4) > j; ++j )
  {
    if ( sub_4541D4((int)Block, *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * j)) == 0 )
    {
      v15 = sub_4541D4(a3, v14);
      sub_4545FC(a3, v15 - 1);
    }
  }
  free((void *)Block[2]);
  return 0;
}

