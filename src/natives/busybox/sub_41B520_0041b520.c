// busybox.exe @ 0x41b520 size=127

unsigned int __usercall sub_41B520@<eax>(const char *String@<eax>)
{
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // ebx
  unsigned int result; // eax
  int v5; // edx

  v1 = (_DWORD *)dword_485FF0;
  if ( String != nullptr )
  {
    result = strtoul(String, nullptr, 10);
    v5 = result;
    if ( result == 0 )
      v5 = 1;
    v1[46] = v5;
    v1[44] = v5;
    v1[47] = result;
    v1[45] = result;
  }
  else
  {
    sub_446724();
    v2 = sub_46C538();
    v3 = dword_485FEC;
    result = sub_45EB78(64, v2);
    *(_DWORD *)(v3 + 300) &= ~0x40u;
  }
  return result;
}

