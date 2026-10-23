// busybox.exe @ 0x417a0c size=91

const char *__usercall sub_417A0C@<eax>(int Str@<eax>)
{
  const char *v1; // ebx
  char *v2; // esi
  char *v3; // eax

  v1 = (const char *)Str;
  v2 = (char *)Str;
  if ( (unsigned __int8)((*(_BYTE *)Str | 0x20) - 97) <= 0x19u && *(_BYTE *)(Str + 1) == 58 )
    v2 = (char *)(Str + 2);
  v3 = strrchr((const char *)Str, 47);
  if ( (v3 != nullptr || (v3 = strrchr(v1, 92)) != nullptr) && (v2 != v3 || v3[1] != 0) )
    return v3 + 1;
  return v1;
}

