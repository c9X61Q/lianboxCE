// busybox.exe @ 0x435b3c size=73

int __cdecl sub_435B3C(char *Destination, size_t a2)
{
  const char *Str; // eax
  int v3; // esi
  const char *Source; // ebx

  Str = sub_4358EC();
  v3 = -1;
  if ( Str != nullptr )
  {
    Source = Str;
    if ( strlen(Str) < a2 )
    {
      strcpy(Destination, Source);
      return 0;
    }
    else
    {
      *_errno() = 34;
    }
  }
  return v3;
}

