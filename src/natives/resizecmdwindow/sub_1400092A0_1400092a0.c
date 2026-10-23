// resizecmdwindow.exe @ 0x1400092a0 size=374

_OWORD *__fastcall sub_1400092A0(_QWORD *a1, _QWORD *a2, _OWORD *a3)
{
  _OWORD *v3; // rdi
  _QWORD *v5; // rbx
  char *v6; // r14
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 19;
    v6 = (char *)((char *)a3 - (char *)a1);
    do
    {
      *v3 = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 136) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 128) = 0;
      *v3 = *(_OWORD *)(v5 - 19);
      v3[1] = *(_OWORD *)(v5 - 17);
      *(v5 - 17) = 0;
      *(v5 - 16) = 15;
      *((_BYTE *)v5 - 152) = 0;
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 120) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 104) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 96) = 0;
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 120) = *(_OWORD *)(v5 - 15);
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 104) = *(_OWORD *)(v5 - 13);
      *(v5 - 13) = 0;
      *(v5 - 12) = 15;
      *((_BYTE *)v5 - 120) = 0;
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 88) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 72) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 64) = 0;
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 88) = *(_OWORD *)(v5 - 11);
      *(_OWORD *)((char *)v5 + (_QWORD)v6 - 72) = *(_OWORD *)(v5 - 9);
      *(v5 - 9) = 0;
      *(v5 - 8) = 15;
      *((_BYTE *)v5 - 88) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v6) = 0;
      v7 = (_QWORD *)*v5;
      if ( *v5 != 0 )
      {
        if ( v7 != v5 - 7 )
        {
          *(_QWORD *)((char *)v5 + (_QWORD)v6) = v7;
          goto LABEL_8;
        }
        *(_QWORD *)((char *)v5 + (_QWORD)v6) = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v7 + 8LL))(
                                                 v7,
                                                 &v6[(_QWORD)v5 - 56]);
        v9 = (_QWORD *)*v5;
        if ( *v5 != 0 )
        {
          LOBYTE(v8) = v9 != v5 - 7;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 32LL))(v9, v8);
LABEL_8:
          *v5 = 0;
        }
      }
      v5 += 20;
      v3 += 10;
    }
    while ( v5 - 19 != a2 );
  }
  sub_1400079C0((__int64)v3, (unsigned __int64)v3);
  return v3;
}

