// busybox.exe @ 0x443310 size=35

int __cdecl sub_443310(char *name, int namelen)
{
  sub_43AD2C();
  return gethostname(name, namelen);
}

