// resizecmdwindow.exe @ 0x140007180 size=978

_QWORD *__fastcall sub_140007180(_QWORD *a1, const void **a2, unsigned __int64 *a3, _QWORD *a4)
{
  void **v8; // rcx
  char *v9; // rbp
  size_t v10; // r15
  bool v11; // r14
  char *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rbp
  __int64 v20; // r14
  const void **v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // ecx
  __int64 v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *result; // rax
  void *Buf1[2]; // [rsp+40h] [rbp-B8h] BYREF
  size_t Size[3]; // [rsp+50h] [rbp-A8h]
  void *Block[3]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-78h]
  const void **v39; // [rsp+88h] [rbp-70h]
  unsigned __int64 *v40; // [rsp+90h] [rbp-68h]
  _QWORD *v41; // [rsp+98h] [rbp-60h]

  __wind
  {
    __wind
    {
      __wind
      {
        v39 = a2;
        v40 = a3;
        v41 = a4;
        *(_OWORD *)Buf1 = 0;
        *(_OWORD *)Size = 0;
        sub_1400077F0(Buf1, "int", 3);
        v8 = Buf1;
        v9 = (char *)Buf1[0];
        v10 = Size[1];
        if ( Size[1] >= 0x10 )
          v8 = (void **)Buf1[0];
        v11 = Size[0] == 4 && memcmp(v8, "null", 4u) == 0;
        if ( v10 >= 0x10 )
        {
          v12 = v9;
          if ( v10 + 1 >= 0x1000 )
          {
            v9 = *((char **)v9 - 1);
            if ( (unsigned __int64)(v12 - v9 - 8) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v9);
        }
        if ( v11 )
        {
          v13 = sub_140001210();
          v15 = sub_140006630(std::cerr, (__int64)"(build error) unsupport type for option: ", v14);
          v17 = sub_140006630(v15, v13, v16);
          std::ostream::operator<<(v17, sub_140006820);
          exit(-1);
        }
        sub_1400041A0(a1, a3);
        v18 = a2;
        if ( (unsigned __int64)a2[3] >= 0x10 )
          v18 = *a2;
        if ( a2[2] != nullptr || memcmp(v18, &unk_14000B508, 0) != 0 )
        {
          sub_140004070(a1, a2);
          v19 = a1 + 11;
          v21 = a2;
          if ( (unsigned __int64)a2[3] >= 0x10 )
            v21 = (const void **)*a2;
          v20 = (a1[12] - a1[11]) / 160LL;
          *(_QWORD *)(*(_QWORD *)sub_140007560(a1 + 14, Buf1, (char *)a2[2] + (_QWORD)v21 - 1) + 24LL) = v20;
        }
        else
        {
          v19 = a1 + 11;
        }
        v22 = sub_140008770(Block);
        v23 = v22;
        __wind
        {
          *(_OWORD *)Buf1 = 0;
          *(_OWORD *)Size = 0;
          sub_1400077F0(Buf1, "int", 3);
          __wind
          {
            v25 = v19[1];
            if ( v25 == v19[2] )
            {
              sub_1400096E0((_DWORD)v19, v25, (_DWORD)a2, (_DWORD)a3, (__int64)a4, (__int64)Buf1, v23);
            }
            else
            {
              sub_1400098C0(v24, v25, (_DWORD)a2, (_DWORD)a3, (__int64)a4, (__int64)Buf1, v23);
              v19[1] += 160LL;
            }
          }
          __unwind
          {
            sub_140005EB0((__int64)Buf1);
          }
          if ( Size[1] >= 0x10 )
          {
            v26 = Buf1[0];
            if ( Size[1] + 1 >= 0x1000 )
            {
              v26 = *((void **)Buf1[0] - 1);
              if ( (unsigned __int64)((char *)Buf1[0] - (char *)v26 - 8) > 0x1F )
                invalid_parameter_noinfo_noreturn();
            }
            j_j_free(v26);
          }
          if ( v38 >= 0x10 )
          {
            v27 = Block[0];
            if ( v38 + 1 >= 0x1000 )
            {
              v27 = *((void **)Block[0] - 1);
              if ( (unsigned __int64)((char *)Block[0] - (char *)v27 - 8) > 0x1F )
                invalid_parameter_noinfo_noreturn();
            }
            j_j_free(v27);
          }
          v28 = (unsigned __int64)a2[3];
          if ( v28 >= 0x10 )
          {
            v29 = *a2;
            if ( v28 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)v29 - *(v29 - 1) - 8 > 0x1F )
                invalid_parameter_noinfo_noreturn();
              v29 = (_QWORD *)*(v29 - 1);
            }
            j_j_free(v29);
          }
          a2[2] = nullptr;
          a2[3] = (const void *)15;
          *(_BYTE *)a2 = 0;
          v30 = a3[3];
          if ( v30 >= 0x10 )
          {
            v31 = (_QWORD *)*a3;
            if ( v30 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)v31 - *(v31 - 1) - 8 > 0x1F )
                invalid_parameter_noinfo_noreturn();
              v31 = (_QWORD *)*(v31 - 1);
            }
            j_j_free(v31);
          }
          a3[2] = 0;
          a3[3] = 15;
          *(_BYTE *)a3 = 0;
          v32 = a4[3];
          if ( v32 >= 0x10 )
          {
            v33 = (_QWORD *)*a4;
            if ( v32 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)v33 - *(v33 - 1) - 8 > 0x1F )
                invalid_parameter_noinfo_noreturn();
              v33 = (_QWORD *)*(v33 - 1);
            }
            j_j_free(v33);
          }
          a4[2] = 0;
          a4[3] = 15;
          *(_BYTE *)a4 = 0;
          result = a1;
        }
        __unwind
        {
          sub_140005EB0((__int64)Block);
        }
      }
      __unwind
      {
        sub_140005EB0((__int64)v39);
      }
    }
    __unwind
    {
      sub_140005EB0((__int64)v40);
    }
  }
  __unwind
  {
    sub_140005EB0((__int64)v41);
  }
  return result;
}

