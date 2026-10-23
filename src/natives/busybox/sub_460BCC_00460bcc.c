// busybox.exe @ 0x460bcc size=48

int __usercall sub_460BCC@<eax>(const char *String@<eax>)
{
  int v1; // eax
  int v2; // edx

  if ( String == nullptr )
    return 255;
  v1 = atoi(String);
  v2 = 1;
  if ( v1 > 0 )
  {
    v2 = 255;
    if ( v1 <= 255 )
      return v1;
  }
  return v2;
}

