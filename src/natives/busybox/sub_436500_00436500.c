// busybox.exe @ 0x436500 size=157

int __cdecl sub_436500(_DWORD *a1)
{
  __int64 v1; // kr00_8
  __int64 v2; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+10h] [ebp-14h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v1 = *(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL;
  *a1 = sub_4023F0(*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL, 10000000);
  LODWORD(v2) = sub_402540(v1, 10000000);
  a1[1] = sub_4023F0(v2, 10);
  return 0;
}

