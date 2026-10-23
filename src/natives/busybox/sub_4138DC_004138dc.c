// busybox.exe @ 0x4138dc size=50

unsigned int __usercall sub_4138DC@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v2; // ecx
  int v4; // eax

  v2 = dword_486008 & 1;
  if ( (dword_486008 & 1) != 0 )
    return a1 + 1;
  switch ( a2 )
  {
    case 9:
      return (a1 & 0xFFFFFFF8) + 8;
    case 8:
      v4 = a1 - 1;
      if ( v4 >= 0 )
        return v4;
      break;
    case 13:
      break;
    default:
      return a1 + 1;
  }
  return v2;
}

