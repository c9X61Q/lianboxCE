// busybox.exe @ 0x471624 size=104

void *__usercall sub_471624@<eax>(void *a1@<eax>)
{
  size_t v2; // esi
  size_t v3; // eax
  int v4; // edx

  v2 = 128;
  while ( 1 )
  {
    v2 += 64;
    a1 = sub_471600(a1, v2);
    if ( sub_443260((char *)a1, v2) != nullptr )
      break;
    if ( *_errno() != 34 )
    {
      free(a1);
      sub_418224("getcwd", v4);
      return nullptr;
    }
  }
  v3 = strlen((const char *)a1);
  return sub_471600(a1, v3 + 1);
}

