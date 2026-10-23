// resizecmdwindow.exe @ 0x140001930 size=296

__int64 __fastcall sub_140001930(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _QWORD *j; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax

  v2 = sub_140006630(std::cout, "usage: ");
  v3 = a1 + 4;
  if ( a1[7] >= 0x10u )
    v3 = (_QWORD *)a1[4];
  v4 = sub_140007E60(v2, v3, a1[6]);
  sub_140006630(v4, " [options]");
  v5 = (_QWORD *)a1[23];
  for ( i = (_QWORD *)a1[22]; i != v5; i += 16 )
  {
    v7 = sub_140006630(std::cout, " [=");
    v8 = i;
    if ( i[3] >= 0x10u )
      v8 = (_QWORD *)*i;
    v9 = sub_140007E60(v7, v8, i[2]);
    sub_140006630(v9, "]");
  }
  v10 = (_QWORD *)a1[26];
  for ( j = (_QWORD *)a1[25]; j != v10; j += 16 )
  {
    v12 = sub_140006630(std::cout, " [");
    v13 = j;
    if ( j[3] >= 0x10u )
      v13 = (_QWORD *)*j;
    v14 = sub_140007E60(v12, v13, j[2]);
    sub_140006630(v14, "]");
  }
  return std::ostream::operator<<(std::cout, sub_140006820);
}

