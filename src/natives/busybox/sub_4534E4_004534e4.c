// busybox.exe @ 0x4534e4 size=300

char __usercall sub_4534E4@<al>(int a1@<eax>, int a2@<edx>, _BYTE *a3@<ecx>)
{
  _DWORD *v5; // ecx
  char result; // al
  int v7; // eax
  int v8; // edx
  int C; // eax
  int j; // edi
  int v11; // ebp
  unsigned int k; // edx
  int v13; // eax
  int i; // [esp+4h] [ebp-2Ch]
  BOOL v15; // [esp+8h] [ebp-28h]
  int v17; // [esp+10h] [ebp-20h]
  _DWORD *v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch]
  _DWORD *v20; // [esp+18h] [ebp-18h]
  unsigned int v21; // [esp+1Ch] [ebp-14h]

  v5 = *(_DWORD **)a1;
  v15 = false;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 92) == 1 )
    v15 = (*(_DWORD *)(a1 + 12) & 0x200000) != 0;
  for ( i = 0; ; ++i )
  {
    result = a2;
    if ( *(_DWORD *)(a2 + 8) <= i )
      break;
    v7 = *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4 * i);
    v17 = 8 * v7;
    v8 = *(unsigned __int8 *)(*v5 + 8 * v7 + 4);
    switch ( v8 )
    {
      case 1:
        C = *(unsigned __int8 *)(*v5 + 8 * v7);
        a3[C] = 1;
        if ( v15 )
        {
          v18 = v5;
          a3[tolower(C)] = 1;
          v5 = v18;
        }
        break;
      case 3:
        for ( j = 0; ; j += 4 )
        {
          v11 = 8 * j;
          if ( j == 32 )
            break;
          v19 = *(_DWORD *)(*(_DWORD *)(*v5 + v17) + j);
          for ( k = 0; k != 32; ++k )
          {
            v13 = v19;
            if ( _bittest(&v13, k) )
            {
              a3[v11] = 1;
              if ( v15 )
              {
                v21 = k;
                v20 = v5;
                a3[tolower(v11)] = 1;
                k = v21;
                v5 = v20;
              }
            }
            ++v11;
          }
        }
        break;
      case 5:
      case 2:
        result = 1;
        memset(a3, 1, 0x100u);
        if ( v8 == 2 )
          *(_BYTE *)(a1 + 28) |= 1u;
        return result;
      default:
        break;
    }
  }
  return result;
}

