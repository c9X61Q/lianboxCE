// gettime.exe @ 0x41fad1 size=60

int __thiscall sub_41FAD1(void **this, size_t Size)
{
  int result; // eax

  unknown_libname_84((int)this);
  result = __crt_win32_buffer_internal_dynamic_resizing::allocate(this + 2, Size);
  if ( result != 0 )
  {
    *(this + 3) = nullptr;
    *((_BYTE *)this + 20) = 0;
  }
  else
  {
    *((_BYTE *)this + 20) = 1;
    *(this + 3) = (void *)Size;
    return 0;
  }
  return result;
}

