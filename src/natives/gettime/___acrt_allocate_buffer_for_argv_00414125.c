// gettime.exe @ 0x414125 size=79

void *__cdecl __acrt_allocate_buffer_for_argv(unsigned int a1, unsigned int a2, unsigned int a3)
{
  void *v3; // esi

  if ( a1 >= 0x3FFFFFFF || a2 >= 0xFFFFFFFF / a3 || ~(4 * a1) <= a3 * a2 )
    return nullptr;
  v3 = _calloc_base(4 * a1 + a3 * a2, 1u);
  _free_base(nullptr);
  return v3;
}

