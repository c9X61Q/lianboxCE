// busybox.exe @ 0x43e420 size=19

_DWORD *__usercall sub_43E420@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edx
  _DWORD *v2; // ecx

  v1 = nullptr;
  while ( a1 != nullptr )
  {
    v2 = (_DWORD *)*a1;
    *a1 = v1;
    v1 = a1;
    a1 = v2;
  }
  return v1;
}

