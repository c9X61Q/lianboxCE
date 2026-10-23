// resizecmdwindow.exe @ 0x140005f10 size=271

_QWORD *__fastcall sub_140005F10(_QWORD *a1, size_t a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  size_t v7; // rcx
  void *v8; // rax

  v2 = nullptr;
  *(_OWORD *)a1 = 0;
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  a1[2] = 0;
  a1[3] = 0;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    sub_140001230();
  a1[3] = 15;
  if ( a2 >= 0x10 )
  {
    if ( (a2 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v3 = a2 | 0xF;
      if ( (a2 | 0xF) < 0x16 )
        v3 = 22;
    }
    v7 = v3 + 1;
    if ( v3 == -1 )
      v7 = -1;
    if ( v7 < 0x1000 )
    {
      if ( v7 != 0 )
        v2 = operator new(v7);
    }
    else
    {
      if ( v7 + 39 < v7 )
        sub_140001170();
      v8 = operator new(v7 + 39);
      if ( v8 == nullptr )
        invalid_parameter_noinfo_noreturn();
      v2 = (_QWORD *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v2 - 1) = v8;
    }
    *a1 = v2;
    a1[2] = a2;
    a1[3] = v3;
    memset(v2, 32, a2);
    *((_BYTE *)v2 + a2) = 0;
    return a1;
  }
  else
  {
    a1[2] = a2;
    memset(a1, 32, a2);
    *((_BYTE *)a1 + a2) = 0;
    return a1;
  }
}

