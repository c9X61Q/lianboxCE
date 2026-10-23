// gettime.exe @ 0x40ef59 size=24

int __thiscall __crt_stdio_output::formatting_buffer::count<char>(_DWORD *this)
{
  if ( *(this + 257) != 0 )
    return *(this + 256) >> 1;
  else
    return 512;
}

