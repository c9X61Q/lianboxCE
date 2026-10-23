// busybox.exe @ 0x421818 size=139

size_t __usercall sub_421818@<eax>(int a1@<eax>)
{
  size_t *v2; // esi
  size_t result; // eax
  const char *Str; // ebx

  v2 = *(size_t **)(a1 + 24);
  for ( result = *v2; *(_BYTE *)result == 47; ++result )
    ;
  while ( *(_BYTE *)result == 46 )
  {
    if ( *(_BYTE *)(result + 1) == 46 )
      ++result;
    if ( *(_BYTE *)(result + 1) != 47 )
      break;
    result += 2;
  }
  if ( *(_BYTE *)result != 0 )
  {
    *v2 = sub_4708BC("%s%s", *(const char **)(a1 + 96), (const char *)result);
    sub_42149C(a1);
    result = sub_4312E8("*.dpkg-new", **(_DWORD **)(a1 + 24), 0);
    if ( result == 0 )
    {
      Str = **(const char ***)(a1 + 24);
      result = strlen(Str);
      Str[result - 9] = 0;
    }
  }
  return result;
}

