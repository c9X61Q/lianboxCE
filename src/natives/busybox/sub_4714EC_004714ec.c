// busybox.exe @ 0x4714ec size=26

void *__usercall sub_4714EC@<eax>(const void *a1@<eax>, size_t a2@<edx>)
{
  void *result; // eax

  result = sub_470E78(a2);
  qmemcpy(result, a1, a2);
  return result;
}

