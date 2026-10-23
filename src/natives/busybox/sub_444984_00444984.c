// busybox.exe @ 0x444984 size=50

intptr_t __usercall sub_444984@<eax>(const char *const *a1@<eax>)
{
  const char *FileName; // eax

  FileName = sub_433530();
  return spawnve(1, FileName, a1, (const char *const *)environ);
}

