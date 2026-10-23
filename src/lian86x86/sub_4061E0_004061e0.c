// lian86.exe @ 0x004061e0  size=224  name=sub_4061E0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_4061E0(int a1, int a2)
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // esi
  char *v5; // ebp
  const wchar_t *v6; // ecx
  wchar_t v7; // ax
  int v8; // edi
  char v9; // bl
  __int16 v10; // ax
  _BYTE v12[16]; // [esp+8h] [ebp-10h]

  v2 = (char *)sub_40E900(32, a2);
  v3 = a1;
  v4 = v2;
  v5 = v2;
  if ( a1 == 0 )
  {
    *(_WORD *)v2 = 48;
    v4 = v2 + 2;
    goto LABEL_13;
  }
  if ( a1 < 0 )
  {
    *(_WORD *)v2 = 45;
    v4 = v2 + 2;
    if ( a1 == 0x80000000 )
    {
      v6 = L"2147483648";
      do
      {
        v7 = *v6++;
        *(const wchar_t *)((char *)v6 + v4 - (char *)L"2147483648" - 2) = v7;
      }
      while ( v7 != 0 );
      v4 += 20;
      goto LABEL_13;
    }
    v3 = -a1;
  }
  v8 = 0;
  if ( v3 != 0 )
  {
    do
    {
      ++v8;
      v9 = v3 % 10;
      v3 /= 10;
      v12[v8] = v9 + 48;
    }
    while ( v3 != 0 );
    for ( ; v8 > 0; v4 += 2 )
    {
      v10 = (char)v12[v8--];
      *(_WORD *)v4 = v10;
    }
  }
LABEL_13:
  sub_40EA90(32 - ((v4 - v5) >> 1));
  *(_WORD *)v4 = 0;
  return 0;
}

