// busybox.exe @ 0x44dbd4 size=70

int __usercall sub_44DBD4@<eax>(_DWORD *a1@<eax>, int (__cdecl *a2)(int, _DWORD *)@<edx>, int a3@<ecx>)
{
  int result; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edx

  while ( 1 )
  {
    result = a2(a3, a1);
    if ( result != 0 )
      break;
    v7 = (_DWORD *)a1[1];
    v8 = nullptr;
    if ( v7 == nullptr )
    {
      while ( 1 )
      {
        v7 = (_DWORD *)a1[2];
        if ( v7 != nullptr && v7 != v8 )
          break;
        v8 = a1;
        if ( *a1 == 0 )
          return result;
        a1 = (_DWORD *)*a1;
      }
    }
    a1 = v7;
  }
  return result;
}

