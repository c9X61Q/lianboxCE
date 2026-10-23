// busybox.exe @ 0x431bc0 size=44

void *__usercall sub_431BC0@<eax>(void *result@<eax>)
{
  void *v1; // ebx
  void **i; // esi
  void *Block; // [esp+0h] [ebp-Ch]

  if ( result != nullptr )
  {
    v1 = result;
    for ( i = (void **)result; *i++ != nullptr; free(*(i - 1)) )
      ;
    free(v1);
    return Block;
  }
  return result;
}

