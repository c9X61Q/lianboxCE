// busybox.exe @ 0x4715b0 size=23

_DWORD *__usercall sub_4715B0@<eax>(_DWORD *result@<eax>, _DWORD *a2@<edx>)
{
  *result ^= *a2;
  result[1] ^= a2[1];
  result[2] ^= a2[2];
  result[3] ^= a2[3];
  return result;
}

