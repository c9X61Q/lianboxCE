// busybox.exe @ 0x434550 size=52

char __usercall sub_434550@<al>(int *a1@<eax>)
{
  a1[10] = (int)sub_45D1B8;
  sub_43156C(a1[1], (int)"unxz");
  a1[12] = 0;
  a1[13] = 0;
  while ( sub_433E78((int)a1) == 0 )
    ;
  return 1;
}

