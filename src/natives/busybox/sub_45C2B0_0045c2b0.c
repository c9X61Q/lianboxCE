// busybox.exe @ 0x45c2b0 size=269

int __usercall sub_45C2B0@<eax>(int *a1@<eax>, int *a2@<edx>, int *a3@<ecx>)
{
  int v4; // eax
  int v5; // esi
  __int64 v6; // rax
  int i; // ecx
  __int64 v8; // rax
  int v9; // edi
  int v10; // edx
  __int64 v14; // [esp+8h] [ebp-24h]
  __int64 v15; // [esp+10h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-14h]

  v4 = *a1;
  v5 = *a2;
  if ( *a2 < v4 )
    v5 = v4;
  v16 = *a3;
  *a3 = v5;
  if ( a3[1] < v5 )
    sub_451814((int)a3, v5, (int)a3);
  v6 = 0;
  for ( i = 0; v5 > i; ++i )
  {
    v14 = 0;
    if ( *a1 >= i )
      v14 = *(unsigned int *)(a1[3] + 4 * i);
    v15 = 0;
    if ( *a2 >= i )
      v15 = *(unsigned int *)(a2[3] + 4 * i);
    v8 = v15 + v14 + v6;
    *(_DWORD *)(a3[3] + 4 * i) = v8;
    v6 = HIDWORD(v8);
  }
  v9 = v5;
  if ( v5 < 0 )
    v9 = 0;
  if ( v5 <= 4095 && (v6 & 1) != 0 )
  {
    v10 = a3[1];
    if ( *a3 == v10 )
      sub_451814((int)a3, v10 + 1, i);
    *(_DWORD *)(a3[3] + 4 * *a3) = 1;
    ++v9;
  }
  *a3 = v9;
  while ( v9 < v16 )
    *(_DWORD *)(a3[3] + 4 * v9++) = 0;
  sub_45100C(a3);
  return 0;
}

