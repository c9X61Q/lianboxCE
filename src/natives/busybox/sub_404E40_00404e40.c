// busybox.exe @ 0x404e40 size=93

int __usercall sub_404E40@<eax>(int result@<eax>, int a2@<edx>, _DWORD *a3@<ecx>, char a4)
{
  int v4; // ecx

  if ( (a4 & 1) != 0 || result != -1 )
  {
    if ( (*(_BYTE *)(a2 + 4100) & 1) != 0 )
    {
      --*a3;
      v4 = *(_DWORD *)(a2 + 4104);
      *(_DWORD *)(a2 + 4 * v4 + 4) = result;
      *(_DWORD *)(a2 + 4104) = v4 + 1;
    }
    else
    {
      result = ungetc(result, *(FILE **)a2);
      --*a3;
    }
  }
  return result;
}

