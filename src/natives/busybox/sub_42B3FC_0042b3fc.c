// busybox.exe @ 0x42b3fc size=259

int __fastcall sub_42B3FC(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  BOOL v4; // eax
  int v5; // eax
  int v6; // eax
  char *Str; // [esp+0h] [ebp-6Ch]
  int Value; // [esp+4h] [ebp-68h]
  int v11; // [esp+Ch] [ebp-60h]
  const char *v12; // [esp+10h] [ebp-5Ch]
  int *Buf; // [esp+14h] [ebp-58h]
  _BYTE v14[72]; // [esp+24h] [ebp-48h] BYREF

  v12 = (const char *)sub_462B40();
  strlen(v12);
  sub_45A270();
  sub_45E79C();
  sub_45EA54();
  Buf = *(int **)(dword_485FF0 + 52);
  v11 = 0;
  Value = 0;
  Str = v14;
  v2 = setjmp3();
  if ( v2 == 0 )
  {
    *(_DWORD *)(dword_485FF0 + 52) = v14;
    do
    {
      v3 = sub_44B820(Str, Value);
      if ( v3 == -1 )
        break;
      v4 = false;
      if ( byte_4735A8 != 0 )
        v4 = byte_473450 == 0;
      v5 = sub_42B5DC(v3, a2 & (v4 ^ 0xFFFFFFFE));
      if ( v3 != 0 )
        v11 = v5;
      sub_44D988();
    }
    while ( byte_473328 == 0 );
  }
  sub_44D988();
  sub_44D8A4();
  v6 = dword_485FF4;
  *(_DWORD *)(dword_485FF4 + 12) += *(_DWORD *)(dword_485FF4 + 4) - (_DWORD)v12;
  *(_DWORD *)(v6 + 4) = v12;
  *(_DWORD *)(dword_485FF0 + 52) = Buf;
  if ( v2 != 0 )
    longjmp(Buf, v2);
  return v11;
}

