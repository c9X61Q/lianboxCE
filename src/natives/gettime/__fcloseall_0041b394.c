// gettime.exe @ 0x41b394 size=171

int __cdecl _fcloseall()
{
  int i; // esi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  __acrt_lock(8);
  for ( i = 3; i != Count; ++i )
  {
    v1 = *((_DWORD *)dword_4388B8 + i);
    if ( v1 != 0 )
    {
      if ( (*(_DWORD *)(v1 + 12) & 0x2000) != 0 && fclose(*((FILE **)dword_4388B8 + i)) != -1 )
        ++v3;
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)dword_4388B8 + i) + 32));
      _free_base(*((void **)dword_4388B8 + i));
      *((_DWORD *)dword_4388B8 + i) = 0;
    }
  }
  __acrt_unlock(8);
  return v3;
}

