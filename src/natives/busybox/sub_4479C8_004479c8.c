// busybox.exe @ 0x4479c8 size=55

int __usercall sub_4479C8@<eax>(int a1@<ecx>, int a2@<edx>, char *lpFileName@<eax>)
{
  int result; // eax
  int v5; // edx
  int v6; // [esp+Ch] [ebp-8h]

  result = sub_443508(lpFileName, a2, a1);
  if ( result < 0 )
  {
    v6 = result;
    sub_417FE4(v5, "can't open '%s'", lpFileName);
    return v6;
  }
  return result;
}

