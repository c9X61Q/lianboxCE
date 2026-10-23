// resizecmdwindow.exe @ 0x140009a50 size=60

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = malloc(Size);
    if ( result != nullptr )
      break;
    if ( callnewh(i) == 0 )
    {
      if ( i != -1 )
        sub_140009ED0();
      sub_140001170(v3, v2, v4, v5);
    }
  }
  return result;
}

