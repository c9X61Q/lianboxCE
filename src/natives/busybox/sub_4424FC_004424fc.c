// busybox.exe @ 0x4424fc size=50

_DWORD *__usercall sub_4424FC@<eax>(_DWORD *result@<eax>)
{
  result[20] = 1732584193;
  result[21] = -271733879;
  result[22] = -1732584194;
  result[23] = 271733878;
  result[18] = 0;
  result[19] = 0;
  result[16] = sub_4425C0;
  return result;
}

