// resizecmdwindow.exe @ 0x1400077f0 size=250

void *__fastcall sub_1400077F0(_QWORD *a1, const void *a2, size_t a3)
{
  __int64 v3; // rbp
  void *result; // rax
  size_t v8; // rcx
  void *v9; // rax
  _QWORD *v10; // rdi

  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    sub_140001230();
  a1[3] = 15;
  if ( a3 >= 0x10 )
  {
    if ( (a3 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v3 = a3 | 0xF;
      if ( (a3 | 0xF) < 0x16 )
        v3 = 22;
    }
    v8 = v3 + 1;
    if ( v3 == -1 )
      v8 = -1;
    if ( v8 < 0x1000 )
    {
      if ( v8 != 0 )
        v10 = operator new(v8);
      else
        v10 = nullptr;
    }
    else
    {
      if ( v8 + 39 < v8 )
        sub_140001170();
      v9 = operator new(v8 + 39);
      if ( v9 == nullptr )
        invalid_parameter_noinfo_noreturn();
      v10 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v9;
    }
    *a1 = v10;
    a1[2] = a3;
    a1[3] = v3;
    result = memcpy(v10, a2, a3);
    *((_BYTE *)v10 + a3) = 0;
  }
  else
  {
    a1[2] = a3;
    result = memmove(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}

