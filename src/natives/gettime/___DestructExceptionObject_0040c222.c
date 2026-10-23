// gettime.exe @ 0x40c222 size=161

void __cdecl __DestructExceptionObject(int a1)
{
  int v1; // ecx
  void *v2; // edx
  int v3; // ecx

  if ( a1 != 0
    && *(_DWORD *)a1 == -529697949
    && *(_DWORD *)(a1 + 16) == 3
    && (*(_DWORD *)(a1 + 20) == 429065504 || *(_DWORD *)(a1 + 20) == 429065505 || *(_DWORD *)(a1 + 20) == 429065506) )
  {
    v1 = *(_DWORD *)(a1 + 28);
    if ( v1 != 0 )
    {
      v2 = *(void **)(v1 + 4);
      if ( v2 != nullptr )
      {
        _CallMemberFunction0(*(void *const *)(a1 + 24), v2);
      }
      else if ( (*(_BYTE *)v1 & 0x10) != 0 )
      {
        v3 = **(_DWORD **)(a1 + 24);
        if ( v3 != 0 )
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 8))(*(_DWORD *)(*(_DWORD *)v3 + 8), v3);
      }
    }
  }
}

