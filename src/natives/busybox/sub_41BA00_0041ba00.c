// busybox.exe @ 0x41ba00 size=42

int __thiscall sub_41BA00(void *this)
{
  int v1; // ecx
  int result; // eax
  void *v3; // eax
  const char *Path; // eax

  v1 = sub_4356C8(this);
  result = -1;
  if ( v1 != 0 )
  {
    v3 = (void *)sub_41E9A4(v1, &unk_4774F6);
    Path = (const char *)sub_415D34(v3);
    return chdir(Path);
  }
  return result;
}

