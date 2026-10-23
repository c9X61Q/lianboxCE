// gettime.exe @ 0x405dc0 size=42

void **__thiscall sub_405DC0(void **this)
{
  if ( *this != nullptr )
    free(*this);
  *this = nullptr;
  return this;
}

