// gettime.exe @ 0x40b1ab size=29

_DWORD *__scrt_initialize_default_local_stdio_options()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *result; // eax
  int v3; // ecx

  v0 = sub_408880();
  v1 = v0[1];
  *v0 |= 0x24u;
  v0[1] = v1;
  result = sub_40B1A5();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}

