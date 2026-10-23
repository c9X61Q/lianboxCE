// busybox.exe @ 0x445220 size=47

char *__usercall sub_445220@<eax>(char *a1@<eax>)
{
  char *v1; // ebx

  v1 = a1;
  if ( sub_4434EC(a1) == nullptr || sub_443494(v1) != 0 )
    return nullptr;
  return v1;
}

