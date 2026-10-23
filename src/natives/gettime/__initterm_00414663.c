// gettime.exe @ 0x414663 size=43

void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  _PVFV *i; // esi

  for ( i = First; i != Last; ++i )
  {
    if ( *i != nullptr )
      ((void (__thiscall *)(_PVFV))*i)(*i);
  }
}

