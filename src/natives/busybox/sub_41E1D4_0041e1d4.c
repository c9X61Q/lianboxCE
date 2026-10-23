// busybox.exe @ 0x41e1d4 size=77

unsigned int __usercall sub_41E1D4@<eax>(void *a1@<eax>, size_t a2@<edx>)
{
  int Val; // esi
  unsigned int v5; // ebx
  _BYTE v7[272]; // [esp+Ch] [ebp-110h] BYREF

  Val = 0;
  v5 = 0;
  do
  {
    if ( memchr(a1, Val, a2) == nullptr )
      v7[v5++] = Val;
    ++Val;
  }
  while ( Val != 256 );
  qmemcpy(a1, v7, v5);
  return v5;
}

