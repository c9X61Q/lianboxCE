// resizecmdwindow.exe @ 0x140008950 size=367

void **__fastcall sub_140008950(void **Src, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, size_t Size)
{
  char *v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v9; // rbp
  char *v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  size_t v13; // rcx
  void *v14; // rax
  _QWORD *v15; // rdi
  char *v16; // r15
  void *v17; // rbx

  v6 = (char *)Src[2];
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a2 )
    sub_140001230();
  v9 = (unsigned __int64)Src[3];
  v10 = &v6[a2];
  v11 = (unsigned __int64)&v6[a2] | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v7 = v11;
      if ( v11 < v12 + v9 )
        v7 = v12 + v9;
    }
  }
  v13 = v7 + 1;
  if ( v7 == -1 )
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
      sub_140001170(v13, v11, a3, a4);
    v14 = operator new(v13 + 39);
    if ( v14 == nullptr )
      goto LABEL_20;
    v15 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v15 - 1) = v14;
  }
  Src[2] = v10;
  Src[3] = (void *)v7;
  v16 = (char *)v15 + Size;
  if ( v9 < 0x10 )
  {
    memcpy(v15, "\n", Size);
    memcpy(v16, Src, (size_t)(v6 + 1));
    goto LABEL_22;
  }
  v17 = *Src;
  memcpy(v15, "\n", Size);
  memcpy(v16, v17, (size_t)(v6 + 1));
  if ( v9 + 1 >= 0x1000 )
  {
    if ( (unsigned __int64)v17 - *((_QWORD *)v17 - 1) - 8 <= 0x1F )
    {
      v17 = *((void **)v17 - 1);
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

