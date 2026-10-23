// gettime.exe @ 0x40a68a size=48

void *__cdecl operator new(size_t Size)
{
  void *result; // eax

  while ( 1 )
  {
    result = malloc(Size);
    if ( result != nullptr )
      break;
    if ( _callnewh(Size) == 0 )
    {
      if ( Size != -1 )
        sub_408AFF();
      sub_40AEB8();
    }
  }
  return result;
}

