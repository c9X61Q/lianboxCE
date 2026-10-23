// busybox.exe @ 0x404db0 size=139

int __usercall sub_404DB0@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v4; // eax
  int v5; // eax
  int result; // eax
  FILE *v7; // edx
  char *v8; // edx

  v4 = *(_DWORD *)(a1 + 4104);
  if ( v4 != 0 )
  {
    v5 = v4 - 1;
    *(_DWORD *)(a1 + 4104) = v5;
    result = *(_DWORD *)(a1 + 4 * v5 + 4);
    ++*a2;
    return result;
  }
  if ( (*(_BYTE *)(a1 + 4108) & 1) != 0 )
    return -1;
  v7 = *(FILE **)a1;
  if ( (*(_BYTE *)(a1 + 4100) & 1) != 0 )
  {
    result = LOBYTE(v7->_ptr);
    v8 = (char *)&v7->_ptr + 1;
    if ( result != 0 )
    {
      ++*a2;
      *(_DWORD *)a1 = v8;
      return result;
    }
  }
  else
  {
    result = getc(*(FILE **)a1);
    if ( result != -1 )
    {
      ++*a2;
      return result;
    }
  }
  *(_BYTE *)(a1 + 4108) |= 1u;
  return -1;
}

