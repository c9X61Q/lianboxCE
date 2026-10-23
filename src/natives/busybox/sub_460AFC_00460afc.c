// busybox.exe @ 0x460afc size=59

int __usercall sub_460AFC@<eax>(int a1@<eax>)
{
  int v1; // ebx
  const char *Str1; // eax
  int result; // eax

  v1 = a1;
  Str1 = *(const char **)(a1 + 4);
  if ( Str1 != nullptr && strcmp(Str1, "--") == 0 )
    v1 += 4;
  result = *(_DWORD *)(v1 + 4);
  if ( result == 0 || *(_DWORD *)(v1 + 8) != 0 )
    sub_418164();
  return result;
}

