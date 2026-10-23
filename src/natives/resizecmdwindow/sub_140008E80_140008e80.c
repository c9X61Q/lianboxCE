// resizecmdwindow.exe @ 0x140008e80 size=224

__int64 __fastcall sub_140008E80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 i; // rdi
  _QWORD *v10; // r8
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 != 0 )
  {
    for ( i = a1[1]; v4 != i; v4 += 160 )
      sub_140008C10(v4);
    v10 = (_QWORD *)*a1;
    if ( (unsigned __int64)(160 * ((a1[2] - *a1) / 160)) >= 0x1000 )
    {
      if ( (unsigned __int64)v10 - *(v10 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v10 = (_QWORD *)*(v10 - 1);
    }
    j_j_free(v10);
  }
  *a1 = a2;
  a1[1] = a2 + 160 * a3;
  result = a2 + 160 * a4;
  a1[2] = result;
  return result;
}

