// busybox.exe @ 0x446194 size=52

char __usercall sub_446194@<al>(FILE *Stream@<eax>)
{
  ++*(_DWORD *)(dword_485FF0 + 56);
  putc(10, Stream);
  fflush(Stream);
  return sub_43B8DC();
}

