// gettime.exe @ 0x403220 size=47

std::ios_base::failure *__thiscall std::ios_base::failure::failure(
        std::ios_base::failure *this,
        char *Str,
        const struct std::error_code *a3)
{
  sub_403420(*(_DWORD *)a3, *((_DWORD *)a3 + 1), Str);
  *(_DWORD *)this = &std::ios_base::failure::`vftable';
  return this;
}

