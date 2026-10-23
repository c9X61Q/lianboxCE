// gettime.exe @ 0x4138ad size=20

int __thiscall __crt_win32_buffer<char,__crt_win32_buffer_no_resizing>::set_to_nullptr(int this)
{
  int result; // eax

  result = 0;
  if ( *(_BYTE *)(this + 20) != 0 )
    *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}

