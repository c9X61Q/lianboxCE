// gettime.exe @ 0x41388e size=31

static int __cdecl __crt_win32_buffer_internal_dynamic_resizing::allocate(void **const a1, size_t Size)
{
  void *v2; // eax

  v2 = _malloc_base(Size);
  *a1 = v2;
  return v2 != nullptr ? 0 : 12;
}

