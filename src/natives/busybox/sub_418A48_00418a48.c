// busybox.exe @ 0x418a48 size=44

unsigned int __usercall sub_418A48@<eax>(unsigned int result@<eax>)
{
  int v1; // ebx
  int v2; // edx

  v1 = dword_486010;
  if ( *(_DWORD *)dword_486010 < result )
  {
    v2 = sub_442AB8(result - *(_DWORD *)dword_486010, 10);
    result = v2 + 1;
    if ( v2 == 0 )
      return *(_DWORD *)v1;
  }
  return result;
}

