// resizecmdwindow.exe @ 0x1400062a0 size=349

void **__fastcall sub_1400062A0(void **a1, void *Src, size_t Size)
{
  unsigned __int64 v3; // rbp
  void *v7; // rdi
  size_t v9; // rdi
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  void *v12; // rax
  _QWORD *v13; // rsi
  void *v14; // rcx

  v3 = (unsigned __int64)a1[3];
  if ( Size > v3 )
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
    if ( Size > 0x7FFFFFFFFFFFFFFFLL )
      sub_140001230();
    if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v10 = v3 >> 1;
      if ( v3 <= 0x7FFFFFFFFFFFFFFFLL - (v3 >> 1) )
      {
        v9 = Size | 0xF;
        if ( (Size | 0xF) < v10 + v3 )
          v9 = v10 + v3;
      }
    }
    v11 = v9 + 1;
    if ( v9 == -1 )
      v11 = -1;
    if ( v11 < 0x1000 )
    {
      if ( v11 != 0 )
        v13 = operator new(v11);
      else
        v13 = nullptr;
    }
    else
    {
      if ( v11 + 39 < v11 )
        sub_140001170();
      v12 = operator new(v11 + 39);
      if ( v12 == nullptr )
        goto LABEL_25;
      v13 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v13 - 1) = v12;
    }
    a1[2] = (void *)Size;
    a1[3] = (void *)v9;
    memcpy(v13, Src, Size);
    *((_BYTE *)v13 + Size) = 0;
    if ( v3 < 0x10 )
    {
LABEL_24:
      *a1 = v13;
      return a1;
    }
    v14 = *a1;
    if ( v3 + 1 < 0x1000 )
    {
LABEL_23:
      j_j_free(v14);
      goto LABEL_24;
    }
    if ( (unsigned __int64)v14 - *((_QWORD *)v14 - 1) - 8 <= 0x1F )
    {
      v14 = *((void **)v14 - 1);
      goto LABEL_23;
    }
LABEL_25:
    invalid_parameter_noinfo_noreturn();
  }
  v7 = a1;
  if ( v3 >= 0x10 )
    v7 = *a1;
  a1[2] = (void *)Size;
  memmove(v7, Src, Size);
  *((_BYTE *)v7 + Size) = 0;
  return a1;
}

