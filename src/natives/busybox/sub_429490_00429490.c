// busybox.exe @ 0x429490 size=463

int __userpurge sub_429490@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int result; // eax
  int v12; // ecx
  int v13; // ecx
  unsigned __int16 v14; // cx
  int v15; // edx
  int i; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // [esp+8h] [ebp-20h]
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h]
  int v23; // [esp+10h] [ebp-18h]

  while ( 1 )
  {
    v21 = *a1;
    v8 = *a1 + 8 * a2;
    v9 = a1[5];
    v22 = a3;
    if ( *(_BYTE *)(v8 + 4) == 4 )
    {
      v20 = *(_DWORD *)(a1[3] + 4 * a2);
      *(_DWORD *)(v9 + 12 * a3 + 4) = 0;
      a3 = sub_429400(a1, v20, a5);
      if ( a3 == -1 )
        return 12;
      *(_DWORD *)(a1[3] + 4 * v22) = *(_DWORD *)(a1[3] + 4 * a2);
      goto LABEL_24;
    }
    v12 = v9 + 12 * a2;
    v23 = *(_DWORD *)(v12 + 4);
    if ( v23 == 0 )
      break;
    v13 = **(_DWORD **)(v12 + 8);
    v20 = v13;
    *(_DWORD *)(12 * a3 + v9 + 4) = 0;
    if ( v23 != 1 )
    {
      for ( i = a1[2] - 1; ; --i )
      {
        v17 = v21 + 8 * i;
        if ( (*(_BYTE *)(v17 + 6) & 4) == 0 || i <= 0 )
          break;
        if ( *(_DWORD *)(a1[4] + 4 * i) == v20 )
        {
          v18 = (*(_DWORD *)(v17 + 4) >> 8) & 0x3FF;
          if ( a5 == v18 )
          {
            if ( sub_4543C4(v18, i) >= 0 )
            {
LABEL_22:
              v20 = *(_DWORD *)(*(_DWORD *)(a1[5] + 12 * a2 + 8) + 4);
              v14 = a5;
              v15 = v20;
              goto LABEL_23;
            }
            return 12;
          }
        }
      }
      v19 = sub_429400(a1, v20, a5);
      if ( v19 != -1 && sub_4543C4(v19, v19) >= 0 )
      {
        result = sub_429490(a4, a5);
        if ( result != 0 )
          return result;
        goto LABEL_22;
      }
      return 12;
    }
    if ( a2 == a4 && a2 != a3 )
    {
      if ( sub_4543C4(v13, v13) >= 0 )
        return 0;
      return 12;
    }
    a5 |= (*(_DWORD *)(v8 + 4) >> 8) & 0x3FF;
    v14 = a5;
    v15 = v20;
LABEL_23:
    a3 = sub_429400(a1, v15, v14);
    if ( a3 == -1 )
      return 12;
LABEL_24:
    if ( sub_4543C4(v10, a3) < 0 )
      return 12;
    a2 = v20;
  }
  *(_DWORD *)(a1[3] + 4 * a3) = *(_DWORD *)(a1[3] + 4 * a2);
  return 0;
}

