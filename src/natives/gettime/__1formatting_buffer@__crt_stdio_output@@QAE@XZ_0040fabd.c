// gettime.exe @ 0x40fabd size=26

void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(void **this)
{
  _free_base(*(this + 257));
  *(this + 257) = nullptr;
}

