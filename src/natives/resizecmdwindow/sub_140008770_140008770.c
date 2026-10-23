// resizecmdwindow.exe @ 0x140008770 size=467

void **__fastcall sub_140008770(void **a1, unsigned int *a2)
{
  unsigned __int64 v4; // r8
  void *v5; // rdx
  size_t v6; // r8
  int v9; // [rsp+4Ch] [rbp-B4h]
  _QWORD v10[30]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v10, 0, 0xE8u);
  v10[0] = &unk_14000BD90;
  std::ios::ios(&v10[17]);
  __wind
  {
    std::ostream::ostream(v10, &v10[1], 0, 0);
    __wind
    {
      *(_QWORD *)((char *)v10 + *(int *)(v10[0] + 4LL)) = &std::ostringstream::`vftable';
      *(int *)((char *)&v9 + *(int *)(v10[0] + 4LL)) = *(_DWORD *)(v10[0] + 4LL) - 136;
      std::streambuf::streambuf(&v10[1]);
    }
    __unwind
    {
      std::ostream::~ostream<char,std::char_traits<char>>(&v10[2]);
    }
  }
  __unwind
  {
    std::ios::~ios<char,std::char_traits<char>>(&v10[17]);
  }
  __wind
  {
    v10[1] = &std::stringbuf::`vftable';
    v10[14] = 0;
    LODWORD(v10[15]) = 4;
    std::ostream::operator<<(v10, *a2);
    *(_OWORD *)a1 = 0;
    a1[2] = nullptr;
    a1[3] = (void *)15;
    *(_BYTE *)a1 = 0;
    if ( (v10[15] & 0x22) == 2 || (v4 = *(_QWORD *)v10[9], *(_QWORD *)v10[9] == 0) )
    {
      if ( (v10[15] & 4) != 0 || *(_QWORD *)v10[8] == 0 )
      {
        v6 = 0;
        v5 = nullptr;
      }
      else
      {
        v5 = *(void **)v10[4];
        v6 = *(_QWORD *)v10[8] + *(int *)v10[11] - *(_QWORD *)v10[4];
      }
    }
    else
    {
      v5 = *(void **)v10[5];
      if ( v4 < v10[14] )
        v4 = v10[14];
      v6 = v4 - (_QWORD)v5;
    }
    if ( v5 != nullptr )
    {
      __wind
      {
        sub_1400062A0(a1, v5, v6);
      }
      __unwind
      {
        sub_140005EB0((__int64)a1);
      }
    }
  }
  __unwind
  {
    sub_140006200((__int64)v10);
  }
  *(_QWORD *)((char *)v10 + *(int *)(v10[0] + 4LL)) = &std::ostringstream::`vftable';
  *(int *)((char *)&v9 + *(int *)(v10[0] + 4LL)) = *(_DWORD *)(v10[0] + 4LL) - 136;
  sub_140005D60((__int64)&v10[1]);
  std::ostream::~ostream<char,std::char_traits<char>>(&v10[2]);
  std::ios::~ios<char,std::char_traits<char>>(&v10[17]);
  return a1;
}

