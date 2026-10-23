// busybox.exe @ 0x4305b0 size=52

_DWORD *__usercall sub_4305B0@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  while ( a1 != nullptr && sub_4312E8(a1[1], a2, 0) != 0 )
    a1 = (_DWORD *)*a1;
  return a1;
}

