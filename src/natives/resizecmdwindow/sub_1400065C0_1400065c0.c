// resizecmdwindow.exe @ 0x1400065c0 size=67

void __fastcall sub_1400065C0(__int64 a1, void *a2, __int64 a3)
{
  void *v3; // rax

  v3 = a2;
  if ( (unsigned __int64)(160 * a3) >= 0x1000 )
  {
    if ( (unsigned __int64)a2 - *((_QWORD *)a2 - 1) - 8 > 0x1F )
      invalid_parameter_noinfo_noreturn();
    v3 = *((void **)a2 - 1);
  }
  j_j_free(v3);
}

