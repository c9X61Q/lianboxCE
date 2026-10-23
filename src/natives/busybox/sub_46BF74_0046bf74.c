// busybox.exe @ 0x46bf74 size=307

int __cdecl sub_46BF74(int *a1, unsigned __int8 *a2, int a3, __int16 *a4, _DWORD *a5)
{
  int v5; // ecx
  int v6; // esi
  __int16 v7; // bp
  __int16 v8; // bx
  __int16 v9; // bx
  __int16 v10; // cx
  __int16 v11; // ax

  v5 = *a1;
  v6 = a1[6];
  if ( (v6 & 2) != 0 )
    v5 ^= 1u;
  if ( a3 <= 1 )
  {
LABEL_18:
    *_errno() = 22;
    return -1;
  }
  if ( v5 == 1200 )
  {
    v7 = a2[1] << 8;
    v8 = *a2;
LABEL_8:
    *a4 = v7 | v8;
    goto LABEL_9;
  }
  if ( v5 == 1201 )
  {
    v7 = *a2 << 8;
    v8 = a2[1];
    goto LABEL_8;
  }
LABEL_9:
  v9 = *a4;
  if ( (a1[1] & 1) == 0 || (v6 & 1) != 0 )
    goto LABEL_15;
  a1[6] = v6 | 1;
  if ( v9 != -2 )
  {
    if ( v9 == -257 )
      goto LABEL_14;
LABEL_15:
    if ( (unsigned __int16)(v9 + 9216) <= 0x3FFu )
    {
LABEL_25:
      *_errno() = 42;
      return -1;
    }
    if ( (unsigned __int16)(v9 + 10240) > 0x3FFu )
    {
      *a5 = 1;
      return 2;
    }
    if ( a3 <= 3 )
      goto LABEL_18;
    if ( v5 == 1200 )
    {
      v10 = a2[3] << 8;
      v11 = a2[2];
    }
    else
    {
      if ( v5 != 1201 )
        goto LABEL_24;
      v10 = a2[2] << 8;
      v11 = a2[3];
    }
    a4[1] = v10 | v11;
LABEL_24:
    if ( (unsigned __int16)(a4[1] + 9216) <= 0x3FFu )
    {
      *a5 = 2;
      return 4;
    }
    goto LABEL_25;
  }
  a1[6] = v6 | 3;
LABEL_14:
  *a5 = 0;
  return 2;
}

