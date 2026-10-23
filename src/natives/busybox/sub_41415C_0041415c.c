// busybox.exe @ 0x41415c size=24

size_t __usercall sub_41415C@<eax>(const char *Str@<eax>)
{
  if ( Str != nullptr )
    return (strlen(Str) + 8) & 0xFFFFFFF8;
  else
    return 0;
}

