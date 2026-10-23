// resizecmdwindow.exe @ 0x140002b30 size=516

__int64 __fastcall sub_140002B30(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 result; // rax
  char v22[16]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD **v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  _QWORD *v25; // [rsp+60h] [rbp-48h]

  __wind
  {
    __wind
    {
      __wind
      {
        v23 = a2;
        v24 = a3;
        v25 = a4;
        sub_1400041A0(a1, a3);
        v8 = a2;
        if ( (unsigned __int64)a2[3] >= 0x10 )
          v8 = *a2;
        if ( a2[2] != nullptr || memcmp(v8, &unk_14000B508, 0) != 0 )
        {
          sub_140004070(a1, a2);
          v10 = a1 + 88;
          v11 = (*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) / 160LL;
          v12 = a2;
          if ( (unsigned __int64)a2[3] >= 0x10 )
            v12 = *a2;
          v13 = sub_140007560(a1 + 112, v22, (char *)a2[2] + (_QWORD)v12 - 1);
          v9 = *(_QWORD *)v13;
          *(_QWORD *)(*(_QWORD *)v13 + 24LL) = v11;
        }
        else
        {
          v10 = a1 + 88;
        }
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 == *(_QWORD *)(v10 + 16) )
        {
          sub_140008270(v10, v14, (_DWORD)a2, a3, (__int64)a4);
        }
        else
        {
          sub_140009420(v9, v14, (_DWORD)a2, a3, (__int64)a4);
          *(_QWORD *)(v10 + 8) += 160LL;
        }
      }
      __unwind
      {
        sub_140005EB0(v23);
      }
      v15 = (unsigned __int64)a2[3];
      if ( v15 >= 0x10 )
      {
        v16 = *a2;
        if ( v15 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v16 - *(v16 - 1) - 8 > 0x1F )
            invalid_parameter_noinfo_noreturn();
          v16 = (_QWORD *)*(v16 - 1);
        }
        j_j_free(v16);
      }
      a2[2] = nullptr;
      a2[3] = (_QWORD *)15;
      *(_BYTE *)a2 = 0;
      v17 = *(_QWORD *)(a3 + 24);
      if ( v17 >= 0x10 )
      {
        v18 = *(_QWORD **)a3;
        if ( v17 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v18 - *(v18 - 1) - 8 > 0x1F )
            invalid_parameter_noinfo_noreturn();
          v18 = (_QWORD *)*(v18 - 1);
        }
        j_j_free(v18);
      }
      *(_QWORD *)(a3 + 16) = 0;
      *(_QWORD *)(a3 + 24) = 15;
      *(_BYTE *)a3 = 0;
      v19 = a4[3];
      if ( v19 >= 0x10 )
      {
        v20 = (_QWORD *)*a4;
        if ( v19 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v20 - *(v20 - 1) - 8 > 0x1F )
            invalid_parameter_noinfo_noreturn();
          v20 = (_QWORD *)*(v20 - 1);
        }
        j_j_free(v20);
      }
      a4[2] = 0;
      a4[3] = 15;
      *(_BYTE *)a4 = 0;
      result = a1;
    }
    __unwind
    {
      sub_140005EB0(v24);
    }
  }
  __unwind
  {
    sub_140005EB0(v25);
  }
  return result;
}

