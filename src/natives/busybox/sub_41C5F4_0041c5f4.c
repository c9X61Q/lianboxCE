// busybox.exe @ 0x41c5f4 size=208

BOOL __usercall sub_41C5F4@<eax>(const char *a1@<eax>, const char *a2@<edx>)
{
  const char *v3; // ebx
  const char *v4; // esi
  size_t MaxCount; // eax
  char v6; // al
  int v7; // ecx
  size_t v10; // [esp+10h] [ebp-14h]

  v3 = *(const char **)(dword_486010 + 96);
  v4 = nullptr;
  while ( v3 != nullptr )
  {
    if ( v4 == nullptr || stricmp(v4, v3 + 8) == 0 )
    {
      MaxCount = strlen(v3 + 8);
      if ( MaxCount == 1 || (v10 = MaxCount, strnicmp(v3 + 8, a1, MaxCount) == 0) && ((v6 = a1[v10]) == 0 || v6 == 47) )
      {
        if ( strcmp(*((const char **)v3 + 1), a2) == 0 )
        {
          sub_4635B0(v7, 58);
          *(_DWORD *)(dword_486010 + 56) = sub_4718A8();
          return true;
        }
        v4 = v3 + 8;
      }
    }
    v3 = *(const char **)v3;
  }
  return v4 == nullptr;
}

