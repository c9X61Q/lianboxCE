// gettime.exe @ 0x4201bc size=72

char __usercall __acrt_initialize_multibyte@<al>(void *a1@<ebp>)
{
  struct __acrt_ptd *v1; // eax

  if ( byte_438E2C == 0 )
  {
    dword_438E24 = (struct __crt_multibyte_data *)&unk_437560;
    dword_438E20 = &unk_437888;
    Destination = &unk_437780;
    v1 = (struct __acrt_ptd *)__acrt_getptd_head();
    setmbcp_internal(a1, 0xFFFFFFFD, true, v1, &dword_438E24);
    byte_438E2C = 1;
  }
  return 1;
}

