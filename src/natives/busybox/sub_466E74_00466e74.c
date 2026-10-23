// busybox.exe @ 0x466e74 size=479

int __cdecl sub_466E74(int a1, int a2)
{
  int v2; // ecx
  int i; // eax
  char v4; // di
  unsigned __int8 **v5; // esi
  int v6; // ecx
  int v7; // ecx
  unsigned __int8 *v8; // eax
  int v9; // eax
  int v10; // ebp
  char *v11; // edx
  char *v12; // edi
  unsigned int v13; // ecx
  char v14; // bl
  char *v15; // esi
  int v16; // esi
  char *v17; // ecx
  signed int j; // edx
  int v19; // ecx
  int k; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // eax
  int v27; // [esp+8h] [ebp-34h]
  signed int v28; // [esp+Ch] [ebp-30h]
  int v29; // [esp+Ch] [ebp-30h]
  char v30; // [esp+10h] [ebp-2Ch]
  int v31; // [esp+14h] [ebp-28h]
  int v32; // [esp+18h] [ebp-24h]
  char *v33; // [esp+24h] [ebp-18h] BYREF
  int v34[5]; // [esp+28h] [ebp-14h] BYREF

  v33 = (char *)sub_470E78();
  v34[0] = sub_470E78();
  v27 = sub_4728CC(v2);
  for ( i = 0; i != 256; ++i )
    *(_BYTE *)(v27 + i) = i;
  v4 = sub_435D44(a2, (int)"^+Ccds");
  v5 = (unsigned __int8 **)(a2 + 4 * dword_473090);
  v28 = sub_42D3B0(*v5, (int *)&v33, v6);
  v30 = v4;
  if ( (v4 & 3) != 0 )
    v28 = sub_41E1D4(v33, v28);
  v8 = v5[1];
  if ( v8 != nullptr )
  {
    if ( *v8 == 0 )
      sub_418210("STRING2 cannot be empty");
    v9 = sub_42D3B0(v8, v34, v7);
    v10 = v34[0];
    v11 = v33;
    v12 = &v33[v28];
    v13 = 0;
    v14 = 48;
    while ( v12 != v11 )
    {
      v15 = (char *)(v27 + (unsigned __int8)*v11);
      if ( v9 > v13 )
      {
        v14 = *(_BYTE *)(v10 + v13);
        *v15 = v14;
        ++v13;
      }
      else
      {
        *v15 = v14;
      }
      ++v11;
    }
  }
  else
  {
    v9 = 0;
  }
  v16 = v27 + 256;
  v17 = v33;
  for ( j = 0; j < v28; ++j )
    *(_BYTE *)(v16 + (unsigned __int8)v17[j]) = 1;
  v29 = v27 + 512;
  v19 = v34[0];
  for ( k = 0; k < v9; ++k )
    *(_BYTE *)(v29 + *(unsigned __int8 *)(v19 + k)) = 1;
  v21 = 256;
  while ( 1 )
  {
    v22 = sub_45C560(512, v33, 0);
    v31 = v22;
    if ( v22 <= 0 )
      break;
    v23 = 0;
    v24 = 0;
    do
    {
      v25 = (unsigned __int8)v33[v24];
      if ( (v30 & 4) == 0 || *(_BYTE *)(v16 + v25) == 0 )
      {
        v32 = *(unsigned __int8 *)(v27 + v25);
        if ( (v30 & 8) == 0
          || v21 != *(unsigned __int8 *)(v27 + v25)
          || *(_BYTE *)(v16 + v25) == 0 && *(_BYTE *)(v29 + v21) == 0 )
        {
          *(_BYTE *)(v34[0] + v23) = *(_BYTE *)(v27 + v25);
          v21 = v32;
          ++v23;
        }
      }
      ++v24;
    }
    while ( v24 != v31 );
    if ( v23 != 0 )
      sub_471D00(v23, v34[0]);
  }
  if ( v22 != 0 )
    sub_41823C("read error");
  return 0;
}

