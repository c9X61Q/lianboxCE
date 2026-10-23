// gettime.exe @ 0x408890 size=77

int __cdecl _vsprintf_s_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  unsigned __int64 *v5; // eax
  int v8; // [esp+4h] [ebp-4h]

  v5 = (unsigned __int64 *)sub_408880();
  v8 = __stdio_common_vsprintf_s(*v5, Buffer, BufferCount, Format, Locale, ArgList);
  if ( v8 >= 0 )
    return v8;
  else
    return -1;
}

