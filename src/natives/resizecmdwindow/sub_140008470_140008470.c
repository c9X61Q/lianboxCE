// resizecmdwindow.exe @ 0x140008470 size=755

char *__fastcall sub_140008470(__int64 *a1, _QWORD *a2, const void **a3)
{
  const void **v3; // r9
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  size_t v10; // rcx
  size_t v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  void *v14; // rax
  char *v15; // rdi
  unsigned __int64 v16; // r13
  char *v17; // rax
  char *v18; // rsi
  _BYTE *v19; // rdx
  size_t v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  void *v27; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]
  void *v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-48h]

  v3 = a3;
  v6 = *a1;
  v7 = (__int64)a2 - *a1;
  v8 = (a1[1] - *a1) >> 5;
  if ( v8 == 0x7FFFFFFFFFFFFFFLL )
    sub_140008E60(a1, v6, a3, a3);
  v9 = v8 + 1;
  v34 = v8 + 1;
  v10 = (a1[2] - v6) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v12 = v8 + 1;
    if ( v11 + v10 >= v9 )
      v12 = v11 + v10;
    if ( v12 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v13 = 32 * v12;
      v32 = v12;
      if ( 32 * v12 < 0x1000 )
      {
        if ( v13 != 0 )
        {
          v15 = (char *)operator new(32 * v12);
          v33 = v15;
          v3 = a3;
        }
        else
        {
          v15 = nullptr;
          v33 = nullptr;
        }
        v32 = v12;
        goto LABEL_14;
      }
      v10 = v13 + 39;
      if ( v13 + 39 >= v13 )
      {
        v14 = operator new(v10);
        if ( v14 == nullptr )
          goto LABEL_33;
        v15 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v15 - 1) = v14;
        v33 = v15;
        v3 = a3;
LABEL_14:
        v16 = v7 & 0xFFFFFFFFFFFFFFE0uLL;
        v17 = &v15[v16];
        v18 = &v15[v16 + 32];
        try
        {
          v19 = *v3;
          *(_OWORD *)v17 = 0;
          *((_QWORD *)v17 + 2) = 0;
          *((_QWORD *)v17 + 3) = 0;
          v20 = -1;
          do
            ++v20;
          while ( v19[v20] != 0 );
          sub_1400077F0(&v15[v16], v19, v20);
          v31 = (__int64)&v15[v16];
          v21 = a1[1];
          v22 = *a1;
          v23 = (__int64)v15;
          if ( a2 == (_QWORD *)v21 )
          {
            for ( ; v22 != v21; v22 += 32 )
            {
              *(_OWORD *)v23 = 0;
              *(_QWORD *)(v23 + 16) = 0;
              *(_QWORD *)(v23 + 24) = 0;
              *(_OWORD *)v23 = *(_OWORD *)v22;
              *(_OWORD *)(v23 + 16) = *(_OWORD *)(v22 + 16);
              *(_QWORD *)(v22 + 16) = 0;
              *(_QWORD *)(v22 + 24) = 15;
              *(_BYTE *)v22 = 0;
              v23 += 32;
            }
            v24 = v23;
          }
          else
          {
            for ( ; (_QWORD *)v22 != a2; v22 += 32 )
            {
              *(_OWORD *)v23 = 0;
              *(_QWORD *)(v23 + 16) = 0;
              *(_QWORD *)(v23 + 24) = 0;
              *(_OWORD *)v23 = *(_OWORD *)v22;
              *(_OWORD *)(v23 + 16) = *(_OWORD *)(v22 + 16);
              *(_QWORD *)(v22 + 16) = 0;
              *(_QWORD *)(v22 + 24) = 15;
              *(_BYTE *)v22 = 0;
              v23 += 32;
            }
            sub_1400078F0(v23, v23);
            v31 = (__int64)v15;
            v25 = (_QWORD *)a1[1];
            if ( a2 != v25 )
            {
              v26 = a2 + 3;
              do
              {
                *(_OWORD *)v18 = 0;
                *(_QWORD *)&v15[v16 - (_QWORD)a2 + 24 + (_QWORD)v26] = 0;
                *(_QWORD *)&v15[v16 - (_QWORD)a2 + 32 + (_QWORD)v26] = 0;
                *(_OWORD *)v18 = *(_OWORD *)(v26 - 3);
                *((_OWORD *)v18 + 1) = *(_OWORD *)(v26 - 1);
                *(v26 - 1) = 0;
                *v26 = 15;
                *((_BYTE *)v26 - 24) = 0;
                v18 += 32;
                v26 += 4;
              }
              while ( v26 - 3 != v25 );
            }
            v24 = (__int64)v18;
            v23 = (__int64)v18;
          }
          sub_1400078F0(v23, v24);
        }
        catch ( ... )
        {
          sub_1400078F0(v31, (__int64)&v15[v16 + 32]);
          sub_140006430(v29, v33, v32);
          throw;
        }
        if ( *a1 != 0 )
        {
          sub_1400078F0(*a1, a1[1]);
          v27 = (void *)*a1;
          if ( ((a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
          {
LABEL_31:
            j_j_free(v27);
            goto LABEL_32;
          }
          if ( (unsigned __int64)v27 - *((_QWORD *)v27 - 1) - 8 <= 0x1F )
          {
            v27 = *((void **)v27 - 1);
            goto LABEL_31;
          }
LABEL_33:
          invalid_parameter_noinfo_noreturn();
        }
LABEL_32:
        *a1 = (__int64)v15;
        a1[1] = (__int64)&v15[32 * v34];
        a1[2] = (__int64)&v15[v13];
        return &v15[v16];
      }
    }
  }
  sub_140001170(v10, v11, v9, v3);
}

