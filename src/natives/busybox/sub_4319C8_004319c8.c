// busybox.exe @ 0x4319c8 size=76

int __cdecl sub_4319C8(__int64 a1, unsigned __int8 a2)
{
  sub_431A68(a1, HIDWORD(a1), 32);
  return sub_431A18(qword_485BF8 + a1, (unsigned __int64)(*(_QWORD *)&qword_485BF8 + a1) >> 32, a2);
}

