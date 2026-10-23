// gettime.exe @ 0x40a3f0 size=99

void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)
{
  void (__thiscall *v1)(_DWORD); // eax
  PVOID v2; // [esp-4h] [ebp-18h]

  while ( (unsigned int)dword_437010 < 0xA )
  {
    v2 = dword_4382A8[dword_437010++];
    v1 = (void (__thiscall *)(_DWORD))DecodePointer(v2);
    if ( v1 != nullptr )
      v1(v1);
  }
}

