// gettime.exe @ 0x404050 size=53

int __stdcall sub_404050(int (__thiscall ***a1)(_DWORD, int))
{
  int result; // eax

  result = (int)a1;
  if ( a1 != nullptr )
    return (**a1)(a1, 1);
  return result;
}

