// busybox.exe @ 0x446a68 size=55

int __usercall sub_446A68@<eax>(const char *Str2@<eax>)
{
  int v2; // edx
  int result; // eax

  if ( *(_DWORD *)MultiByteStr == 0 )
    return 0;
  v2 = strcmp(*(const char **)MultiByteStr, Str2);
  result = 0;
  if ( v2 == 0 )
    return *((unsigned __int8 *)Str2 + 1) + *(unsigned __int8 *)Str2;
  return result;
}

