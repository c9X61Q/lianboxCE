// busybox.exe @ 0x442494 size=104

int __cdecl sub_442494(_DWORD *a1, char *a2, int a3)
{
  int result; // eax
  char v4; // dl

  if ( *a1 != 54936
    || (result = 1, *a2 < 0)
    && ((unsigned __int8)(*a2 + 127) > 0x7Du
     || a3 <= 1
     || (v4 = a2[1], result = 2, (unsigned __int8)(v4 - 64) > 0x3Eu)
     && (unsigned __int8)(v4 + 0x80) > 0x7Eu
     && (a3 <= 3 || (result = 4, (unsigned __int8)(v4 - 48) > 9u))) )
  {
    *_errno() = 22;
    return -1;
  }
  return result;
}

