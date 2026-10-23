// busybox.exe @ 0x471530 size=25

int __usercall sub_471530@<eax>(int result@<eax>, int a2@<edx>)
{
  int FileHandle; // ebx

  if ( result != a2 )
  {
    FileHandle = result;
    sub_470C64(result, a2);
    return sub_442EA4(FileHandle);
  }
  return result;
}

