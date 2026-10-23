// gettime.exe @ 0x4165e9 size=46

// Microsoft VisualC universal runtime
void __stdcall unknown_libname_94(void **a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a1, 0xFFFFFFFF) == 0 && *a1 != &unk_437560 )
  {
    _free_base(*a1);
    *a1 = &unk_437560;
  }
}

