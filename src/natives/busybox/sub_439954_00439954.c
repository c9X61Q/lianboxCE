// busybox.exe @ 0x439954 size=111

int __usercall sub_439954@<eax>(const char *a1@<eax>, const char *Str@<edx>)
{
  size_t v4; // eax
  int v5; // esi
  size_t MaxCount; // edi
  int v8; // [esp+Ch] [ebp-14h]

  v4 = strlen(Str);
  if ( v4 == 0 )
    return -1;
  MaxCount = v4;
  v8 = 0;
  v5 = -1;
  while ( *a1 != 0 )
  {
    if ( strncmp(a1, Str, MaxCount) == 0 )
    {
      if ( a1[MaxCount] == 0 )
        return v8;
      if ( v5 != -1 )
        return -1;
      v5 = v8;
    }
    a1 += strlen(a1) + 1;
    ++v8;
  }
  return v5;
}

