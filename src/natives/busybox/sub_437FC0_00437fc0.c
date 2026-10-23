// busybox.exe @ 0x437fc0 size=268

int __usercall sub_437FC0@<eax>(unsigned int *a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edi
  _DWORD *Block; // ecx
  int i; // ebp
  int v10; // esi
  _DWORD *v11; // eax
  size_t v12; // edi
  int *v13; // eax
  int v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  unsigned int v18; // [esp+14h] [ebp-18h]
  _DWORD *v19; // [esp+18h] [ebp-14h]

  v4 = sub_438158(a3, a2);
  if ( v4 == 0 )
  {
    v5 = *a1 + 1;
    *a1 = v5;
    if ( v5 / a1[1] > 0xA )
    {
      v6 = a1[2];
      if ( v6 != 5 )
      {
        a1[2] = v6 + 1;
        v7 = (unsigned __int16)word_47D394[v6];
        v16 = sub_4728CC();
        v18 = a1[1];
        Block = (_DWORD *)a1[4];
        for ( i = 0; i != v18; ++i )
        {
          v10 = Block[i];
          while ( v10 != 0 )
          {
            v19 = Block;
            v17 = *(_DWORD *)(v10 + 24);
            v11 = (_DWORD *)(v16 + 4 * (sub_4382D0() % v7));
            *(_DWORD *)(v10 + 24) = *v11;
            *v11 = v10;
            v10 = v17;
            Block = v19;
          }
        }
        free(Block);
        a1[1] = v7;
        a1[4] = v16;
      }
    }
    v12 = strlen(a2);
    v4 = sub_4728CC();
    strcpy((char *)(v4 + 28), a2);
    v13 = (int *)(a1[4] + 4 * (sub_4382D0() % a1[1]));
    *(_DWORD *)(v4 + 24) = *v13;
    *v13 = v4;
    a1[3] += v12 + 1;
  }
  return v4;
}

