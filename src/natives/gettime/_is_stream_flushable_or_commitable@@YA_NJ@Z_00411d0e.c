// gettime.exe @ 0x411d0e size=35

bool __cdecl is_stream_flushable_or_commitable(__int16 a1)
{
  if ( (a1 & 3) == 2 && (a1 & 0xC0) != 0 )
    return (a1 & 3) - 1;
  else
    return (a1 & 0x800) != 0;
}

