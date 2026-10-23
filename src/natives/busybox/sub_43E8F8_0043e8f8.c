// busybox.exe @ 0x43e8f8 size=37

struct tm *__cdecl sub_43E8F8(__time32_t *Time, struct tm *a2)
{
  qmemcpy(a2, localtime(Time), sizeof(struct tm));
  return a2;
}

