// busybox.exe @ 0x453164 size=301

_DWORD *__usercall sub_453164@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  int v4; // ecx
  int i; // eax
  int *v7; // edi
  int j; // ecx
  _DWORD *v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  char *v12; // edi
  int v13; // edx
  int k; // eax
  int v15; // edi
  int v16; // ecx
  int v18; // [esp+8h] [ebp-20h]
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]

  v4 = *(_DWORD *)(a3 + 4);
  if ( v4 == 0 )
  {
    *a1 = 0;
    return nullptr;
  }
  v18 = v4;
  for ( i = 0; v4 > i; ++i )
    v18 += *(_DWORD *)(*(_DWORD *)(a3 + 8) + 4 * i);
  v7 = (int *)(a2[8] + 12 * (a2[17] & v18));
  v20 = *v7;
  for ( j = 0; v20 > j; ++j )
  {
    v9 = *(_DWORD **)(v7[2] + 4 * j);
    if ( *v9 == v18 )
    {
      v21 = j;
      v10 = sub_45419C();
      j = v21;
      if ( v10 != 0 )
        return v9;
    }
  }
  v11 = calloc(0x38u, 1u);
  v9 = v11;
  if ( v11 == nullptr )
    goto LABEL_27;
  v12 = (char *)(v11 + 1);
  if ( sub_454254() != 0 )
  {
    free(v9);
    goto LABEL_27;
  }
  v9[10] = v12;
  v13 = *(_DWORD *)(a3 + 4);
  for ( k = 0; k < v13; ++k )
  {
    v15 = *a2 + 8 * *(_DWORD *)(*(_DWORD *)(a3 + 8) + 4 * k);
    v16 = *(unsigned __int8 *)(v15 + 4);
    if ( v16 != 1 )
    {
      switch ( v16 )
      {
        case 2:
          *((_BYTE *)v9 + 52) |= 0x10u;
          continue;
        case 4:
          *((_BYTE *)v9 + 52) |= 0x40u;
          continue;
        case 12:
          goto LABEL_23;
        default:
          break;
      }
    }
    if ( (*(_DWORD *)(v15 + 4) & 0x3FF00) != 0 )
LABEL_23:
      *((_BYTE *)v9 + 52) |= 0x80u;
  }
  if ( sub_45A0D4(v18, v9) != 0 )
  {
    sub_431DD0((void **)v9);
LABEL_27:
    *a1 = 12;
    return nullptr;
  }
  return v9;
}

