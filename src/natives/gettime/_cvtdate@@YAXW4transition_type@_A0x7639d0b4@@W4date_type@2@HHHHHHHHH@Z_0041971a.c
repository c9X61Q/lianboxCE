// gettime.exe @ 0x41971a size=322

int __cdecl cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // ebx
  bool v12; // al
  char *v13; // edi
  int v14; // esi
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // esi
  int v19; // ecx
  int result; // eax
  bool v21; // sf
  int v22; // [esp+8h] [ebp-8h] BYREF
  bool v23; // [esp+Fh] [ebp-1h]

  v22 = 0;
  v11 = a3;
  v12 = unknown_libname_86(a3);
  v23 = v12;
  if ( a2 == 1 )
  {
    v13 = (char *)&unk_42E568 + 4 * a4;
    if ( v12 )
      v14 = *((_DWORD *)v13 - 1);
    else
      v14 = dword_42E534[a4 - 1];
    v15 = v14 + 1;
    v16 = (365 * a3 - 25546 + v15 + unknown_libname_98(a3)) % 7;
    v17 = a6 + 7 * a5 - v16 + v15;
    if ( v16 <= a6 )
      v17 -= 7;
    if ( !v23 )
      v13 = (char *)&dword_42E534[a4];
    v11 = a3;
    if ( a5 == 5 && v17 > *(_DWORD *)v13 )
      v17 -= 7;
  }
  else
  {
    if ( v12 )
      v18 = dword_42E564[a4];
    else
      v18 = dword_42E530[a4];
    v17 = a7 + v18;
  }
  v19 = 1000 * (a10 + 60 * (a9 + 60 * a8));
  result = v19 + a11;
  if ( a1 == 0 )
  {
    dword_437444 = v17;
    dword_437448 = v19 + a11;
    dword_437440 = v11;
    return result;
  }
  dword_437454 = v19 + a11;
  dword_437450 = v17;
  if ( sub_4191E3(&v22) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v21 = 1000 * v22 + dword_437454 < 0;
  result = 1000 * v22 + dword_437454;
  dword_437454 = result;
  if ( v21 )
  {
    result += 86400000;
    --dword_437450;
LABEL_23:
    dword_437454 = result;
    goto LABEL_24;
  }
  if ( result >= 86400000 )
  {
    result -= 86400000;
    ++dword_437450;
    goto LABEL_23;
  }
LABEL_24:
  dword_43744C = v11;
  return result;
}

