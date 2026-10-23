// busybox.exe @ 0x4460fc size=29

_DWORD *__usercall sub_4460FC@<eax>(int a1@<eax>)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_4728CC();
  *result = a1;
  result[1] = *(_DWORD *)(dword_486010 - 40);
  return result;
}

