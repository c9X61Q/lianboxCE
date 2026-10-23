// gettime.exe @ 0x40be58 size=111

_DWORD *__cdecl __FrameHandler3::GetRangeOfTrysToCheck(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // esi
  _DWORD *v9; // eax
  unsigned int v10; // edx
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v6 = a6;
  v7 = *(_DWORD *)(a5 + 12);
  v12 = v7;
  v8 = v7;
  if ( a6 >= 0 )
  {
    v9 = (_DWORD *)(*(_DWORD *)(a5 + 16) + 8 + 20 * v7);
    while ( v7 != -1 )
    {
      v9 -= 5;
      --v7;
      if ( *(v9 - 1) < a3 && a3 <= *v9 || v7 == -1 )
      {
        v8 = v12;
        --v6;
        v12 = v7;
      }
      if ( v6 < 0 )
        goto LABEL_9;
    }
LABEL_12:
    abort();
  }
LABEL_9:
  v10 = v7 + 1;
  if ( v8 > *(_DWORD *)(a5 + 12) || v10 > v8 )
    goto LABEL_12;
  a1[3] = v8;
  *a1 = a2;
  a1[1] = v10;
  a1[2] = a2;
  return a1;
}

