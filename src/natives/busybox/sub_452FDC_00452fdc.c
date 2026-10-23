// busybox.exe @ 0x452fdc size=151

void __usercall __noreturn sub_452FDC(int a1@<eax>)
{
  const char *v2; // eax
  int v3; // esi
  const char *v4; // eax
  _BYTE v5[16]; // [esp+Ch] [ebp-5Ch] BYREF
  char v6[76]; // [esp+1Ch] [ebp-4Ch] BYREF

  v2 = off_4846C0[byte_473450];
  if ( byte_473450 > 3 )
  {
    sub_4626DC(v5, "\"%s\"", off_4846C0[byte_473450]);
    v2 = v5;
  }
  v3 = sub_4626DC(v6, "unexpected %s", v2);
  if ( a1 != -1 )
  {
    v4 = off_4846C0[a1];
    if ( a1 > 3 )
    {
      sub_4626DC(v5, "\"%s\"", off_4846C0[a1]);
      v4 = v5;
    }
    sub_4626DC(&v6[v3], " (expecting %s)", v4);
  }
  sub_452FB4(v6);
}

