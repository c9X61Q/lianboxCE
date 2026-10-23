// gettime.exe @ 0x4118e9 size=76

void __acrt_uninitialize_stdio()
{
  int i; // esi

  sub_411DFF();
  _fcloseall();
  for ( i = 0; i != 12; i += 4 )
  {
    __acrt_stdio_free_buffer_nolock(*(_DWORD *)((char *)dword_4388B8 + i));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_4388B8 + i) + 32));
  }
  _free_base(dword_4388B8);
  dword_4388B8 = nullptr;
}

