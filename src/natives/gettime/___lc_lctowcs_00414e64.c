// gettime.exe @ 0x414e64 size=111

wchar_t *__cdecl __lc_lctowcs(wchar_t *Destination, rsize_t SizeInWords, wchar_t *Source)
{
  wchar_t *result; // eax

  if ( wcscpy_s(Destination, SizeInWords, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  result = Source + 64;
  if ( Source[64] != 0 )
    result = (wchar_t *)_wcscats(Destination, SizeInWords, 2);
  if ( Source[128] != 0 )
    return (wchar_t *)_wcscats(Destination, SizeInWords, 2);
  return result;
}

