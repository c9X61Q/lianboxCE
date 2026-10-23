// gettime.exe @ 0x41654b size=46

char __usercall initialize_pointers@<al>(int a1@<esi>)
{
  int v2; // [esp+0h] [ebp-8h]

  sub_40EAAC(v2);
  sub_413BF1(a1);
  __acrt_initialize_signal_handlers(a1);
  sub_413E1A(a1);
  sub_414996(a1);
  return 1;
}

