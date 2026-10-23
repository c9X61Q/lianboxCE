// busybox.exe @ 0x446aa0 size=40

_DWORD *__usercall sub_446AA0@<eax>(_DWORD **a1@<eax>)
{
  _DWORD *result; // eax

  result = *a1;
  if ( result != nullptr && (*result & 0xFF00) == 0x1300 )
  {
    *a1 = (_DWORD *)result[3];
    return (_DWORD *)result[2];
  }
  else
  {
    *a1 = nullptr;
  }
  return result;
}

