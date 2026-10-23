// busybox.exe @ 0x431d70 size=35

void *__usercall sub_431D70@<eax>(_DWORD **a1@<eax>, void *a2@<edx>)
{
  _DWORD *i; // eax
  _DWORD *v4; // esi
  void *Block; // [esp+0h] [ebp-Ch]

  Block = a2;
  for ( i = *a1; i != nullptr; i = v4 )
  {
    v4 = (_DWORD *)*i;
    free(i);
  }
  *a1 = nullptr;
  return Block;
}

