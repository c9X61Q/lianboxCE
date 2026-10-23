// resizecmdwindow.exe @ 0x140006480 size=319

__int64 __fastcall sub_140006480(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  void *v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rsi
  void *v10; // rax
  _QWORD *v11; // rdi
  void *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)a1;
  v7 = v3 - *(_QWORD *)a1;
  result = v7 >> 3;
  if ( v7 >> 3 < a2 )
  {
    if ( a2 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v9 = 8 * a2;
      if ( 8 * a2 < 0x1000 )
      {
        if ( v9 != 0 )
          v11 = operator new(8 * a2);
        else
          v11 = nullptr;
        goto LABEL_10;
      }
      if ( v9 + 39 >= v9 )
      {
        v10 = operator new(v9 + 39);
        if ( v10 == nullptr )
          goto LABEL_18;
        v11 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v10;
LABEL_10:
        v12 = *(void **)a1;
        v13 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
        if ( v13 == 0 )
          goto LABEL_15;
        if ( (unsigned __int64)(8 * v13) < 0x1000 )
        {
LABEL_14:
          j_j_free(v12);
LABEL_15:
          result = (__int64)&v11[v9 / 8];
          *(_QWORD *)a1 = v11;
          *(_QWORD *)(a1 + 8) = &v11[v9 / 8];
          for ( *(_QWORD *)(a1 + 16) = &v11[v9 / 8]; v11 != (_QWORD *)result; ++v11 )
            *v11 = a3;
          return result;
        }
        if ( (unsigned __int64)v12 - *((_QWORD *)v12 - 1) - 8 <= 0x1F )
        {
          v12 = *((void **)v12 - 1);
          goto LABEL_14;
        }
LABEL_18:
        invalid_parameter_noinfo_noreturn();
      }
    }
    sub_140001170();
  }
  v14 = (unsigned __int64)(v7 + 7) >> 3;
  if ( (unsigned __int64)v6 > v3 )
    v14 = 0;
  if ( v14 != 0 )
  {
    memset64(v6, a3, v14);
    return a3;
  }
  return result;
}

