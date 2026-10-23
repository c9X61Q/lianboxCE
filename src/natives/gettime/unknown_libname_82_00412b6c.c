// gettime.exe @ 0x412b6c size=160

// Microsoft VisualC universal runtime
int __thiscall unknown_libname_82(void *this)
{
  size_t v2; // edi
  void *v4; // ebx
  void *v5; // [esp-Ch] [ebp-18h]
  size_t v6; // [esp-8h] [ebp-14h]
  int v7; // [esp-4h] [ebp-10h]

  v2 = **(_DWORD **)this & 0xFFFFFFFE;
  __acrt_stdio_flush_nolock(**((FILE ***)this + 1), *((__crt_cached_ptd_host **)this + 2));
  __acrt_stdio_free_buffer_nolock(**((_DWORD **)this + 1));
  _InterlockedAnd((volatile signed __int32 *)(**((_DWORD **)this + 1) + 12), 0xFFFFF81F);
  if ( (**((_BYTE **)this + 3) & 4) != 0 )
    return set_buffer(**((_DWORD **)this + 1), **((_DWORD **)this + 1) + 20, 2, 1024);
  if ( **((_DWORD **)this + 4) != 0 )
  {
    v7 = 384;
    v6 = v2;
    v5 = **((void ***)this + 4);
  }
  else
  {
    v4 = _calloc_base(v2, 1u);
    _free_base(nullptr);
    if ( v4 == nullptr )
    {
      ++dword_4388BC;
      return -1;
    }
    v7 = 320;
    v6 = v2;
    v5 = v4;
  }
  return set_buffer(**((_DWORD **)this + 1), v5, v6, v7);
}

