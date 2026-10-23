// busybox.exe @ 0x40b130 size=82

int __usercall sub_40B130@<eax>(int result@<eax>, int a2@<edx>)
{
  int v3; // ecx
  int v4; // edx

  v3 = *(_DWORD *)(a2 + 4);
  if ( (v3 & 0x4000) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 36) <= v4 )
      goto LABEL_5;
  }
  if ( (v3 & 0x2000) == 0 )
  {
    *(_BYTE *)(*(_DWORD *)a2 + *(_DWORD *)(a2 + 32)) = result;
    v4 = *(_DWORD *)(a2 + 32);
LABEL_5:
    *(_DWORD *)(a2 + 32) = v4 + 1;
    return result;
  }
  result = fputc((unsigned __int8)result, *(FILE **)a2);
  ++*(_DWORD *)(a2 + 32);
  return result;
}

