// gettime.exe @ 0x4074f0 size=26

_DWORD *__cdecl std::make_error_code(_DWORD *a1, int a2)
{
  int (__stdcall ***v2)(int); // eax

  v2 = sub_4074C0();
  unknown_libname_8(a1, a2, (int)v2);
  return a1;
}

