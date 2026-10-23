// busybox.exe @ 0x422874 size=91

_BYTE *__usercall sub_422874@<eax>(_BYTE *result@<eax>)
{
  _BYTE *v1; // ebx
  _BYTE v2[40]; // [esp+0h] [ebp-28h] BYREF

  v1 = result;
  while ( *v1 != 0 )
  {
    v1 = (_BYTE *)sub_4228D0(v2, v1);
    *(&NumOfElements + 1) = sub_47168C(NumOfElements, 6148);
    result = (_BYTE *)(24 * NumOfElements + *(&NumOfElements + 1));
    qmemcpy(result, v2, 24);
    ++NumOfElements;
  }
  return result;
}

