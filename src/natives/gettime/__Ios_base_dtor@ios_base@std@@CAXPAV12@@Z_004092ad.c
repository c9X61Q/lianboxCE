// gettime.exe @ 0x4092ad size=64

static void __cdecl std::ios_base::_Ios_base_dtor(struct std::ios_base *a1)
{
  int v1; // eax
  _DWORD **v2; // esi

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 == 0 || (--byte_438110[v1], byte_438110[v1] <= 0) )
  {
    std::ios_base::_Tidy(a1);
    v2 = *((_DWORD ***)a1 + 12);
    if ( v2 != nullptr )
    {
      sub_4038D0(v2);
      sub_40A6BA(v2);
    }
  }
}

