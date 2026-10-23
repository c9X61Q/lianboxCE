// busybox.exe @ 0x430594 size=25

int __usercall sub_430594@<eax>(int a1@<eax>)
{
  int result; // eax

  result = *(_DWORD *)dword_486010;
  while ( a1 > 1 )
  {
    result = sub_446708();
    --a1;
  }
  return result;
}

