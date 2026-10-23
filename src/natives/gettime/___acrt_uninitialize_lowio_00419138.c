// gettime.exe @ 0x419138 size=44

char __acrt_uninitialize_lowio()
{
  unsigned int i; // esi

  for ( i = 0; i < 128; ++i )
  {
    if ( dword_438A48[i] != 0 )
    {
      __acrt_lowio_destroy_handle_array((LPCRITICAL_SECTION)dword_438A48[i]);
      dword_438A48[i] = 0;
    }
  }
  return 1;
}

