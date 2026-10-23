// busybox.exe @ 0x40d510 size=116

int __cdecl sub_40D510(char *a1, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  char *v6; // edx
  char v7; // cl
  int v8; // edi
  _BYTE *v9; // eax
  char v10; // cl

  if ( a3 <= 19 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 4;
    v4 = 0;
    do
    {
      v3 *= 2;
      ++v4;
    }
    while ( a3 > v3 + 15 );
  }
  v5 = sub_40FFB0(v4);
  v6 = a1 + 1;
  *(_DWORD *)v5 = v4;
  v7 = *a1;
  v8 = v5 + 4;
  *(_BYTE *)(v5 + 4) = *a1;
  v9 = (_BYTE *)(v5 + 4);
  if ( v7 != 0 )
  {
    do
    {
      v10 = *v6;
      ++v9;
      ++v6;
      *v9 = v10;
    }
    while ( v10 != 0 );
  }
  if ( a2 != nullptr )
    *a2 = v9;
  return v8;
}

