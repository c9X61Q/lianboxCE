// gettime.exe @ 0x4193bf size=185

int __cdecl compute_year(__int64 *a1, bool *a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  signed __int64 v4; // kr00_8
  int v5; // esi
  unsigned int v7; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)a1;
  v7 = *((_DWORD *)a1 + 1);
  v3 = *a1 / 31536000;
  v4 = __PAIR64__(v7, v2) - 31536000LL * v3 - 86400LL * unknown_libname_98(v3 + 70);
  *a1 = v4;
  if ( v4 >= 0 )
  {
    v5 = v3 + 70;
    if ( unknown_libname_86(v3 + 70) )
      *a2 = true;
  }
  else
  {
    *a1 = v4 + 31536000;
    if ( unknown_libname_86(v3 + 69) )
    {
      *(_DWORD *)a1 = v4 + 31622400;
      *((_DWORD *)a1 + 1) = __CFADD__(v4 + 31536000, 86400) + ((unsigned __int64)(v4 + 31536000) >> 32);
      *a2 = true;
    }
    return v3 + 69;
  }
  return v5;
}

