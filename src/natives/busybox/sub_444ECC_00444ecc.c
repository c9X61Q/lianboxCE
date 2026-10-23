// busybox.exe @ 0x444ecc size=37

int __cdecl sub_444ECC(char *FileName)
{
  chmod(FileName, 438);
  return unlink(FileName);
}

