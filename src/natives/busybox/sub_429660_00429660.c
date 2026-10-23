// busybox.exe @ 0x429660 size=108

_DWORD *__usercall sub_429660@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  _DWORD *v2; // ebx
  int *v4; // esi
  int *v5; // edi
  _DWORD *result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  int v9; // [esp+4h] [ebp-14h] BYREF

  v2 = a1;
  v4 = (int *)*a1;
  v5 = &v9;
  while ( 1 )
  {
    result = (_DWORD *)sub_4209D0(a2, nullptr, nullptr, v2 + 5);
    *v5 = (int)result;
    if ( result == nullptr )
      break;
    *result = v4;
    v4 = (int *)*v5;
    *((_BYTE *)v4 + 26) |= 4u;
    v7 = (_DWORD *)v2[1];
    v5 = v4 + 1;
    if ( v7 == nullptr )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)v2[2];
        if ( v8 != nullptr && v8 != v7 )
          break;
        v4 = (int *)*v4;
        v7 = v2;
        if ( *v2 == 0 )
          return (_DWORD *)v9;
        v2 = (_DWORD *)*v2;
      }
      v5 = v4 + 2;
      v7 = (_DWORD *)v2[2];
    }
    v2 = v7;
  }
  return result;
}

