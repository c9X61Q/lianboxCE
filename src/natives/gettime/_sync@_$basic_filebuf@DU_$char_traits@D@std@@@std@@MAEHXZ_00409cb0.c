// gettime.exe @ 0x409cb0 size=57

int __thiscall std::filebuf::sync(FILE **this)
{
  if ( *(this + 19) == nullptr
    || ((int (__thiscall *)(FILE **, int))(*this)->_flag)(this, -1) == -1
    || fflush(*(this + 19)) >= 0 )
  {
    return 0;
  }
  else
  {
    return -1;
  }
}

