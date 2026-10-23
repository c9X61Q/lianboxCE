// busybox.exe @ 0x45c3c0 size=240

int __usercall sub_45C3C0@<eax>(int *a1@<eax>, int *a2@<edx>, int *a3@<ecx>)
{
  int v4; // edx
  int i; // ecx
  __int64 v7; // kr08_8
  int v8; // ecx
  __int64 v9; // rax
  __int64 v11; // [esp+0h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]

  v4 = *a1;
  if ( *a2 > *a1 )
    return -9;
  if ( v4 > a3[1] )
    sub_451814((int)a3, v4, (int)a3);
  v14 = *a3;
  v13 = *a2;
  *a3 = *a1;
  v11 = 0;
  for ( i = 0; i < v13; ++i )
  {
    v7 = *(unsigned int *)(a1[3] + 4 * i) - v11 - *(unsigned int *)(a2[3] + 4 * i);
    *(_DWORD *)(a3[3] + 4 * i) = v7;
    v11 = BYTE4(v7) & 1;
  }
  v8 = v13;
  if ( v13 < 0 )
    v8 = 0;
  while ( *a1 > v8 )
  {
    v9 = *(unsigned int *)(a1[3] + 4 * v8) - v11;
    *(_DWORD *)(a3[3] + 4 * v8) = v9;
    v11 = HIDWORD(v9);
    ++v8;
  }
  while ( v8 < v14 )
    *(_DWORD *)(a3[3] + 4 * v8++) = 0;
  sub_45100C(a3);
  return 0;
}

