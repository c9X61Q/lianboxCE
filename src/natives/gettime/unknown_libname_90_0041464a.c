// gettime.exe @ 0x41464a size=20

// Microsoft VisualC universal runtime
void *unknown_libname_90()
{
  void *result; // eax

  result = dword_4389E4;
  if ( dword_4389E4 == nullptr )
  {
    result = (void *)sub_41417F();
    dword_4389E4 = result;
  }
  return result;
}

