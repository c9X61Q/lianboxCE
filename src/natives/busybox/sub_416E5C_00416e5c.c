// busybox.exe @ 0x416e5c size=83

int __usercall sub_416E5C@<eax>(char **a1@<eax>)
{
  char **v1; // ebx
  int v2; // edi
  int FileHandle; // esi
  int v4; // edx
  int v5; // ebp

  v1 = &off_47DE4C;
  if ( *a1 != nullptr )
    v1 = a1;
  v2 = 0;
  do
  {
    FileHandle = sub_447A6C();
    if ( FileHandle < 0 )
      goto LABEL_5;
    sub_416EC0();
    v5 = v4;
    if ( FileHandle != 0 )
      sub_442EA4(FileHandle);
    if ( v5 < 0 )
LABEL_5:
      v2 = 1;
    ++v1;
  }
  while ( *v1 != nullptr );
  return v2;
}

