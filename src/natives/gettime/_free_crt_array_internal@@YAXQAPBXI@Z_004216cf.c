// gettime.exe @ 0x4216cf size=37

void __cdecl free_crt_array_internal(void **a1, unsigned int a2)
{
  void **i; // esi

  for ( i = a1; i != &a1[a2]; ++i )
    _free_base(*i);
}

