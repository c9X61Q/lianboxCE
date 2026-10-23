// resizecmdwindow.exe @ 0x140009540 size=411

_OWORD *__fastcall sub_140009540(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *result; // rax
  __int64 v4; // r8
  char *v5; // r9

  result = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 56;
    v5 = (char *)result - a1;
    do
    {
      v4 += 160;
      *result = 0;
      *(_QWORD *)&v5[v4 - 200] = 0;
      *(_QWORD *)&v5[v4 - 192] = 0;
      *result = *(_OWORD *)(v4 - 216);
      result[1] = *(_OWORD *)(v4 - 200);
      *(_QWORD *)(v4 - 200) = 0;
      result += 10;
      *(_QWORD *)(v4 - 192) = 15;
      *(_BYTE *)(v4 - 216) = 0;
      *(_OWORD *)&v5[v4 - 184] = 0;
      *(_QWORD *)&v5[v4 - 168] = 0;
      *(_QWORD *)&v5[v4 - 160] = 0;
      *(_OWORD *)&v5[v4 - 184] = *(_OWORD *)(v4 - 184);
      *(_OWORD *)&v5[v4 - 168] = *(_OWORD *)(v4 - 168);
      *(_QWORD *)(v4 - 168) = 0;
      *(_QWORD *)(v4 - 160) = 15;
      *(_BYTE *)(v4 - 184) = 0;
      *(_OWORD *)&v5[v4 - 152] = 0;
      *(_QWORD *)&v5[v4 - 136] = 0;
      *(_QWORD *)&v5[v4 - 128] = 0;
      *(_OWORD *)&v5[v4 - 152] = *(_OWORD *)(v4 - 152);
      *(_OWORD *)&v5[v4 - 136] = *(_OWORD *)(v4 - 136);
      *(_QWORD *)(v4 - 136) = 0;
      *(_QWORD *)(v4 - 128) = 15;
      *(_BYTE *)(v4 - 152) = 0;
      *(_OWORD *)&v5[v4 - 120] = 0;
      *(_QWORD *)&v5[v4 - 104] = 0;
      *(_QWORD *)&v5[v4 - 96] = 0;
      *(_OWORD *)&v5[v4 - 120] = *(_OWORD *)(v4 - 120);
      *(_OWORD *)&v5[v4 - 104] = *(_OWORD *)(v4 - 104);
      *(_QWORD *)(v4 - 104) = 0;
      *(_QWORD *)(v4 - 96) = 15;
      *(_BYTE *)(v4 - 120) = 0;
      *(_OWORD *)&v5[v4 - 88] = 0;
      *(_QWORD *)&v5[v4 - 72] = 0;
      *(_QWORD *)&v5[v4 - 64] = 0;
      *(_OWORD *)&v5[v4 - 88] = *(_OWORD *)(v4 - 88);
      *(_OWORD *)&v5[v4 - 72] = *(_OWORD *)(v4 - 72);
      *(_QWORD *)(v4 - 72) = 0;
      *(_QWORD *)(v4 - 64) = 15;
      *(_BYTE *)(v4 - 88) = 0;
    }
    while ( v4 - 56 != a2 );
  }
  return result;
}

