// gettime.exe @ 0x409c62 size=78

FILE **__thiscall std::filebuf::setbuf(FILE **this, char *Buffer, __int64 Size)
{
  int v4; // eax

  if ( Buffer != nullptr || Size != 0 )
    v4 = 0;
  else
    v4 = 4;
  if ( *(this + 19) == nullptr || setvbuf(*(this + 19), Buffer, v4, Size) != 0 )
    return nullptr;
  std::filebuf::_Init((int)this, *(this + 19), 1);
  return this;
}

