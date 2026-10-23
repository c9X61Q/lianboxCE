// gettime.exe @ 0x40c20e size=20

bool __uncaught_exception()
{
  int v0; // ecx
  bool result; // al

  v0 = __vcrt_getptd_noinit();
  result = false;
  if ( v0 != 0 )
    return *(_DWORD *)(v0 + 24) > 0;
  return result;
}

