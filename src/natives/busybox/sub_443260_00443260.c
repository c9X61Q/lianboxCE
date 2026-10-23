// busybox.exe @ 0x443260 size=41

_BYTE *__cdecl sub_443260(char *DstBuf, int SizeInBytes)
{
  char *v2; // eax

  v2 = getcwd(DstBuf, SizeInBytes);
  if ( v2 != nullptr )
    return sub_418E48(v2);
  else
    return nullptr;
}

