// gettime.exe @ 0x4135d1 size=36

void __usercall test_whether_TOS_is_int(long double a1@<st0>)
{
  char v1; // cl

  if ( rint(a1) == a1 )
  {
    v1 = 1;
    if ( rint(a1 * 0.5) == a1 * 0.5 )
      v1 = 2;
    odd(v1);
  }
}

