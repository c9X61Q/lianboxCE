// busybox.exe @ 0x42b0f4 size=264

int __usercall sub_42B0F4@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>, char a4)
{
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // ebx
  _BYTE *v8; // [esp+0h] [ebp-80h]
  int v9; // [esp+4h] [ebp-7Ch]
  int v12; // [esp+10h] [ebp-70h]
  int v13; // [esp+14h] [ebp-6Ch]
  int v15; // [esp+1Ch] [ebp-64h]
  _BYTE v16[20]; // [esp+20h] [ebp-60h] BYREF
  _BYTE v17[76]; // [esp+34h] [ebp-4Ch] BYREF

  qmemcpy(v16, (const void *)dword_485FEC, sizeof(v16));
  v12 = dword_473340;
  v15 = *(_DWORD *)(dword_485FF0 + 52);
  v9 = 0;
  v8 = v17;
  v13 = setjmp3();
  v4 = dword_485FF0;
  if ( v13 == 0 )
  {
    ++*(_DWORD *)(dword_485FF0 + 56);
    *(_DWORD *)(v4 + 52) = v17;
    v5 = (_DWORD *)dword_485FEC;
    *(_BYTE *)(dword_485FEC + 12) = 0;
    ++*a1;
    dword_473340 = a1[2];
    sub_43B8DC(v17, 0);
    *v5 = a2 - 1;
    v5[4] = a3 + 4;
    v5[1] = 1;
    v5[2] = -1;
    sub_42B5DC(a1[4], a4 & 2);
  }
  v6 = dword_485FF0;
  ++*(_DWORD *)(dword_485FF0 + 56);
  dword_473340 = v12;
  sub_431ECC();
  sub_431F40();
  qmemcpy((void *)dword_485FEC, v16, 20);
  *(_DWORD *)(v6 + 52) = v15;
  sub_43B8DC(v8, v9);
  byte_473328 &= 0xF3u;
  return v13;
}

