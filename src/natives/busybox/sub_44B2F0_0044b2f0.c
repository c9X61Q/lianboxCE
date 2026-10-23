// busybox.exe @ 0x44b2f0 size=236

int __usercall sub_44B2F0@<eax>(int Str@<eax>)
{
  char *v2; // eax
  char *v3; // eax
  int v5; // esi
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax

  if ( *(_BYTE *)(Str + 2) == 55 )
  {
    v2 = strrchr((const char *)Str, 41);
    if ( v2 != nullptr
      || (v2 = strrchr((const char *)Str, 13)) != nullptr
      || (v2 = strrchr((const char *)Str, 10)) != nullptr )
    {
      *v2 = 0;
    }
    v3 = strrchr((const char *)Str, 44);
    if ( v3 != nullptr )
    {
      *v3 = 0;
      v5 = sub_470928(255, 0);
      v6 = strrchr((const char *)Str, 44);
      if ( v6 != nullptr )
      {
        *v6 = 0;
        return v5 + (sub_470928(255, 0) << 8);
      }
    }
    return -1;
  }
  v7 = strrchr((const char *)Str, 124);
  if ( v7 == nullptr )
    return -1;
  *v7 = 0;
  v8 = strrchr((const char *)Str, 124);
  if ( v8 == nullptr )
    return -1;
  *v8 = 0;
  return sub_470928(0xFFFF, 0);
}

