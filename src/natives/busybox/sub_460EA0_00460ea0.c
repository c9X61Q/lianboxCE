// busybox.exe @ 0x460ea0 size=42

char *__usercall sub_460EA0@<eax>(char *result@<eax>)
{
  int v1; // ecx
  char v2; // dl

  v1 = dword_486010;
  while ( 1 )
  {
    v2 = *result;
    if ( *result != 92 )
      break;
    if ( result[1] != 10 )
      return result;
    ++result;
    ++*(_DWORD *)(v1 + 12);
LABEL_7:
    ++result;
  }
  if ( v2 == 32 || (v2 & 0xFB) == 9 )
    goto LABEL_7;
  return result;
}

