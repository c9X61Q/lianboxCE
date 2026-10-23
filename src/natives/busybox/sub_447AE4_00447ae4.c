// busybox.exe @ 0x447ae4 size=101

_DWORD *__usercall sub_447AE4@<eax>(char *lpFileName@<eax>)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *result; // eax
  int v5; // [esp+8h] [ebp-Ch]

  v2 = sub_443508(lpFileName, 0, v5);
  if ( v2 < 0 )
    return nullptr;
  v3 = v2;
  if ( sub_43C630(lpFileName, ".lzma") == nullptr )
    return (_DWORD *)sub_45EAA0();
  result = (_DWORD *)sub_4728CC();
  result[3] = v3;
  result[1] = sub_469060;
  result[2] = "unlzma";
  return result;
}

