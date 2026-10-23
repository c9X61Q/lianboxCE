// busybox.exe @ 0x4631a8 size=28

void __usercall sub_4631A8(void *Block@<eax>)
{
  if ( dword_4735A4 > (unsigned int)Block || dword_4735A0 <= (unsigned int)Block )
    free(Block);
}

