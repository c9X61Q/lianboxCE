// gettime.exe @ 0x413c00 size=44

int __cdecl _callnewh(size_t Size)
{
  _PNH new_handler; // eax

  new_handler = _query_new_handler();
  return new_handler != nullptr && ((int (__thiscall *)(_PNH, size_t))new_handler)(new_handler, Size) != 0;
}

