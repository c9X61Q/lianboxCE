// busybox.exe @ 0x420034 size=38

unsigned int __userpurge sub_420034@<eax>(unsigned int result@<eax>, _BYTE *a2@<edx>, int a3@<ecx>, int a4)
{
  _BYTE *i; // ecx

  for ( i = &a2[a3]; a2 != i; ++a2 )
    result = *(_DWORD *)(a4 + 4 * (unsigned __int8)(result ^ *a2)) ^ (result >> 8);
  return result;
}

