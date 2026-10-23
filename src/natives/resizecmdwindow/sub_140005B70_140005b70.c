// resizecmdwindow.exe @ 0x140005b70 size=484

__int64 __fastcall sub_140005B70(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  void *v7; // r14
  size_t v8; // rdi
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rbp
  size_t v11; // rcx
  void *v12; // rax
  char *v13; // rcx
  int v14; // edx

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0;
    v5 = **(_QWORD **)(a1 + 64);
    v6 = v5 + **(int **)(a1 + 88);
    if ( v5 != 0 && v5 < v6 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v5 + 1;
      return a2;
    }
    v7 = **(void ***)(a1 + 24);
    v8 = v6 - (_QWORD)v7;
    if ( v5 == 0 )
      v8 = 0;
    if ( v8 < 0x20 )
    {
      LODWORD(v9) = 32;
      v10 = operator new(0x20u);
      goto LABEL_22;
    }
    if ( v8 < 0x3FFFFFFF )
    {
      v9 = 2 * v8;
      if ( 2 * v8 < 0x1000 )
      {
        if ( 2 * v8 != 0 )
          v10 = operator new(2 * v8);
        else
          v10 = nullptr;
        goto LABEL_22;
      }
      v11 = v9 + 39;
      if ( v9 + 39 < v9 )
        sub_140001170();
LABEL_20:
      v12 = operator new(v11);
      if ( v12 == nullptr )
        goto LABEL_31;
      v10 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v12;
LABEL_22:
      memcpy(v10, v7, v8);
      *(_QWORD *)(a1 + 104) = (char *)v10 + v8 + 1;
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = (char *)v10 + v8;
      **(_DWORD **)(a1 + 88) = v9 - v8;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v10;
        **(_QWORD **)(a1 + 56) = 0;
        **(_DWORD **)(a1 + 80) = (_DWORD)v10;
      }
      else
      {
        v13 = (char *)v10 + **(_QWORD **)(a1 + 56) - (_QWORD)v7;
        v14 = *(_QWORD *)(a1 + 104) - (_DWORD)v13;
        **(_QWORD **)(a1 + 24) = v10;
        **(_QWORD **)(a1 + 56) = v13;
        **(_DWORD **)(a1 + 80) = v14;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
        goto LABEL_30;
      if ( v8 < 0x1000 )
      {
LABEL_29:
        j_j_free(v7);
LABEL_30:
        *(_DWORD *)(a1 + 112) |= 1u;
        *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
        return a2;
      }
      if ( (unsigned __int64)v7 - *((_QWORD *)v7 - 1) - 8 <= 0x1F )
      {
        v7 = *((void **)v7 - 1);
        goto LABEL_29;
      }
LABEL_31:
      invalid_parameter_noinfo_noreturn();
    }
    LODWORD(v9) = 0x7FFFFFFF;
    if ( v8 < 0x7FFFFFFF )
    {
      v11 = 2147483686LL;
      goto LABEL_20;
    }
  }
  return 0xFFFFFFFFLL;
}

