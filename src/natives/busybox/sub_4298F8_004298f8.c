// busybox.exe @ 0x4298f8 size=38

void *sub_4298F8()
{
  void *v0; // eax
  unsigned int v1; // ebx
  unsigned int i; // esi

  v0 = *(void **)(dword_486010 + 68);
  v1 = *(_DWORD *)(dword_486010 + 36) - 2;
  for ( i = 0; i < v1; ++i )
    v0 = (void *)sub_446708();
  return sub_4298C0(v0);
}

