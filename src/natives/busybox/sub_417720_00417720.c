// busybox.exe @ 0x417720 size=283

int __usercall sub_417720@<eax>(_DWORD *a1@<eax>)
{
  int v2; // ebp
  unsigned __int8 *v3; // ebx
  int v4; // edi
  const char *v5; // ecx
  char *v6; // eax
  unsigned __int8 v7; // cl
  int v9; // [esp+8h] [ebp-1Ch]
  unsigned __int8 *v10; // [esp+Ch] [ebp-18h]
  const char *v11; // [esp+Ch] [ebp-18h]
  char v12; // [esp+Ch] [ebp-18h]
  char v13; // [esp+10h] [ebp-14h]
  const char *v14; // [esp+10h] [ebp-14h]

  v9 = 0;
  while ( a1 != nullptr )
  {
    v2 = a1[4];
    if ( v2 != 0 )
    {
      v9 += a1[3] * v2;
      goto LABEL_23;
    }
    v3 = (unsigned __int8 *)a1[5];
    v4 = 0;
    while ( *v3 != 0 )
    {
      if ( *v3 != 37 )
        goto LABEL_21;
      do
      {
        v10 = v3++;
        v13 = *v3;
      }
      while ( strchr("#-+ 0123456789", *v3) != nullptr );
      v5 = (const char *)v3;
      if ( v13 == 46 )
      {
        v5 = (const char *)(v10 + 2);
        if ( (unsigned __int8)(v3[1] - 48) <= 9u )
        {
          v11 = (const char *)(v10 + 2);
          v2 = atoi(v11);
          v5 = v11;
          do
            ++v5;
          while ( (unsigned __int8)(*v5 - 48) <= 9u );
        }
      }
      v14 = v5;
      v12 = *v5;
      v6 = strchr("cdiouxXeEfgG", *(unsigned __int8 *)v5);
      v3 = (unsigned __int8 *)(v14 + 1);
      if ( v6 != nullptr )
      {
        v4 += (unsigned __int8)*(v6 - 12);
        goto LABEL_20;
      }
      if ( v12 == 115 )
      {
        v4 += v2;
LABEL_20:
        v3 = (unsigned __int8 *)v14;
        goto LABEL_21;
      }
      if ( v12 != 95 )
        goto LABEL_20;
      v7 = v14[1] - 99;
      if ( v7 <= 0x12u )
        v4 += ((0x42001u >> v7) & 1) != 0;
LABEL_21:
      ++v3;
    }
    v9 += a1[3] * v4;
LABEL_23:
    a1 = (_DWORD *)*a1;
  }
  return v9;
}

