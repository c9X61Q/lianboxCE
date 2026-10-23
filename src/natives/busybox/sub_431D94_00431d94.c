// busybox.exe @ 0x431d94 size=57

unsigned __int16 *__usercall sub_431D94@<eax>(unsigned __int16 *result@<eax>)
{
  unsigned __int16 *v1; // ebx
  unsigned int i; // esi
  void **v3; // eax
  void *Block; // [esp+0h] [ebp-Ch]

  if ( result != nullptr )
  {
    v1 = result;
    for ( i = 0; ; ++i )
    {
      v3 = *((void ***)v1 + 2);
      if ( v1[2] <= i )
        break;
      free(v3[i]);
    }
    free(v3);
    free(v1);
    return (unsigned __int16 *)Block;
  }
  return result;
}

