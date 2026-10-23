// gettime.exe @ 0x41fc8d size=131

// Microsoft VisualC universal runtime
volatile signed __int32 *__thiscall unknown_libname_102(volatile signed __int32 ****this)
{
  void **v2; // eax
  volatile signed __int32 *result; // eax

  memcpy_s(Destination, 0x101u, (const void *const)((**this)[18] + 6), 0x101u);
  memcpy_s(dword_438E20, 0x100u, (char *)(**this)[18] + 281, 0x100u);
  if ( _InterlockedExchangeAdd(***(this + 1), 0xFFFFFFFF) == 0 )
  {
    v2 = (void **)**(this + 1);
    if ( *v2 != &unk_437560 )
      _free_base(*v2);
  }
  ***(this + 1) = (**this)[18];
  result = (**this)[18];
  _InterlockedIncrement(result);
  return result;
}

