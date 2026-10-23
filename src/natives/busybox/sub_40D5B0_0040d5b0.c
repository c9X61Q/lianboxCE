// busybox.exe @ 0x40d5b0 size=506

unsigned int __cdecl sub_40D5B0(int a1, int a2)
{
  int v2; // ebx
  unsigned int result; // eax
  unsigned int *v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ecx
  unsigned int *v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // edx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // [esp+1Ch] [ebp-50h]
  __int64 v16; // [esp+20h] [ebp-4Ch]
  unsigned int v17; // [esp+28h] [ebp-44h]
  unsigned __int64 v18; // [esp+30h] [ebp-3Ch]
  _DWORD *v19; // [esp+38h] [ebp-34h]
  int v20; // [esp+3Ch] [ebp-30h]
  unsigned int v21; // [esp+40h] [ebp-2Ch]
  unsigned int v22; // [esp+44h] [ebp-28h]
  int v23; // [esp+48h] [ebp-24h]
  _DWORD *v24; // [esp+4Ch] [ebp-20h]

  v2 = *(_DWORD *)(a2 + 16);
  result = 0;
  v23 = v2;
  if ( *(_DWORD *)(a1 + 16) >= v2 )
  {
    v4 = (unsigned int *)(a1 + 20);
    v22 = a1 + 20;
    v5 = a2 + 20;
    v20 = v2 - 1;
    v6 = 4 * (v2 - 1);
    v15 = a2 + 20;
    v24 = (_DWORD *)(a1 + 20 + v6);
    v19 = (_DWORD *)(a2 + 20 + v6);
    v21 = *v24 / (unsigned int)(*v19 + 1);
    if ( *v24 >= (unsigned int)(*v19 + 1) )
    {
      v18 = 0;
      v16 = 0;
      do
      {
        v5 += 4;
        v17 = v18 + *(_DWORD *)(v5 - 4) * v21;
        v18 = (v18 + *(unsigned int *)(v5 - 4) * (unsigned __int64)v21) >> 32;
        v7 = *v4++ - (v16 + v17);
        *(v4 - 1) = v7;
        v16 = BYTE4(v7) & 1;
      }
      while ( (unsigned int)v19 >= v5 );
      if ( *v24 == 0 )
      {
        if ( v22 < (unsigned int)(v24 - 1) )
        {
          v8 = v20;
          do
          {
            if ( v24[v8 - v23] != 0 )
              break;
            --v8;
          }
          while ( v23 - 2 - ((unsigned int)(v6 - 5) >> 2) != v8 );
          v20 = v8;
        }
        *(_DWORD *)(a1 + 16) = v20;
      }
    }
    if ( (int)sub_410660(a1, a2) >= 0 )
    {
      v9 = (unsigned int *)(a1 + 20);
      v10 = 0;
      ++v21;
      do
      {
        v15 += 4;
        v11 = *v9++ - (v10 + *(unsigned int *)(v15 - 4));
        *(v9 - 1) = v11;
        v10 = BYTE4(v11) & 1;
      }
      while ( (unsigned int)v19 >= v15 );
      v12 = (_DWORD *)(v22 + 4 * v20);
      if ( *v12 == 0 )
      {
        if ( v22 < (unsigned int)(v12 - 1) )
        {
          v13 = v20 - 1 - (((unsigned int)v12 - a1 - 25) >> 2);
          v14 = v20;
          do
          {
            if ( *(_DWORD *)(v22 + 4 * v14 - 4) != 0 )
              break;
            --v14;
          }
          while ( v14 != v13 );
          v20 = v14;
        }
        *(_DWORD *)(a1 + 16) = v20;
      }
    }
    return v21;
  }
  return result;
}

