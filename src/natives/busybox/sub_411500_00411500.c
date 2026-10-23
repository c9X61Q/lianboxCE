// busybox.exe @ 0x411500 size=64

int sub_411500()
{
  char *v0; // eax
  char *v1; // eax
  int v2; // edx

  v0 = setlocale(2, nullptr);
  v1 = strchr(v0, 46);
  v2 = 0;
  if ( v1 != nullptr )
    return atoi(v1 + 1);
  return v2;
}

