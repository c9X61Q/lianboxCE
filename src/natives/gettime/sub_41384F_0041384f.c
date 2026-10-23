// gettime.exe @ 0x41384f size=63

int __thiscall sub_41384F(void **this, int a2)
{
  int result; // eax

  unknown_libname_84((int)this);
  result = __crt_win32_buffer_internal_dynamic_resizing::allocate(
             this + 2,
             2 * a2,
             (const struct __crt_win32_buffer_empty_debug_info *)this);
  if ( result != 0 )
  {
    *(this + 3) = nullptr;
    *((_BYTE *)this + 20) = 0;
  }
  else
  {
    *((_BYTE *)this + 20) = 1;
    *(this + 3) = (void *)a2;
    return 0;
  }
  return result;
}

