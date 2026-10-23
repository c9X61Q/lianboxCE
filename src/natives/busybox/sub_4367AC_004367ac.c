// busybox.exe @ 0x4367ac size=37

struct tm *__cdecl sub_4367AC(__time32_t *Time, struct tm *a2)
{
  qmemcpy(a2, gmtime(Time), sizeof(struct tm));
  return a2;
}

