// busybox.exe @ 0x4298c0 size=54

void *__usercall sub_4298C0@<eax>(void *result@<eax>)
{
  int v1; // edx
  int v2; // ebx

  v1 = *(_DWORD *)(dword_486010 + 4);
  v2 = v1 - 1;
  if ( v1 - 1 > (unsigned int)result )
  {
    result = memchr(result, 10, v1 - (_DWORD)result - 1);
    if ( result == nullptr )
      return (void *)v2;
  }
  return result;
}

