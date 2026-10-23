// busybox.exe @ 0x46094c size=432

int __usercall sub_46094C@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _DWORD *v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]
  size_t Block[5]; // [esp+2Ch] [ebp+0h] BYREF

  v4 = *(_DWORD *)(a2 + 12);
  v9 = sub_454210(Block, *(_DWORD *)(a2 + 8));
  if ( v9 == 0 )
  {
    v9 = sub_46B6CC(Block);
    if ( v9 == 0 )
    {
      v12 = 0;
      while ( v4 > 0 )
      {
        if ( *(_DWORD *)(*(_DWORD *)a2 + 4 * v4) != 0 )
          v12 = 0;
        else
          ++v12;
        if ( a1[26] < v12 )
        {
          memset(*(void **)a2, 0, 4 * v4);
          break;
        }
        Block[1] = 0;
        v10 = v4 - 1;
        v5 = *(_DWORD *)(a1[21] + 4 * v4 - 4);
        if ( v5 != 0 )
        {
          v14 = (_DWORD *)a1[17];
          for ( i = 0; i < *(_DWORD *)(v5 + 20); ++i )
          {
            v11 = *(_DWORD *)(*(_DWORD *)(v5 + 24) + 4 * i);
            if ( sub_41C314(a1, *v14 + 8 * v11, v10) )
            {
              v7 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v4);
              if ( v7 != 0 )
              {
                v15 = *(_DWORD *)(v14[3] + 4 * v11);
                if ( sub_4541D4(v7 + 4, v15) != 0
                  && (*(_DWORD *)(a2 + 20) == 0 || sub_41C000(v15, a2 + 16, v4, v11, v10) == 0)
                  && sub_4543C4(Block, v11) == -1 )
                {
                  v9 = 12;
                  goto LABEL_26;
                }
              }
            }
          }
        }
        v6 = sub_46B6CC(Block);
        if ( v6 != 0 )
        {
          v9 = v6;
          break;
        }
        --v4;
      }
    }
LABEL_26:
    free((void *)Block[2]);
  }
  return v9;
}

