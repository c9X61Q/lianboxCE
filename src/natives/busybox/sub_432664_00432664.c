// busybox.exe @ 0x432664 size=56

int __fastcall sub_432664(int a1, CHAR *a2)
{
  int v4; // esi
  int v5; // eax

  v4 = 0;
  while ( a1 != 0 )
  {
    v5 = sub_45C560(a1, a2);
    if ( v5 < 0 )
    {
      if ( v4 == 0 )
        return v5;
      return v4;
    }
    if ( v5 == 0 )
      return v4;
    a2 += v5;
    v4 += v5;
    a1 -= v5;
  }
  return v4;
}

