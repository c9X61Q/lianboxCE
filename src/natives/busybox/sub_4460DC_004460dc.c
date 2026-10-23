// busybox.exe @ 0x4460dc size=31

_DWORD *__usercall sub_4460DC@<eax>(int a1@<eax>)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_4728CC();
  *result = a1;
  result[1] = -1;
  result[6] = 255;
  return result;
}

