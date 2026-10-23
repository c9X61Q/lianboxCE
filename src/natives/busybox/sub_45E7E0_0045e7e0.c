// busybox.exe @ 0x45e7e0 size=111

int __usercall sub_45E7E0@<eax>(int a1@<eax>, const char *Str@<edx>, int a3@<ecx>, char *a4, int a5)
{
  const char *v7; // ebx
  size_t v8; // eax
  int result; // eax
  int v10; // ecx

  v7 = (const char *)(a1 + a3);
  v8 = strlen(Str);
  result = strnicmp(v7, Str, v8 - 1);
  if ( result == 0 || (result = strnicmp(v7, a4, 2u)) == 0 )
  {
    LOBYTE(result) = *(_BYTE *)(dword_486010 + 16);
    if ( a3 != 0 )
    {
      LOBYTE(v10) = a5;
      result &= ~v10;
    }
    else
    {
      result |= a5;
    }
    *(_BYTE *)(dword_486010 + 16) = result;
  }
  return result;
}

