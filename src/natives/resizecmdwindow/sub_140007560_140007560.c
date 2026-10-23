// resizecmdwindow.exe @ 0x140007560 size=649

__int64 __fastcall sub_140007560(__int64 a1, __int64 a2, char *a3)
{
  char v6; // al
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 *v12; // rbp
  __int64 *v13; // rcx
  _BYTE *v15; // rsi
  float v16; // xmm3_4
  __int64 v17; // rcx
  float v18; // xmm0_4
  unsigned __int64 v19; // rdi
  float v20; // xmm2_4
  float v21; // xmm0_4
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 *v27; // rdx
  char v28; // cl
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // r8
  __int64 *v33; // [rsp+20h] [rbp-48h] BYREF
  _BYTE *v34; // [rsp+28h] [rbp-40h]

  v6 = *a3;
  v7 = 0x100000001B3LL * ((unsigned __int8)*a3 ^ 0xCBF29CE484222325uLL);
  v8 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(__int64 **)(v9 + 8 * v8 + 8);
  v11 = *(__int64 **)(a1 + 8);
  if ( v10 == v11 )
  {
    v10 = *(__int64 **)(a1 + 8);
    v12 = v10;
  }
  else
  {
    v13 = *(__int64 **)(v9 + 8 * v8);
    if ( v6 == *((_BYTE *)v10 + 16) )
    {
LABEL_6:
      *(_QWORD *)a2 = v10;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    while ( v10 != v13 )
    {
      v10 = (__int64 *)v10[1];
      if ( v6 == *((_BYTE *)v10 + 16) )
        goto LABEL_6;
    }
    v11 = v10;
    v12 = v10;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  __wind
  {
    v33 = (__int64 *)(a1 + 8);
    v15 = operator new(0x20u);
    v34 = v15;
    v15[16] = *a3;
    *((_QWORD *)v15 + 3) = 0;
    v16 = *(float *)a1;
    v17 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v17 < 0 )
      v18 = (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1))
          + (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1));
    else
      v18 = (float)(int)v17;
    v19 = *(_QWORD *)(a1 + 56);
    if ( (v19 & 0x8000000000000000uLL) != 0LL )
      v20 = (float)(int)(*(_DWORD *)(a1 + 56) & 1 | (v19 >> 1)) + (float)(int)(*(_DWORD *)(a1 + 56) & 1 | (v19 >> 1));
    else
      v20 = (float)(int)v19;
  }
  __unwind
  {
    sub_140007CB0(&v33);
  }
  __wind
  {
    if ( (float)(v18 / v20) <= v16 )
    {
LABEL_35:
      v29 = (_QWORD *)v10[1];
      ++*(_QWORD *)(a1 + 16);
      *(_QWORD *)v15 = v11;
      *((_QWORD *)v15 + 1) = v29;
      *v29 = v15;
      v10[1] = (__int64)v15;
      v30 = *(_QWORD *)(a1 + 24);
      v31 = 2 * (v7 & *(_QWORD *)(a1 + 48));
      v32 = *(__int64 **)(v30 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
      if ( v32 == *(__int64 **)(a1 + 8) )
      {
        *(_QWORD *)(v30 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v15;
LABEL_41:
        *(_QWORD *)(v30 + 8 * v31 + 8) = v15;
        goto LABEL_42;
      }
      if ( v32 == v12 )
      {
        *(_QWORD *)(v30 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v15;
      }
      else if ( *(_QWORD **)(v30 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) == v29 )
      {
        goto LABEL_41;
      }
LABEL_42:
      *(_QWORD *)a2 = v15;
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    v21 = ceilf(v18 / v16);
    v22 = 0;
    if ( v21 >= 9.223372e18 )
    {
      v21 = v21 - 9.223372e18;
      if ( v21 < 9.223372e18 )
        v22 = 0x8000000000000000uLL;
    }
    v23 = v22 + (unsigned int)(int)v21;
    v24 = 8;
    if ( v23 > 8 )
      v24 = v23;
    if ( v19 < v24 )
    {
      if ( v19 >= 0x200 || (v19 *= 8LL, v19 < v24) )
        v19 = v24;
    }
    sub_140007CD0(a1, v19);
    v25 = *(_QWORD *)(a1 + 24);
    v26 = *(__int64 **)(v25 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
    v10 = *(__int64 **)(a1 + 8);
    if ( v26 == v10 )
    {
      v34 = nullptr;
    }
    else
    {
      v27 = *(__int64 **)(v25 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
      v28 = v15[16];
      if ( v28 != *((_BYTE *)v26 + 16) )
      {
        while ( 1 )
        {
          v10 = v26;
          if ( v26 == v27 )
            break;
          v26 = (__int64 *)v26[1];
          if ( v28 == *((_BYTE *)v26 + 16) )
            goto LABEL_32;
        }
        v33 = v26;
        v34 = nullptr;
        goto LABEL_34;
      }
LABEL_32:
      v10 = (__int64 *)*v26;
    }
    v33 = v10;
LABEL_34:
    v12 = v10;
    v11 = v33;
    goto LABEL_35;
  }
  __unwind
  {
    sub_140007CB0(&v33);
  }
}

