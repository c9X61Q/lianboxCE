// busybox.exe @ 0x431d48 size=39

void *__usercall sub_431D48@<eax>(_DWORD *a1@<eax>)
{
  int i; // esi
  void *Block; // [esp+0h] [ebp-Ch]

  for ( i = a1[4]; i > 0; free((void *)a1[i + 9]) )
    --i;
  free(a1);
  return Block;
}

