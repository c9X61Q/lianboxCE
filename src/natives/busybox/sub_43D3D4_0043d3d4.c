// busybox.exe @ 0x43d3d4 size=26

_BYTE *__usercall sub_43D3D4@<eax>(_BYTE *result@<eax>, char a2@<dl>)
{
  if ( result != nullptr )
  {
    if ( *result == 0 )
      return nullptr;
    while ( result[1] != 0 )
      ++result;
    if ( *result != a2 )
      return nullptr;
  }
  return result;
}

