// gettime.exe @ 0x419275 size=330

int __cdecl common_gmtime_s<__int64>(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // edx
  int i; // eax
  int v11; // eax
  unsigned int v12; // edi
  signed __int64 v13; // kr08_8
  __int64 v14; // [esp+4h] [ebp-Ch] BYREF
  bool v15; // [esp+Fh] [ebp-1h] BYREF

  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  memset(a1, 0xFFu, 0x24u);
  if ( a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  v3 = a2[1];
  LODWORD(v14) = *a2;
  HIDWORD(v14) = v3;
  if ( __SPAIR64__(v3, v14) < -43200 || __SPAIR64__(v3, v14) > 0x79358EFDFLL )
  {
    *_errno() = 22;
    return 22;
  }
  v15 = false;
  v4 = compute_year(&v14, &v15);
  v5 = v14;
  a1[5] = v4;
  v6 = __SPAIR64__(HIDWORD(v14), v5) / 86400;
  a1[7] = v6;
  v7 = (__PAIR64__(HIDWORD(v14), v5) - 86400LL * v6) >> 32;
  v8 = v5 - 86400 * v6;
  HIDWORD(v14) = v7;
  v9 = &unk_42E568;
  if ( !v15 )
    v9 = &unk_42E534;
  for ( i = 1; v9[i] < v6; ++i )
    ;
  v11 = i - 1;
  a1[4] = v11;
  a1[3] = v6 - v9[v11];
  v12 = HIDWORD(v14);
  a1[6] = (int)(*(_QWORD *)a2 / 86400LL + 4) % 7;
  a1[2] = __SPAIR64__(v12, v8) / 3600;
  v13 = __PAIR64__(v12, v8) - 3600LL * (int)(__SPAIR64__(v12, v8) / 3600);
  a1[8] = 0;
  a1[1] = v13 / 60;
  *a1 = v13 % 60;
  return 0;
}

