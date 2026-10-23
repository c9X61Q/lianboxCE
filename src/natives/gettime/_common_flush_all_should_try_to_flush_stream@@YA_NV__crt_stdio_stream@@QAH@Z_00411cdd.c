// gettime.exe @ 0x411cdd size=49

char __cdecl common_flush_all_should_try_to_flush_stream(int a1, _DWORD *a2)
{
  if ( a1 == 0 || (*(_DWORD *)(a1 + 12) & 0x2000) == 0 )
    return 0;
  if ( !is_stream_flushable_or_commitable(*(_DWORD *)(a1 + 12)) )
  {
    ++*a2;
    return 0;
  }
  return 1;
}

