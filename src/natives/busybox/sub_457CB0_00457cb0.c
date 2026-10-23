// busybox.exe @ 0x457cb0 size=204

int __usercall sub_457CB0@<eax>(int a1@<eax>, int *a2@<edx>, _DWORD *a3@<ecx>)
{
  int v3; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // edx
  int v8; // eax
  unsigned __int8 v9; // cl
  int v10; // ebx
  int v11; // edx
  int *v12; // ecx
  int v13; // eax

  if ( a1 == 0 )
  {
    *a2 = 0;
    *a3 = 0;
    return -1;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v3 = v5 + 1;
    v9 = *(_BYTE *)(a1 + v5);
    if ( v9 != 58 )
      break;
    if ( v7 == 0 )
    {
      v6 = v5 + 1;
      v7 = v5;
    }
LABEL_24:
    ++v5;
  }
  if ( v9 > 0x3Au )
    goto LABEL_24;
  if ( v9 == 32 )
  {
LABEL_16:
    if ( v8 == v5 )
      ++v8;
    if ( v6 == v5 )
      ++v6;
    goto LABEL_24;
  }
  if ( v9 > 0x20u )
    goto LABEL_24;
  if ( v9 == 10 )
  {
    if ( *(_BYTE *)(a1 + v3) != 32 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( v9 > 0xAu )
    goto LABEL_24;
  if ( v9 != 0 )
  {
    if ( v9 != 9 )
      goto LABEL_24;
    goto LABEL_16;
  }
LABEL_20:
  v10 = v5 - v6;
  v11 = v7 - v8;
  if ( v11 != 0 && (v10 <= 0 || v11 <= 0) )
  {
    v5 = v3;
    v6 = v3;
    v8 = v3;
    v7 = 0;
    goto LABEL_24;
  }
  v12 = a2;
  *a2 = 0;
  if ( v11 != 0 )
  {
    v13 = sub_4718A8(a2, v11);
    v12 = a2;
    *a2 = v13;
  }
  *a3 = 0;
  if ( v10 > 0 )
    *a3 = sub_4718A8(v12, v10);
  return v3;
}

