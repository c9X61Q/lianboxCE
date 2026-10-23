// gettime.exe @ 0x41d88a size=92

int __cdecl __acrt_stdio_allocate_buffer_nolock(_DWORD *a1)
{
  int v1; // edi
  volatile signed __int32 *v2; // eax
  int result; // eax

  ++dword_4388BC;
  v1 = 4096;
  a1[1] = _calloc_base(0x1000u, 1u);
  _free_base(nullptr);
  v2 = a1 + 3;
  if ( a1[1] != 0 )
  {
    _InterlockedOr(v2, 0x40u);
  }
  else
  {
    _InterlockedOr(v2, 0x400u);
    a1[1] = a1 + 5;
    v1 = 2;
  }
  a1[6] = v1;
  result = a1[1];
  a1[2] = 0;
  *a1 = result;
  return result;
}

