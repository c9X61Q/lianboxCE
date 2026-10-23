// busybox.exe @ 0x43e400 size=31

_DWORD *__usercall sub_43E400@<eax>(_DWORD **a1@<eax>)
{
  _DWORD *result; // eax
  int v3; // ebx

  result = *a1;
  if ( result != nullptr )
  {
    v3 = result[1];
    *a1 = (_DWORD *)*result;
    free(result);
    return (_DWORD *)v3;
  }
  return result;
}

