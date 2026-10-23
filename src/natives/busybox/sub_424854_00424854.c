// busybox.exe @ 0x424854 size=50

_DWORD *__usercall sub_424854@<eax>(int *a1@<eax>, int a2@<edx>)
{
  _DWORD *result; // eax
  int v5; // edx
  _DWORD *v6; // ecx

  result = (_DWORD *)sub_470E78();
  result[2] = a2;
  v5 = *a1;
  if ( *a1 != 0 )
  {
    *result = v5;
    v6 = *(_DWORD **)(v5 + 4);
    result[1] = v6;
    *v6 = result;
    *(_DWORD *)(v5 + 4) = result;
  }
  else
  {
    result[1] = result;
    *result = result;
    *a1 = (int)result;
  }
  return result;
}

