// busybox.exe @ 0x42ee00 size=64

int __usercall sub_42EE00@<eax>(FILE *Stream@<eax>)
{
  int v2; // ebx

  v2 = ferror(Stream);
  if ( v2 != 0 )
    *_errno() = 5;
  if ( Stream != off_4730E8(0) )
    return fclose(Stream) | v2;
  return v2;
}

