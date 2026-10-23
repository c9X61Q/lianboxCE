// gettime.exe @ 0x422f74 size=37

int __cdecl TestDefaultCountry_0(__int16 a1)
{
  int v1; // eax

  v1 = 0;
  while ( a1 != word_42E4FC[v1] )
  {
    if ( (unsigned int)++v1 >= 10 )
      return 1;
  }
  return 0;
}

