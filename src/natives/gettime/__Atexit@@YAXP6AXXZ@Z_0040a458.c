// gettime.exe @ 0x40a458 size=47

void __cdecl _Atexit(PVOID Ptr)
{
  PVOID v1; // eax

  if ( dword_437010 == 0 )
    abort();
  v1 = EncodePointer(Ptr);
  dword_4382A8[--dword_437010] = v1;
}

