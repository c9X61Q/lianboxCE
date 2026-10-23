// busybox.exe @ 0x471d00 size=40

void __fastcall sub_471D00(unsigned int a1, char *a2)
{
  int v3; // eax
  const char *v4; // edx

  if ( a1 != 0 )
  {
    v3 = sub_43269C(a1, a2);
    if ( a1 != v3 )
    {
      v4 = "short write";
      if ( v3 < 0 )
        v4 = "write error";
      sub_41823C(v4);
    }
  }
}

