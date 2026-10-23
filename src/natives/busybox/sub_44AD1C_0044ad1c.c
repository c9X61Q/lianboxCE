// busybox.exe @ 0x44ad1c size=137

BOOL __usercall sub_44AD1C@<eax>(const char *a1@<eax>, _DWORD *a2@<edx>)
{
  const char *Str; // ebx
  BOOL result; // eax
  char *v5; // eax
  char *v6; // esi
  int v7; // edx

  Str = a1;
  if ( *a1 == 43 )
    Str = a1 + 1;
  result = false;
  if ( (unsigned __int8)(*Str - 48) <= 9u )
  {
    v5 = strchr(Str, 46);
    v6 = v5;
    if ( v5 != nullptr )
      *v5 = 0;
    *a2 = sub_471C74("B");
    a2[1] = v7;
    if ( v6 != nullptr )
      *v6 = 46;
    return a2[1] >= 0;
  }
  return result;
}

