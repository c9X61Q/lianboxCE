// gettime.exe @ 0x42325f size=109

void *__cdecl _recalloc_base(void *Block, size_t Count, size_t Size)
{
  size_t v4; // edi
  size_t v5; // esi
  char *v6; // ebx

  if ( Count != 0 && 0xFFFFFFE0 / Count < Size )
  {
    *_errno() = 12;
    return nullptr;
  }
  else
  {
    if ( Block != nullptr )
      v4 = _msize(Block);
    else
      v4 = 0;
    v5 = Size * Count;
    v6 = (char *)_realloc_base(Block, Size * Count);
    if ( v6 != nullptr && v4 < v5 )
      memset(&v6[v4], 0, v5 - v4);
    return v6;
  }
}

