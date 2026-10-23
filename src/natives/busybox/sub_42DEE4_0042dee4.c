// busybox.exe @ 0x42dee4 size=280

int __usercall sub_42DEE4@<eax>(int a1@<eax>)
{
  int v2; // esi
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  void *v7; // [esp+Ch] [ebp-74h]
  char v8; // [esp+10h] [ebp-70h]
  int v9; // [esp+14h] [ebp-6Ch]
  int *Buf; // [esp+18h] [ebp-68h]
  int v11; // [esp+1Ch] [ebp-64h]
  char v12[4]; // [esp+20h] [ebp-60h] BYREF
  int v13; // [esp+24h] [ebp-5Ch]
  char *v14; // [esp+28h] [ebp-58h]
  int v15; // [esp+2Ch] [ebp-54h]
  _BYTE v16[72]; // [esp+38h] [ebp-48h] BYREF

  v7 = off_473358;
  v2 = dword_485FF0;
  Buf = *(int **)(dword_485FF0 + 52);
  sub_45E79C();
  v8 = byte_473320;
  byte_473320 = 0;
  v11 = a1;
  v9 = *(_DWORD *)(v2 + 56);
  v3 = setjmp3();
  v4 = dword_485FF0;
  if ( v3 == 0 )
  {
    *(_DWORD *)(dword_485FF0 + 52) = v16;
    sub_44CA70(v16, 0);
    sub_458414(0);
    v12[0] = 15;
    v13 = 0;
    v14 = dword_4735D0;
    v15 = dword_473114;
    sub_42DB08((int)v12, 0, 256);
    v11 = *(_DWORD *)(dword_485FF4 + 4);
  }
  *(_DWORD *)(v4 + 52) = Buf;
  if ( v3 != 0 && *(_BYTE *)(v4 + 61) != 1 )
    longjmp(Buf, 1);
  v5 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 56) = v9;
  if ( *(_DWORD *)(v5 + 56) == 0 && *(_BYTE *)(v5 + 60) != 0 )
    sub_45309C();
  byte_473320 = v8;
  while ( v7 != off_473358 )
    sub_44D8A4();
  return v11;
}

