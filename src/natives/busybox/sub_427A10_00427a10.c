// busybox.exe @ 0x427a10 size=48

_BYTE *sub_427A10()
{
  int i; // ecx
  _BYTE *result; // eax

  for ( i = dword_486010; ; *(_DWORD *)(i + 8) = result + 1 )
  {
    result = *(_BYTE **)(i + 8);
    if ( *result != 32 && (*result == 10 || (unsigned __int8)(*result - 9) > 4u) )
      break;
    if ( (unsigned int)result >= *(_DWORD *)(i + 4) - 1 )
      break;
  }
  return result;
}

