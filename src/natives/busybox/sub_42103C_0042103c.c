// busybox.exe @ 0x42103c size=957

void __cdecl __noreturn sub_42103C(int a1, int a2)
{
  char v2; // al
  const char *v3; // eax
  int v4; // ebp
  int *Base; // esi
  _BYTE *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int *v11; // eax
  _DWORD *v12; // ebp
  const char *v13; // eax
  char v14; // di
  int v15; // ebx
  int k; // edi
  signed int v17; // ebx
  int j; // eax
  int v19; // edx
  int v20; // edi
  FILE *v21; // eax
  int v22; // eax
  int NumOfElements; // [esp+18h] [ebp-50h]
  unsigned __int8 v24; // [esp+1Fh] [ebp-49h]
  _BYTE *Block; // [esp+20h] [ebp-48h]
  int i; // [esp+28h] [ebp-40h]
  signed int v27; // [esp+2Ch] [ebp-3Ch]
  int v28; // [esp+2Ch] [ebp-3Ch]
  char *Buffer; // [esp+34h] [ebp-34h]
  int v30; // [esp+40h] [ebp-28h]
  unsigned __int8 *v31; // [esp+50h] [ebp-18h]
  _BYTE *v32; // [esp+50h] [ebp-18h]
  char *v33; // [esp+54h] [ebp-14h]

  v2 = sub_435D44(a2, "^b:c:f:d:sn");
  if ( (v2 & 7) == 0 )
  {
    v3 = "expected a list of bytes, characters, or fields";
    goto LABEL_7;
  }
  if ( (v2 & 8) != 0 )
  {
    v24 = *v31;
    if ( *v31 != 0 && v31[1] != 0 )
    {
      v3 = "the delimiter must be a single character";
      goto LABEL_7;
    }
  }
  else
  {
    v24 = 9;
  }
  v4 = dword_473090;
  if ( (v2 & 4) != 0 )
  {
    NumOfElements = 0;
  }
  else
  {
    NumOfElements = v2 & 0x10;
    if ( (v2 & 0x10) != 0 )
      sub_41784C("suppressing non-delimited lines makes sense%s", " only when operating on fields");
    if ( v24 != 9 )
      sub_41784C("a delimiter may be specified%s", " only when operating on fields");
  }
  Base = nullptr;
  while ( 1 )
  {
    v6 = (_BYTE *)sub_463A10();
    v32 = v6;
    if ( v6 == nullptr )
      break;
    if ( *v6 != 0 )
    {
      if ( *(_BYTE *)sub_463A10() != 0 && (v8 = sub_4708EC()) != 0 )
        v7 = v8 - 1;
      else
        v7 = 0;
      if ( v32 == nullptr )
        goto LABEL_27;
      v9 = 0x7FFFFFFF;
      if ( *v32 != 0 )
      {
        v10 = sub_4708EC();
        if ( v10 == 0 )
          v10 = 0x7FFFFFFF;
        v9 = v10 - 1;
        if ( v7 == v10 - 1 )
LABEL_27:
          v9 = -1;
      }
      Base = (int *)sub_47168C(NumOfElements, 2052);
      v11 = &Base[2 * NumOfElements];
      *v11 = v7;
      v11[1] = v9;
      ++NumOfElements;
    }
  }
  v3 = "missing list of positions";
  if ( NumOfElements == 0 )
LABEL_7:
    sub_418210(v3);
  v12 = (_DWORD *)(a2 + 4 * v4);
  qsort(Base, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_41CFCC);
  if ( *v12 == 0 )
    *--v12 = "-";
  while ( sub_431518() == 0 )
  {
LABEL_72:
    if ( *++v12 == 0 )
      sub_42F138();
  }
  for ( i = 0; ; ++i )
  {
    v13 = (const char *)sub_470E94();
    v33 = (char *)v13;
    if ( v13 == nullptr )
    {
      sub_42EE00();
      goto LABEL_72;
    }
    v27 = strlen(v13);
    Block = (_BYTE *)sub_4728CC();
    v14 = dword_486008;
    v15 = dword_486008 & 3;
    if ( (dword_486008 & 3) != 0 )
      break;
    if ( v24 == 10 )
    {
      for ( j = *Base; j <= i; j = Base[2 * v15] )
      {
        do
        {
          if ( j >= i )
            goto LABEL_54;
          ++j;
          v19 = Base[2 * v15 + 1];
        }
        while ( v19 != -1 && j <= v19 );
        if ( ++v15 == NumOfElements )
          break;
      }
    }
    else
    {
      if ( strchr(v33, v24) != nullptr )
      {
        Buffer = nullptr;
        v30 = 0;
        v20 = -1;
        do
        {
          if ( v33 == nullptr )
            break;
          v28 = Base[2 * v15];
          do
          {
            while ( v20 < v28 )
            {
              Buffer = (char *)sub_463A10();
              ++v20;
            }
            if ( v20 == v28 && Buffer != nullptr && Block[v20] == 0 )
            {
              if ( v30 != 0 )
                sub_46F0B8(v24);
              v21 = off_4730E8(1);
              sub_46EF20(Buffer, v21);
              Block[v20] = 88;
              ++v30;
            }
            ++v28;
            v22 = Base[2 * v15 + 1];
          }
          while ( v28 <= v22 && v22 != -1 );
          ++v15;
        }
        while ( v15 != NumOfElements );
        goto LABEL_69;
      }
      if ( (v14 & 0x10) == 0 )
LABEL_54:
        sub_46F108(v33);
    }
LABEL_70:
    free(Block);
    free(v33);
  }
  for ( k = 0; k != NumOfElements; ++k )
  {
    v17 = Base[2 * k];
    do
    {
      if ( v27 <= v17 )
        break;
      if ( Block[v17] == 0 )
      {
        Block[v17] = 88;
        sub_46F0B8((unsigned __int8)v33[v17]);
      }
      ++v17;
    }
    while ( v17 <= Base[2 * k + 1] );
  }
LABEL_69:
  sub_46F0B8(10);
  goto LABEL_70;
}

