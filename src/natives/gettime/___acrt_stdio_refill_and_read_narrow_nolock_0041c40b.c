// gettime.exe @ 0x41c40b size=11

int __cdecl __acrt_stdio_refill_and_read_narrow_nolock(FILE *a1)
{
  return common_refill_and_read_nolock<char>(a1);
}

