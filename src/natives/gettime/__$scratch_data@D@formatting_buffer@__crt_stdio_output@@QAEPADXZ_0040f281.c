// gettime.exe @ 0x40f281 size=30

char *__thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(_DWORD *this)
{
  int v2; // edi
  int v3; // eax

  v2 = *(this + 257);
  v3 = __crt_stdio_output::formatting_buffer::count<char>(this);
  if ( v2 != 0 )
    return (char *)(v2 + v3);
  else
    return (char *)this + v3;
}

