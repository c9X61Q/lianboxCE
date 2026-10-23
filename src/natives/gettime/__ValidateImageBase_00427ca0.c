// gettime.exe @ 0x427ca0 size=51

BOOL __cdecl _ValidateImageBase(int a1)
{
  int v1; // eax
  BOOL result; // eax

  result = false;
  if ( *(_WORD *)a1 == 23117 )
  {
    v1 = a1 + *(_DWORD *)(a1 + 60);
    if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 267 )
      return true;
  }
  return result;
}

