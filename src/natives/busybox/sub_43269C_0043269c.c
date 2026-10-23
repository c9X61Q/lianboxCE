// busybox.exe @ 0x43269c size=54

int __fastcall sub_43269C(unsigned int a1, char *a2)
{
  int v4; // esi
  int v5; // eax

  v4 = 0;
  while ( a1 != 0 )
  {
    v5 = sub_45C610(a1, a2);
    if ( v5 < 0 )
    {
      if ( v4 == 0 )
        return v5;
      return v4;
    }
    v4 += v5;
    a2 += v5;
    a1 -= v5;
  }
  return v4;
}

