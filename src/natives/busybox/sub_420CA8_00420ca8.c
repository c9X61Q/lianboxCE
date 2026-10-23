// busybox.exe @ 0x420ca8 size=913

int __usercall sub_420CA8@<eax>(int a1@<eax>, int a2@<edx>, const void *a3@<ecx>)
{
  int i; // edi
  int v5; // esi
  int j; // esi
  int v7; // eax
  int k; // edx
  unsigned int v9; // eax
  int v10; // eax
  int m; // edx
  unsigned int v12; // eax
  __int16 v13; // ax
  _BYTE v17[32]; // [esp+1Ch] [ebp-130h] BYREF
  _BYTE v18[32]; // [esp+3Ch] [ebp-110h] BYREF
  _BYTE v19[32]; // [esp+5Ch] [ebp-F0h] BYREF
  _BYTE v20[32]; // [esp+7Ch] [ebp-D0h] BYREF
  _BYTE v21[176]; // [esp+9Ch] [ebp-B0h] BYREF

  memset(v21, 0, 0xA0u);
  v21[0] = 1;
  v21[64] = 1;
  v21[96] = 1;
  qmemcpy(&v21[32], a3, 0x20u);
  for ( i = 253; i != -1; --i )
  {
    v5 = ((int)*(unsigned __int8 *)(a2 + (i >> 3)) >> (i & 7)) & 1;
    sub_470A3C(v21, &v21[32], &v21[64], &v21[96], &v21[128]);
    sub_42EEBC(&v21[32], &v21[32]);
    sub_42EEBC(&v21[64], &v21[64]);
    sub_42EEBC(&v21[64], &v21[32]);
    sub_43E478(v18, v17);
    sub_42EEBC(v20, v20);
    sub_42EF48(486662, v19);
    sub_43E434();
    sub_43E434();
    sub_42EEBC(v20, v19);
    sub_42EF48(4, v17);
    sub_470A3C(&v21[128], &v21[32], &v21[64], a3, v21);
    sub_42EF88(v5);
    sub_42EF88(v5);
    sub_42EF88(v5);
    sub_42EF88(v5);
  }
  sub_42EEBC(&v21[64], &v21[64]);
  sub_42EEBC(&v21[64], v20);
  for ( j = 248; j != 0; --j )
  {
    sub_42EEBC(&v21[128], &v21[128]);
    sub_42EEBC(&v21[64], v20);
  }
  sub_42EEBC(&v21[128], &v21[128]);
  sub_42EEBC(v20, v20);
  sub_42EEBC(&v21[64], &v21[128]);
  sub_42EEBC(v20, v20);
  sub_42EEBC(&v21[128], &v21[128]);
  sub_42EEBC(&v21[64], v20);
  sub_42EEBC(&v21[128], &v21[128]);
  sub_42EEBC(&v21[64], v20);
  sub_42EEBC(&v21[32], &v21[128]);
  v7 = 19 * (*(_BYTE *)(a1 + 31) >> 7);
  *(_BYTE *)(a1 + 31) &= ~0x80u;
  for ( k = 0; k != 32; ++k )
  {
    v9 = *(unsigned __int8 *)(a1 + k) + v7;
    *(_BYTE *)(a1 + k) = v9;
    v7 = v9 >> 8;
  }
  v10 = 19;
  for ( m = 0; m != 31; ++m )
  {
    v12 = *(unsigned __int8 *)(a1 + m) + v10;
    v20[m] = v12;
    v10 = v12 >> 8;
  }
  v13 = v10 + *(unsigned __int8 *)(a1 + 31) - 128;
  v20[31] = v13;
  return sub_42EF88(v13 < 0);
}

