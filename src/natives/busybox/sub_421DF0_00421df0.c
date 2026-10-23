// busybox.exe @ 0x421df0 size=64

int __cdecl sub_421DF0(UINT *a1, BYTE *a2, int a3)
{
  int result; // eax

  result = 2 - !IsDBCSLeadByteEx(*a1, *a2);
  if ( result > a3 )
  {
    *_errno() = 22;
    return -1;
  }
  return result;
}

