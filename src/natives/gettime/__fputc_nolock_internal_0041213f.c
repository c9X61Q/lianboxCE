// gettime.exe @ 0x41213f size=45

int __cdecl _fputc_nolock_internal(int a1, _DWORD *a2, int a3)
{
  if ( --a2[2] < 0 )
    return sub_41CC9B(a1, a2, a3);
  *(_BYTE *)(*a2)++ = a1;
  return (unsigned __int8)a1;
}

