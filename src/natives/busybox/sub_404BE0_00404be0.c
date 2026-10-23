// busybox.exe @ 0x404be0 size=49

_DWORD *__usercall sub_404BE0@<eax>(_DWORD *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _DWORD *v3; // ebx
  size_t Size; // edx

  if ( result != nullptr )
  {
    v3 = result;
    result = (_DWORD *)*result;
    if ( result != nullptr )
    {
      Size = a2 - (_DWORD)result;
      if ( Size != a3 )
      {
        result = realloc(result, Size);
        if ( result != nullptr )
          *v3 = result;
      }
    }
  }
  return result;
}

