// gettime.exe @ 0x41615f size=63

char __cdecl string_is_alpha(int a1, unsigned int a2)
{
  int v2; // edi
  int v3; // esi
  const unsigned __int16 *v4; // eax

  v2 = 0;
  if ( a2 == 0 )
    return 1;
  while ( 1 )
  {
    v3 = *(unsigned __int16 *)(a1 + 2 * v2);
    v4 = __pctype_func();
    if ( __acrt_locale_get_ctype_array_value(v4, v3, 259) == 0 )
      break;
    if ( ++v2 >= a2 )
      return 1;
  }
  return 0;
}

