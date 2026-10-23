// busybox.exe @ 0x42005c size=43

unsigned int __userpurge sub_42005C@<eax>(unsigned int result@<eax>, unsigned __int8 *a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned __int8 *i; // ecx

  for ( i = &a2[a3]; a2 != i; ++a2 )
    result = *(_DWORD *)(a4 + 4 * (*a2 ^ HIBYTE(result))) ^ (result << 8);
  return result;
}

