// busybox.exe @ 0x4366a4 size=95

int __usercall sub_4366A4@<eax>(signed __int32 *a1@<eax>)
{
  double v1; // st7

  v1 = sub_436630(a1);
  if ( v1 < 0.0 )
    return -(int)(__int64)-v1;
  else
    return (__int64)v1;
}

