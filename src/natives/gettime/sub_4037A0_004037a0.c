// gettime.exe @ 0x4037a0 size=59

int __thiscall sub_4037A0(void *this)
{
  int result; // eax

  result = unknown_libname_40(*(_DWORD *)(**(_DWORD **)this + 4) + *(_DWORD *)this);
  if ( result != 0 )
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)result + 8))(result, this);
  return result;
}

