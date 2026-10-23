// gettime.exe @ 0x42334f size=49

char __cdecl __acrt_execute_uninitializers(int a1, int a2)
{
  int i; // esi
  void (__cdecl *v3)(_DWORD); // edi

  for ( i = a2; i != a1; i -= 8 )
  {
    v3 = *(void (__cdecl **)(_DWORD))(i - 4);
    if ( v3 != nullptr )
      v3(0);
  }
  return 1;
}

