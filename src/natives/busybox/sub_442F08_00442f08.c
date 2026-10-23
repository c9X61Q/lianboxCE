// busybox.exe @ 0x442f08 size=37

int __cdecl sub_442F08(int FileHandleSrc, int FileHandleDst)
{
  int v2; // ebx

  v2 = FileHandleDst;
  if ( dup2(FileHandleSrc, FileHandleDst) == -1 )
    return -1;
  return v2;
}

