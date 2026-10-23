// gettime.exe @ 0x40ef71 size=129

char __thiscall __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(
        _DWORD *this,
        unsigned int a2,
        int a3)
{
  size_t v5; // esi
  void *v6; // [esp-8h] [ebp-14h]
  void *Block; // [esp+8h] [ebp-4h] BYREF

  if ( a2 > 0x7FFFFFFF )
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 12;
    return 0;
  }
  v5 = 2 * a2;
  if ( (*(this + 257) != 0 || v5 > 0x400) && v5 > *(this + 256) )
  {
    Block = _malloc_base(v5);
    if ( Block == nullptr )
    {
      _free_base(nullptr);
      return 0;
    }
    unknown_libname_70(&Block);
    v6 = Block;
    *(this + 256) = v5;
    _free_base(v6);
  }
  return 1;
}

