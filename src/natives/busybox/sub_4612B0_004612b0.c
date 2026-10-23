// busybox.exe @ 0x4612b0 size=917

int __cdecl sub_4612B0(int a1, int a2)
{
  int v2; // eax
  const char **v3; // ebx
  _DWORD *v4; // edi
  signed int i; // esi
  int v6; // eax
  const char *v7; // ebp
  int v8; // ecx
  int n; // ebp
  FILE *v10; // eax
  int v12; // ecx
  int j; // edi
  size_t v14; // ebp
  int v15; // eax
  int v16; // edi
  int k; // ebp
  bool v18; // zf
  char *v19; // eax
  int v20; // edi
  int m; // esi
  char *Str; // [esp+0h] [ebp-48h]
  char *Stra; // [esp+0h] [ebp-48h]
  int Val; // [esp+4h] [ebp-44h]
  size_t NumOfElements; // [esp+1Ch] [ebp-2Ch]
  signed int NumOfElementsa; // [esp+1Ch] [ebp-2Ch]
  FILE *v27; // [esp+20h] [ebp-28h]
  const char *v28; // [esp+20h] [ebp-28h]
  int v29; // [esp+20h] [ebp-28h]
  char *v30; // [esp+2Ch] [ebp-1Ch]
  void *Base; // [esp+30h] [ebp-18h]

  Base = nullptr;
  byte_4735D4 = 2;
  v2 = sub_435D44(a2, (int)"^ngMVucszbrdfimS:T:o:k:*t:");
  if ( (v2 & 0x100) != 0 )
    dword_486008 |= 0x80000000;
  if ( (v2 & 0x40000) != 0 )
  {
    if ( *v30 == 0 || v30[1] != 0 )
      sub_418210("bad -t parameter");
    byte_473448 = *v30;
  }
  v3 = (const char **)Base;
  v4 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v4 == 0 )
    *--v4 = "-";
  NumOfElements = 0;
  do
  {
    v27 = (FILE *)sub_470D10(Str, Val);
    for ( i = NumOfElements; ; ++i )
    {
      NumOfElements = i;
      v6 = (dword_486008 & 0x80u) == 0 ? sub_470E94() : sub_417980(v27, nullptr);
      v7 = (const char *)v6;
      if ( v6 == 0 )
        break;
      v3 = (const char **)sub_47168C(i, 1030);
      v3[i] = v7;
    }
    sub_42EE00(v27);
    ++v4;
  }
  while ( *v4 != 0 );
  if ( dword_473444 == 0 )
  {
    dword_473444 = sub_4728CC(v8);
    *(_DWORD *)(dword_473444 + 4) = 1;
  }
  if ( (dword_486008 & 0x20) == 0 )
  {
    if ( (dword_486008 & 0x40) != 0 )
    {
      for ( j = 0; j != i; ++j )
      {
        v28 = v3[j];
        v14 = (strlen(v28) + 4) & 0xFFFFFFFC;
        v15 = sub_471600(v28, v14 + 4);
        v3[j] = (const char *)v15;
        *(_DWORD *)(v15 + v14) = j;
      }
    }
    qsort(v3, i, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_41DE90);
    if ( (dword_486008 & 0x10) != 0 )
    {
      dword_486008 |= 0x40000000u;
      v16 = 0;
      for ( k = 1; k < i; ++k )
      {
        v29 = v16;
        v18 = sub_41DE90(&v3[v16], &v3[k]) == 0;
        v19 = (char *)v3[k];
        if ( v18 )
        {
          free(v19);
        }
        else
        {
          ++v16;
          v3[v29 + 1] = v19;
        }
      }
      if ( i != 0 )
        NumOfElements = v16 + 1;
    }
    if ( (dword_486008 & 0x10000) != 0 )
    {
      sub_47154C(v12, 769);
      sub_471530(Stra);
    }
    v20 = (dword_486008 & 0x80) == 0 ? 0xA : 0;
    for ( m = 0; m != NumOfElements; ++m )
      sub_46F088("%s%c", v3[m], v20);
    sub_42F138(0);
  }
  NumOfElementsa = dword_486008 << 27 >> 31;
  for ( n = 1; n < i; ++n )
  {
    if ( sub_41DE90(v3, v3 + 1) > NumOfElementsa )
    {
      v10 = off_4730E8(2);
      sub_46EEFC(v10, "Check line %u\n", n);
      return 1;
    }
    ++v3;
  }
  return 0;
}

