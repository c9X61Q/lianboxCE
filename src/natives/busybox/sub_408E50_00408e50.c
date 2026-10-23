// busybox.exe @ 0x408e50 size=189

int __cdecl sub_408E50(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  unsigned int v4; // esi
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // edx

  result = a1;
  v3 = (a2 + 31) >> 5;
  if ( *(_DWORD *)(a1 + 4) < v3 )
  {
    sub_4100A0(a1);
    result = sub_40FFB0(v3);
  }
  v4 = result + 20;
  v5 = a2 >> 5;
  if ( (a2 & 0x1F) != 0 )
  {
    v6 = v5 + 1;
    v7 = v4 + 4 * v6;
    *(_DWORD *)(result + 16) = v6;
    if ( v7 <= v4 )
    {
LABEL_10:
      *(_DWORD *)(v4 - 4) >>= 32 - (a2 & 0x1F);
      return result;
    }
  }
  else
  {
    v7 = v4 + 4 * v5;
    *(_DWORD *)(result + 16) = v5;
    if ( v4 >= v7 )
      return result;
  }
  v8 = result + 20;
  do
  {
    v8 += 4;
    *(_DWORD *)(v8 - 4) = -1;
  }
  while ( v8 < v7 );
  v9 = 4 * ((v7 - result - 21) >> 2) + 4;
  if ( v7 < result + 21 )
    v9 = 4;
  v4 += v9;
  if ( (a2 & 0x1F) != 0 )
    goto LABEL_10;
  return result;
}

