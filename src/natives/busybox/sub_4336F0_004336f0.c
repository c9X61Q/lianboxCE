// busybox.exe @ 0x4336f0 size=87

_BYTE *__cdecl sub_4336F0(CHAR *a1, LPSTR lpBuffer, DWORD nBufferLength)
{
  DWORD FullPathNameA; // eax
  CHAR FileName; // [esp+11h] [ebp-7h] BYREF
  __int16 v6; // [esp+12h] [ebp-6h]

  FileName = *a1;
  v6 = 58;
  FullPathNameA = GetFullPathNameA(&FileName, nBufferLength, lpBuffer, nullptr);
  if ( nBufferLength >= FullPathNameA && FullPathNameA != 0 )
    return sub_418E48(lpBuffer);
  else
    return nullptr;
}

