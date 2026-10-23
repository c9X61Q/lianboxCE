// busybox.exe @ 0x4526fc size=16

int __cdecl sub_4526FC(const char *a1, char *Str2)
{
  return strcmp(a1, (const char *)(*(_DWORD *)Str2 + 1));
}

