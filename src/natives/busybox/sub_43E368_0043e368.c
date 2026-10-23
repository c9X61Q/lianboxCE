// busybox.exe @ 0x43e368 size=28

_DWORD *__usercall sub_43E368@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_470E78();
  result[1] = a2;
  *result = *a1;
  *a1 = result;
  return result;
}

