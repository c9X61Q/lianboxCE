// gettime.exe @ 0x409ebd size=80

int __thiscall std::filebuf::underflow(unsigned __int8 ***this)
{
  unsigned __int8 *v2; // edx
  int result; // eax
  int v4; // ebx

  v2 = **(this + 7);
  if ( v2 != nullptr && v2 < &(**(this + 11))[(int)v2] )
    return *v2;
  v4 = ((int (__thiscall *)(unsigned __int8 ***))(*this)[7])(this);
  result = -1;
  if ( v4 != -1 )
  {
    ((void (__thiscall *)(unsigned __int8 ***, int))(*this)[4])(this, v4);
    return v4;
  }
  return result;
}

