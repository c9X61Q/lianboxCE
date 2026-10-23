// busybox.exe @ 0x452f5c size=86

int __usercall sub_452F5C@<eax>(const char *Str@<eax>)
{
  const char *v1; // ebx
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  char v6; // [esp+Bh] [ebp-Dh]

  v1 = Str;
  strlen(Str);
  v3 = sub_4728CC(v2);
  v4 = 0;
  while ( *v1 != 0 )
  {
    v6 = *v1;
    if ( strchr(" `\"#$%^&*()=+{}[]:;'|\\<>", *(unsigned __int8 *)v1) != nullptr )
      *(_BYTE *)(v3 + v4++) = 92;
    ++v1;
    *(_BYTE *)(v3 + v4++) = v6;
  }
  return v3;
}

