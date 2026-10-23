// busybox.exe @ 0x41c11c size=341

int __userpurge sub_41C11C@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5)
{
  _DWORD *v5; // edi
  int i; // esi
  int v7; // ebx
  unsigned __int8 v8; // al
  int j; // ebx
  int v10; // eax
  int v12; // eax
  int v13; // [esp+8h] [ebp-34h]
  int v15; // [esp+10h] [ebp-2Ch]
  int v16; // [esp+14h] [ebp-28h]
  __int16 v17; // [esp+22h] [ebp-1Ah]
  int v18; // [esp+24h] [ebp-18h]
  unsigned int v19; // [esp+28h] [ebp-14h]

  v5 = *(_DWORD **)(a1 + 68);
  v15 = v5[6] + 12 * a4;
  v16 = 1 << a3;
  v17 = ~(1 << a3);
  for ( i = 0; *(_DWORD *)(v15 + 4) > i; ++i )
  {
    v13 = *(_DWORD *)(*(_DWORD *)(v15 + 8) + 4 * i);
    v7 = *v5 + 8 * v13;
    v8 = *(_BYTE *)(v7 + 4);
    if ( v8 == 9 )
    {
      if ( (a2 & 2) != 0 && *(_DWORD *)v7 == a3 )
        return 0;
    }
    else if ( v8 <= 9u )
    {
      if ( v8 == 4 )
      {
        if ( a5 != -1 )
        {
          for ( j = *(_DWORD *)(a1 + 100) + 20 * a5; *(_BYTE *)(j - 4) != 0; j += 20 )
          {
            if ( *(_DWORD *)j == v13 && (a3 > 0x1F || (*(_WORD *)(j + 18) & (unsigned __int16)v16) != 0) )
            {
              v10 = **(_DWORD **)(v5[5] + 12 * v13 + 8);
              if ( a4 == v10 )
                return -(a2 & 1);
              v19 = a3;
              v18 = a2;
              v12 = sub_41C11C(v10, a5);
              a2 = v18;
              a3 = v19;
              if ( v12 == -1 )
                return -1;
              if ( v12 == 0 && (v18 & 2) != 0 )
                return 0;
              if ( v19 <= 0x1F )
                *(_WORD *)(j + 18) &= v17;
            }
          }
        }
      }
      else if ( v8 == 8 && (a2 & 1) != 0 && *(_DWORD *)v7 == a3 )
      {
        return -1;
      }
    }
  }
  return a2 >> 1;
}

