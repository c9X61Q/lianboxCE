// busybox.exe @ 0x447abc size=37

FILE *sub_447ABC()
{
  int FileHandle; // eax
  FILE *result; // eax
  int v2; // ecx

  FileHandle = sub_470C28();
  result = fdopen_0(FileHandle, "r+");
  if ( result == nullptr )
    sub_416F78(v2);
  return result;
}

