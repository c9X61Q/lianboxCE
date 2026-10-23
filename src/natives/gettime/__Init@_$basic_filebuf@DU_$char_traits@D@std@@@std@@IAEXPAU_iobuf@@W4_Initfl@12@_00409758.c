// gettime.exe @ 0x409758 size=125

int __thiscall std::filebuf::_Init(int this, FILE *Stream, int a3)
{
  char **v4; // eax
  char **v5; // eax
  int *v6; // eax
  int result; // eax
  int v8; // ecx
  int *Count; // [esp+Ch] [ebp-Ch] BYREF
  char **Pointer; // [esp+10h] [ebp-8h] BYREF
  char **Base; // [esp+14h] [ebp-4h] BYREF

  *(_BYTE *)(this + 72) = a3 == 1;
  *(_BYTE *)(this + 61) = 0;
  std::streambuf::_Init((_DWORD *)this);
  if ( Stream != nullptr )
  {
    Base = nullptr;
    Pointer = nullptr;
    Count = nullptr;
    _get_stream_buffer_pointers(Stream, &Base, &Pointer, &Count);
    v4 = Base;
    *(_DWORD *)(this + 12) = Base;
    *(_DWORD *)(this + 16) = v4;
    v5 = Pointer;
    *(_DWORD *)(this + 28) = Pointer;
    *(_DWORD *)(this + 32) = v5;
    v6 = Count;
    *(_DWORD *)(this + 44) = Count;
    *(_DWORD *)(this + 48) = v6;
  }
  *(_DWORD *)(this + 76) = Stream;
  result = dword_4381D4;
  v8 = dword_4381D8;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 64) = result;
  *(_DWORD *)(this + 68) = v8;
  return result;
}

