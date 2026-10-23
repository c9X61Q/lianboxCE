// gettime.exe @ 0x41076a size=29

char __thiscall sub_41076A(_DWORD *this)
{
  if ( (*(this + 7) & 0x20) != 0 )
    *(this + 7) |= 0x80u;
  return sub_40F29F((int)this, 0);
}

