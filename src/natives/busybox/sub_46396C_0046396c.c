// busybox.exe @ 0x46396c size=58

void *__cdecl sub_46396C(_BYTE *a1, unsigned int a2)
{
  _BYTE *v2; // ebx
  void *result; // eax

  v2 = sub_4041C0(a1, a2);
  result = malloc((size_t)(v2 + 1));
  if ( result != nullptr )
  {
    v2[(_DWORD)result] = 0;
    qmemcpy(result, a1, (unsigned int)v2);
  }
  return result;
}

