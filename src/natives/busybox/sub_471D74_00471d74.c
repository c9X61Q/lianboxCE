// busybox.exe @ 0x471d74 size=569

void __usercall sub_471D74(int a1@<eax>, unsigned int a2@<edx>, char a3@<cl>)
{
  int v5; // esi
  __int16 v6; // ax
  unsigned __int64 v7; // rax
  int v8; // ebx
  char v9; // al
  int v10; // edi
  __int16 v11; // ax
  unsigned int v12; // ecx
  char *v13; // edx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // esi
  int hostlong; // edi
  int v18; // ecx
  int v19; // edx
  __int16 v20; // ax
  _OWORD *v21; // [esp+28h] [ebp-5Ch]
  int v22; // [esp+2Ch] [ebp-58h]
  __int128 v23; // [esp+34h] [ebp-50h] BYREF
  int v24; // [esp+44h] [ebp-40h] BYREF
  unsigned __int64 v25; // [esp+48h] [ebp-3Ch]
  u_long v26; // [esp+50h] [ebp-34h]
  _DWORD v27[4]; // [esp+54h] [ebp-30h] BYREF
  _QWORD v28[4]; // [esp+64h] [ebp-20h] BYREF

  v5 = *(_DWORD *)(a1 + 32);
  v21 = (_OWORD *)(v5 + 24);
  if ( (*(_BYTE *)a1 & 0x10) != 0 )
  {
    *(_BYTE *)(v5 + 11) = a3;
    BYTE8(v23) = a3;
    *(_WORD *)((char *)&v23 + 9) = 771;
    BYTE11(v23) = BYTE1(a2);
    HIDWORD(v23) = (unsigned __int8)a2;
    v24 = **(_DWORD **)(a1 + 80);
    v14 = *(_QWORD *)(a1 + 64);
    v25 = v14;
    *(_QWORD *)&v23 = v14;
    *(_QWORD *)(v5 + 16) = v14;
    v15 = sub_416E4C(v14);
    *(_QWORD *)(a1 + 64) = sub_416E4C(v15 + 1);
    v16 = a2;
    hostlong = 1;
    while ( v16 != 0 )
    {
      v26 = htonl(++hostlong);
      sub_413E48(a1 + 224, (int)&v24, (int)v27);
      v18 = v16;
      if ( v16 > 0x10 )
        v18 = 16;
      v22 = v18;
      sub_471598((int)v21, (int)v27, v18);
      v21 = (_OWORD *)((char *)v21 + v22);
      v16 -= v22;
    }
    sub_413F18(a1 + 712, &v23, *(_DWORD *)(a1 + 32) + 24, a2, v28);
    v26 = htonl(1u);
    sub_413E48(a1 + 224, (int)&v24, (int)v27);
    sub_4715B0(v28, v27);
    *v21 = *(_OWORD *)v28;
    v19 = *(_DWORD *)(a1 + 32);
    *(_WORD *)(v19 + 12) = 771;
    HIBYTE(v20) = a2 + 24;
    LOBYTE(v20) = (unsigned __int16)(a2 + 24) >> 8;
    *(_WORD *)(v19 + 14) = v20;
    v12 = a2 + 29;
    v13 = (char *)(v19 + 11);
  }
  else
  {
    *(_BYTE *)(v5 + 3) = a3;
    *(_WORD *)(v5 + 4) = 771;
    LOBYTE(v6) = BYTE1(a2);
    HIBYTE(v6) = a2;
    *(_WORD *)(v5 + 6) = v6;
    sub_438B5C(a2 + v5 + 24, a1 + 88, 32, a1 + 64, 8, v5 + 3, 5, v5 + 24, a2, 0);
    v7 = sub_416E4C(*(_QWORD *)(a1 + 64));
    *(_QWORD *)(a1 + 64) = sub_416E4C(v7 + 1);
    v8 = a2 + 32;
    sub_465F08((CHAR *)(v5 + 8), 16);
    v9 = ~(_BYTE)v8 & 0xF;
    do
    {
      v10 = v8++;
      *(_BYTE *)(v5 + v8 + 23) = v9;
    }
    while ( (v8 & 0xF) != 0 );
    sub_413C70((int)v21, (_OWORD *)(v5 + 8), v8, (int)v21);
    HIBYTE(v11) = v10 + 17;
    LOBYTE(v11) = (unsigned __int16)(v10 + 17) >> 8;
    *(_WORD *)(v5 + 6) = v11;
    v12 = v10 + 22;
    v13 = (char *)(v5 + 3);
  }
  sub_471D00(v12, v13);
}

