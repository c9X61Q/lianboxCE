// busybox.exe @ 0x430e8c size=136

char __cdecl sub_430E8C(char *Destination)
{
  int v1; // eax
  char *v2; // ebx
  char Source[268]; // [esp+8h] [ebp-10Ch] BYREF

  if ( sub_459000(Destination, Source) != 0 && stricmp(Destination, Source) == 0 )
    strcpy(Destination, Source);
  v1 = sub_45B414(Destination);
  if ( v1 == 2 )
  {
    LOBYTE(v1) = *Destination;
    if ( (unsigned __int8)(*Destination - 97) <= 0x19u )
      LOBYTE(v1) = v1 - 32;
    *Destination = v1;
  }
  else
  {
    v2 = Destination + 2;
    if ( v1 != 0 )
    {
      while ( 1 )
      {
        LOBYTE(v1) = *v2;
        if ( *v2 == 92 || (_BYTE)v1 == 47 )
          break;
        if ( (unsigned __int8)(v1 - 97) <= 0x19u )
          LOBYTE(v1) = v1 - 32;
        *v2++ = v1;
      }
    }
  }
  return v1;
}

