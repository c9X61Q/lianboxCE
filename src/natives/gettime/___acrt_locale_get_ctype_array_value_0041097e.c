// gettime.exe @ 0x41097e size=34

int __cdecl __acrt_locale_get_ctype_array_value(
        const unsigned __int16 *const Locale_pctype_array,
        const int Char_value,
        const int Mask)
{
  if ( (unsigned int)(Char_value + 1) > 0x100 )
    return 0;
  else
    return (unsigned __int16)Mask & Locale_pctype_array[Char_value];
}

