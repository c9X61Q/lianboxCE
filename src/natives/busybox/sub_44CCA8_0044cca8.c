// busybox.exe @ 0x44cca8 size=726

BOOL __cdecl sub_44CCA8(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v5; // esi
  int v6; // edx
  int v7; // ebx
  char *v8; // edi
  signed int v9; // ecx
  int v10; // esi
  char *i; // esi
  BOOL v12; // eax
  bool v13; // zf
  char v14; // [esp+14h] [ebp-60h]
  unsigned int v15; // [esp+18h] [ebp-5Ch]
  void *Block; // [esp+1Ch] [ebp-58h]
  int v17; // [esp+20h] [ebp-54h]
  int *v18; // [esp+24h] [ebp-50h]
  int v19; // [esp+2Ch] [ebp-48h]
  signed int v20; // [esp+30h] [ebp-44h]
  int v21; // [esp+34h] [ebp-40h] BYREF
  int v22; // [esp+38h] [ebp-3Ch] BYREF
  int v23[14]; // [esp+3Ch] [ebp-38h] BYREF

  v2 = a2;
  memset(v23, 0, 0x28u);
  if ( dword_485AD0[1] == 107
    && (v3 = *(_DWORD *)(a2 + 4)) != 0
    && *(_BYTE *)v3 == 45
    && (v15 = sub_4354AC((const char *)(v3 + 1))) != -1 )
  {
    v2 = a2 + 4;
  }
  else
  {
    v15 = 15;
  }
  v22 = -1;
  v21 = -1;
  v14 = sub_435D44(v2, (int)"vlafxons:+P:+", &v21, &v22);
  if ( dword_485AD0[1] == 107 && (v14 & 2) != 0 )
  {
    sub_44EAAC();
    return false;
  }
  v5 = dword_473090;
  v19 = getpid();
  if ( v21 == 0 )
  {
    *_errno() = 40;
    v21 = -1;
  }
  v18 = (int *)(v2 + 4 * v5);
  v6 = *v18;
  if ( (v21 & v22) >= 0 )
  {
    if ( v6 == 0 )
      goto LABEL_18;
  }
  else if ( v6 == 0 || v18[1] != 0 )
  {
    sub_418164();
  }
  sub_4716D4((v14 & 0x10) == 0 ? 9 : 1, v6);
LABEL_18:
  Block = nullptr;
  v17 = 0;
  while ( 1 )
  {
    v7 = sub_450908();
    if ( v7 == 0 )
      break;
    if ( *(_DWORD *)(v7 + 36) != v19
      && ((v14 & 1) != 0 || (v22 < 0 || *(_DWORD *)(v7 + 40) == v22) && (v21 < 0 || *(_DWORD *)(v7 + 48) == v21)) )
    {
      v8 = *(char **)(v7 + 8);
      if ( v8 != nullptr )
      {
        v10 = *(unsigned __int16 *)(v7 + 6);
        v9 = -1;
        if ( (v14 & 4) == 0 )
          v9 = strlen(*(const char **)(v7 + 8));
        if ( *(_WORD *)(v7 + 6) != 0 && v8[v10 - 1] == 0 )
          --v10;
        for ( i = &v8[v10]; v8 != i; --i )
        {
          if ( (unsigned __int8)*(i - 1) <= 0x1Fu )
            *(i - 1) = 32;
        }
      }
      else
      {
        v8 = (char *)(v7 + 72);
        v9 = -1;
      }
      if ( (v14 & 1) != 0 && (v22 >= 0 && *(_DWORD *)(v7 + 40) != v22 || v21 >= 0 && *(_DWORD *)(v7 + 48) != v21) )
        goto LABEL_51;
      v12 = true;
      if ( *v18 != 0 )
      {
        while ( 1 )
        {
          v20 = v9;
          v13 = sub_459FE8((int)v23, v8, 1, (int)&v23[8], 0) == 0;
          v12 = v13;
          v9 = v20;
          if ( v13 )
            break;
          if ( (char *)(v7 + 72) == v8 )
            goto LABEL_50;
          v9 = -1;
          v8 = (char *)(v7 + 72);
        }
        if ( (v14 & 0x10) != 0 )
        {
          v12 = false;
          if ( v23[8] == 0 )
            v12 = v8[v23[9]] == 0;
        }
      }
LABEL_50:
      if ( (v14 & 1) != v12 )
      {
LABEL_51:
        v17 = *(_DWORD *)(v7 + 36);
        if ( (v14 & 0x40) != 0 )
        {
          free(Block);
          Block = (void *)sub_47188C();
        }
        else
        {
          if ( v9 >= 0 )
            v8[v9] = 0;
          sub_412C10(*(_DWORD *)(v7 + 36), v15);
          if ( (v14 & 0x20) != 0 )
            break;
        }
      }
    }
  }
  if ( Block != nullptr )
    sub_412C10(v17, v15);
  return v17 == 0;
}

