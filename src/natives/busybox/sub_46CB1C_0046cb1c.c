// busybox.exe @ 0x46cb1c size=186

int __usercall sub_46CB1C@<eax>(unsigned __int8 *a1@<eax>, unsigned __int8 *a2@<edx>)
{
  unsigned __int8 *v2; // edi
  unsigned __int8 *v3; // esi
  int v4; // ebx
  int v5; // eax
  unsigned __int8 v6; // al
  int result; // eax
  unsigned __int8 v8; // cl

  v2 = a2;
  v3 = (unsigned __int8 *)&unk_477DC8;
  if ( a1 != nullptr )
    v3 = a1;
  if ( a2 == nullptr )
    v2 = (unsigned __int8 *)&unk_477DC8;
  while ( 1 )
  {
    if ( (*v3 | *v2) == 0 )
      return 0;
    while ( 1 )
    {
      v6 = *v3;
      if ( (*v3 == 0 || (unsigned __int8)(v6 - 48) <= 9u) && (*v2 == 0 || (unsigned __int8)(*v2 - 48) <= 9u) )
        break;
      v4 = sub_4480BC(v6);
      v5 = sub_4480BC(*v2);
      if ( v4 != v5 )
        return v4 - v5;
      ++v3;
      ++v2;
    }
    while ( *v3 == 48 )
      ++v3;
    while ( *v2 == 48 )
      ++v2;
    result = 0;
    while ( 1 )
    {
      v8 = *v2 - 48;
      if ( (unsigned __int8)(*v3 - 48) > 9u )
        break;
      if ( v8 > 9u )
        return 1;
      if ( result == 0 )
        result = *v3 - *v2;
      ++v3;
      ++v2;
    }
    if ( v8 <= 9u )
      break;
    if ( result != 0 )
      return result;
  }
  return -1;
}

