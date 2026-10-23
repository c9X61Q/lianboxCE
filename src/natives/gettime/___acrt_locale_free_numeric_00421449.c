// gettime.exe @ 0x421449 size=105

void __cdecl __acrt_locale_free_numeric(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( *a1 != off_437070 )
      _free_base(*a1);
    if ( a1[1] != off_437074 )
      _free_base(a1[1]);
    if ( a1[2] != off_437078 )
      _free_base(a1[2]);
    if ( a1[12] != off_4370A0 )
      _free_base(a1[12]);
    if ( a1[13] != off_4370A4 )
      _free_base(a1[13]);
  }
}

