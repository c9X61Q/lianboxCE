// gettime.exe @ 0x413c2c size=87

_PNH __cdecl _query_new_handler()
{
  int (__cdecl *v1)(size_t); // [esp+10h] [ebp-1Ch]

  __acrt_lock(0);
  v1 = (int (__cdecl *)(size_t))unknown_libname_87(dword_4388C0);
  __acrt_unlock(0);
  return v1;
}

