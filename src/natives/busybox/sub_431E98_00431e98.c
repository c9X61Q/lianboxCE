// busybox.exe @ 0x431e98 size=51

int *__usercall sub_431E98@<eax>(int *a1@<eax>)
{
  int v2; // eax
  int v3; // esi

  v2 = a1[3];
  if ( (v2 & 1) != 0 )
  {
    a1[3] = v2 | 2;
    return a1;
  }
  else
  {
    v3 = *a1;
    sub_4631A8();
    sub_4631A8();
    sub_4631A8();
  }
  return (int *)v3;
}

