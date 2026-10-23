// busybox.exe @ 0x443c74 size=37

int __cdecl sub_443C74(char *Path)
{
  chmod(Path, 438);
  return rmdir(Path);
}

