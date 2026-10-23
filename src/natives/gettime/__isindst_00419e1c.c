// gettime.exe @ 0x419e1c size=84

int __cdecl _isindst(struct tm *a1)
{
  int v1; // eax
  int v2; // esi

  __acrt_lock(6);
  LOBYTE(v1) = _isindst_nolock(a1);
  v2 = v1;
  __acrt_unlock(6);
  return v2;
}

