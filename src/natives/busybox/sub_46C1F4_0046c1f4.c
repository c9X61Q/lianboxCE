// busybox.exe @ 0x46c1f4 size=185

int __cdecl sub_46C1F4(int *a1, unsigned int *a2, int a3, _WORD *a4, _DWORD *a5)
{
  int v5; // ebx
  int v6; // edx
  unsigned __int32 v7; // eax

  v5 = *a1;
  v6 = a1[6];
  if ( (v6 & 2) != 0 )
    v5 ^= 1u;
  if ( a3 <= 3 )
  {
    *_errno() = 22;
    return -1;
  }
  if ( v5 == 12000 )
  {
    v7 = *a2;
  }
  else
  {
    v7 = 55296;
    if ( v5 == 12001 )
      v7 = _byteswap_ulong(*a2);
  }
  if ( (a1[1] & 1) != 0 && (v6 & 1) == 0 )
  {
    a1[6] = v6 | 1;
    if ( v7 == -131072 )
    {
      a1[6] = v6 | 3;
LABEL_14:
      *a5 = 0;
      return 4;
    }
    if ( v7 == 65279 )
      goto LABEL_14;
  }
  if ( v7 - 55296 <= 0x7FF || v7 > 0x10FFFF )
  {
    *_errno() = 42;
    return -1;
  }
  sub_467C40(v7, a4, a5);
  return 4;
}

