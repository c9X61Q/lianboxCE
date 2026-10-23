// busybox.exe @ 0x452784 size=47

u_long __cdecl sub_452784(double a1)
{
  u_long result; // eax

  result = MultiByteStr;
  if ( MultiByteStr > 0x7E )
    sub_418210("stack overflow");
  ++MultiByteStr;
  *((double *)&unk_485BE8 + result) = a1;
  return result;
}

