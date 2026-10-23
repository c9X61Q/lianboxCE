// busybox.exe @ 0x404ca0 size=114

void *__usercall sub_404CA0@<eax>(void *Block@<ecx>, int a2@<eax>, size_t *a3@<edx>)
{
  size_t Size; // ebx
  void *result; // eax

  if ( *a3 != a2 )
    return Block;
  Size = 2 * *a3;
  if ( Size < 0x100 )
    Size = 256;
  if ( Block != nullptr )
  {
    result = realloc(Block, Size);
    if ( result != nullptr )
    {
      *a3 = Size;
    }
    else
    {
      free(Block);
      return nullptr;
    }
  }
  else
  {
    result = malloc(Size);
    if ( result != nullptr )
      *a3 = Size;
  }
  return result;
}

