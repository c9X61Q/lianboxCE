// resizecmdwindow.exe @ 0x140004070 size=291

__int64 __fastcall sub_140004070(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  unsigned __int8 v7; // dl
  __int64 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( a2[2] == 2 )
  {
    v3 = a2;
    v4 = a2[3];
    if ( v4 >= 0x10 )
      v3 = (_QWORD *)*v3;
    if ( *(_BYTE *)v3 == 45 )
    {
      v5 = a2;
      if ( v4 >= 0x10 )
        v5 = (_QWORD *)*a2;
      v6 = a1[15];
      v7 = *((_BYTE *)v5 + 1);
      v8 = (__int64 *)(a1[17] + 16 * ((0x100000001B3LL * (v7 ^ 0xCBF29CE484222325uLL)) & a1[20]));
      result = v8[1];
      if ( result != v6 )
      {
        v10 = *v8;
        if ( v7 == *(_BYTE *)(result + 16) )
          goto LABEL_13;
        while ( result != v10 )
        {
          result = *(_QWORD *)(result + 8);
          if ( v7 == *(_BYTE *)(result + 16) )
            goto LABEL_13;
        }
      }
      result = 0;
LABEL_13:
      if ( result == 0 )
        result = v6;
      if ( result != v6 )
      {
        v11 = sub_140006630(std::cerr, "(build error) short option name ");
        v12 = unknown_libname_1(v11, a2);
        v13 = sub_140006630(v12, " already exists");
        std::ostream::operator<<(v13, sub_140006820);
        exit(-1);
      }
      return result;
    }
  }
  v14 = sub_140006630(std::cerr, "(build error) short option name must be `-` followed by one character");
  std::ostream::operator<<(v14, sub_140006820);
  exit(-1);
}

