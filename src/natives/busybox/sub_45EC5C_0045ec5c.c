// busybox.exe @ 0x45ec5c size=26

signed __int32 *__usercall sub_45EC5C@<eax>(signed __int32 *a1@<eax>, signed __int32 a2@<edx>)
{
  int v4; // ecx

  sub_41CBC4((int)a1);
  a1[4] = a2;
  sub_437B2C(a1, v4);
  return a1;
}

