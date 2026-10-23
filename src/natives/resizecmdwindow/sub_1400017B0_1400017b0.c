// resizecmdwindow.exe @ 0x1400017b0 size=373

__int64 __fastcall sub_1400017B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-38h]

  __wind
  {
    __wind
    {
      __wind
      {
        __wind
        {
          __wind
          {
            *(_OWORD *)a1 = 0;
            *(_QWORD *)(a1 + 16) = 0;
            *(_QWORD *)(a1 + 24) = 0;
            *(_OWORD *)a1 = *(_OWORD *)a2;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 16) = 0;
            *(_QWORD *)(a2 + 24) = 15;
            *(_BYTE *)a2 = 0;
            *(_OWORD *)(a1 + 32) = 0;
            *(_QWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 56) = 15;
            *(_BYTE *)(a1 + 32) = 0;
            *(_QWORD *)(a1 + 64) = 0;
            *(_QWORD *)(a1 + 72) = 0;
            *(_QWORD *)(a1 + 80) = 0;
            *(_QWORD *)(a1 + 88) = 0;
            *(_QWORD *)(a1 + 96) = 0;
            *(_QWORD *)(a1 + 104) = 0;
            v4 = a1 + 112;
            v10 = a1 + 112;
            *(_DWORD *)(a1 + 112) = 0;
            *(_QWORD *)(a1 + 120) = 0;
            *(_QWORD *)(a1 + 128) = 0;
            v5 = operator new(0x20u);
            __wind
            {
              __wind
              {
                *v5 = v5;
                v5[1] = v5;
                *(_QWORD *)(v4 + 8) = v5;
                *(_QWORD *)(v4 + 24) = 0;
                *(_QWORD *)(v4 + 32) = 0;
                *(_QWORD *)(v4 + 40) = 0;
                *(_QWORD *)(v4 + 48) = 7;
                *(_QWORD *)(v4 + 56) = 8;
                *(_DWORD *)v4 = 1065353216;
                sub_140006480(v4 + 24, 16, *(_QWORD *)(v4 + 8));
                *(_QWORD *)(a1 + 176) = 0;
                *(_QWORD *)(a1 + 184) = 0;
                *(_QWORD *)(a1 + 192) = 0;
                *(_QWORD *)(a1 + 200) = 0;
                *(_QWORD *)(a1 + 208) = 0;
                *(_QWORD *)(a1 + 216) = 0;
                v6 = *(_QWORD *)(a2 + 24);
                if ( v6 >= 0x10 )
                {
                  v7 = *(_QWORD **)a2;
                  if ( v6 + 1 >= 0x1000 )
                  {
                    if ( (unsigned __int64)v7 - *(v7 - 1) - 8 > 0x1F )
                      invalid_parameter_noinfo_noreturn();
                    v7 = (_QWORD *)*(v7 - 1);
                  }
                  j_j_free(v7);
                }
                *(_QWORD *)(a2 + 16) = 0;
                *(_QWORD *)(a2 + 24) = 15;
                *(_BYTE *)a2 = 0;
                result = a1;
              }
              __unwind
              {
                sub_1400055E0(v10 + 24);
              }
            }
            __unwind
            {
              sub_140005640(v10 + 8);
            }
          }
          __unwind
          {
            sub_1400056A0(a1 + 88);
          }
        }
        __unwind
        {
          sub_140005770(a1 + 64);
        }
      }
      __unwind
      {
        sub_140005EB0(a1 + 32);
      }
    }
    __unwind
    {
      sub_140005EB0(a1);
    }
  }
  __unwind
  {
    sub_140005EB0(a2);
  }
  return result;
}

