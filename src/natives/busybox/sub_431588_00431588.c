// busybox.exe @ 0x431588 size=55

void __usercall sub_431588(_DWORD *a1@<eax>)
{
  sub_470E28(1);
  *(_BYTE *)a1 = 0;
  sub_43156C(a1[3], a1[2]);
  free(a1);
}

