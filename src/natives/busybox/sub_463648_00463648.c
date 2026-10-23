// busybox.exe @ 0x463648 size=71

char *__usercall sub_463648@<eax>(__time32_t *Time@<ecx>, size_t SizeInBytes@<edx>, char *a3@<eax>)
{
  struct tm *v5; // eax
  __time32_t v7; // [esp+10h] [ebp-10h] BYREF

  if ( Time == nullptr )
  {
    time(&v7);
    Time = &v7;
  }
  v5 = localtime(Time);
  return &a3[sub_444C3C(a3, SizeInBytes, (int)"%Y-%m-%d %H:%M:%S", v5)];
}

