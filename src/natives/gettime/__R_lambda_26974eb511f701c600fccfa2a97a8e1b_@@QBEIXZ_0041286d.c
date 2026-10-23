// gettime.exe @ 0x41286d size=76

int __thiscall _lambda_26974eb511f701c600fccfa2a97a8e1b_::operator()(int this)
{
  int v2; // edi
  FILE *v3; // ebx
  int v4; // esi
  char v6; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 4);
  v3 = **(FILE ***)this;
  v6 = __acrt_stdio_begin_temporary_buffering_nolock(v3);
  v4 = _fwrite_nolock_internal(
         **(void ***)(this + 8),
         **(_DWORD **)(this + 12),
         **(_DWORD **)(this + 16),
         **(FILE ***)this,
         *(__crt_cached_ptd_host **)(this + 4));
  __acrt_stdio_end_temporary_buffering_nolock(v6, v3, v2);
  return v4;
}

