// resizecmdwindow.exe @ 0x1400028f0 size=564

__int64 __fastcall sub_1400028F0(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r12
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 result; // rax
  char v26[16]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD **v27; // [rsp+48h] [rbp-60h]
  __int64 v28; // [rsp+50h] [rbp-58h]
  _QWORD *v29; // [rsp+58h] [rbp-50h]

  __wind
  {
    __wind
    {
      __wind
      {
        __wind
        {
          v27 = a2;
          v28 = a3;
          v29 = a4;
          sub_1400041A0(a1, a3);
          v10 = a2;
          if ( (unsigned __int64)a2[3] >= 0x10 )
            v10 = *a2;
          if ( a2[2] != nullptr || memcmp(v10, &unk_14000B508, 0) != 0 )
          {
            sub_140004070(a1, a2);
            v12 = a1 + 64;
            v13 = (*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) / 160LL;
            v14 = a2;
            if ( (unsigned __int64)a2[3] >= 0x10 )
              v14 = *a2;
            v15 = sub_140007560(a1 + 112, v26, (char *)a2[2] + (_QWORD)v14 - 1);
            v11 = *(_QWORD *)v15;
            *(_QWORD *)(*(_QWORD *)v15 + 24LL) = v13;
          }
          else
          {
            v12 = a1 + 64;
          }
          v16 = *(_QWORD *)(v12 + 8);
          if ( v16 == *(_QWORD *)(v12 + 16) )
          {
            sub_140008020(v12, v16, (_DWORD)a2, a3, (__int64)a4, a5);
          }
          else
          {
            sub_140009170(v11, v16, (_DWORD)a2, a3, (__int64)a4, a5);
            *(_QWORD *)(v12 + 8) += 160LL;
          }
        }
        __unwind
        {
          sub_140005EB0(v27);
        }
        v17 = (unsigned __int64)a2[3];
        if ( v17 >= 0x10 )
        {
          v18 = *a2;
          if ( v17 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v18 - *(v18 - 1) - 8 > 0x1F )
              invalid_parameter_noinfo_noreturn();
            v18 = (_QWORD *)*(v18 - 1);
          }
          j_j_free(v18);
        }
        a2[2] = nullptr;
        a2[3] = (_QWORD *)15;
        *(_BYTE *)a2 = 0;
        v19 = *(_QWORD *)(a3 + 24);
        if ( v19 >= 0x10 )
        {
          v20 = *(_QWORD **)a3;
          if ( v19 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v20 - *(v20 - 1) - 8 > 0x1F )
              invalid_parameter_noinfo_noreturn();
            v20 = (_QWORD *)*(v20 - 1);
          }
          j_j_free(v20);
        }
        *(_QWORD *)(a3 + 16) = 0;
        *(_QWORD *)(a3 + 24) = 15;
        *(_BYTE *)a3 = 0;
        v21 = a4[3];
        if ( v21 >= 0x10 )
        {
          v22 = (_QWORD *)*a4;
          if ( v21 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v22 - *(v22 - 1) - 8 > 0x1F )
              invalid_parameter_noinfo_noreturn();
            v22 = (_QWORD *)*(v22 - 1);
          }
          j_j_free(v22);
        }
        a4[2] = 0;
        a4[3] = 15;
        *(_BYTE *)a4 = 0;
        v23 = *(_QWORD *)(a5 + 56);
        if ( v23 != 0 )
        {
          LOBYTE(v21) = v23 != a5;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 32LL))(v23, v21);
          *(_QWORD *)(a5 + 56) = 0;
        }
        result = a1;
      }
      __unwind
      {
        sub_140005EB0(v28);
      }
    }
    __unwind
    {
      sub_140005EB0(v29);
    }
  }
  __unwind
  {
    sub_1400014E0(a5, v21);
  }
  return result;
}

