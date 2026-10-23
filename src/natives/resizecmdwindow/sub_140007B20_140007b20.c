// resizecmdwindow.exe @ 0x140007b20 size=397

_QWORD *__fastcall sub_140007B20(_QWORD *Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
{
  size_t v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  size_t v13; // rcx
  void *v14; // rax
  _QWORD *v15; // rdi
  char *v16; // r14
  _QWORD *v17; // rbx

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    sub_140001230();
  v9 = a2 + v5;
  v10 = Src[3];
  v11 = (a2 + v5) | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v10 >> 1;
    if ( v10 <= 0x7FFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v6 = v11;
      if ( v11 < v12 + v10 )
        v6 = v12 + v10;
    }
  }
  v13 = v6 + 1;
  if ( v6 == -1 )
    v13 = -1;
  if ( v13 < 0x1000 )
  {
    if ( v13 != 0 )
      v15 = operator new(v13);
    else
      v15 = nullptr;
  }
  else
  {
    if ( v13 + 39 < v13 )
      sub_140001170();
    v14 = operator new(v13 + 39);
    if ( v14 == nullptr )
      goto LABEL_20;
    v15 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v15 - 1) = v14;
  }
  Src[2] = v9;
  v16 = (char *)v15 + v5;
  Src[3] = v6;
  if ( v10 < 0x10 )
  {
    memcpy(v15, Src, v5);
    memcpy((char *)v15 + v5, a4, Size);
    v16[Size] = 0;
    goto LABEL_22;
  }
  v17 = (_QWORD *)*Src;
  memcpy(v15, (const void *)*Src, v5);
  memcpy((char *)v15 + v5, a4, Size);
  v16[Size] = 0;
  if ( v10 + 1 >= 0x1000 )
  {
    if ( (unsigned __int64)v17 - *(v17 - 1) - 8 <= 0x1F )
    {
      v17 = (_QWORD *)*(v17 - 1);
      goto LABEL_19;
    }
LABEL_20:
    invalid_parameter_noinfo_noreturn();
  }
LABEL_19:
  j_j_free(v17);
LABEL_22:
  *Src = v15;
  return Src;
}

