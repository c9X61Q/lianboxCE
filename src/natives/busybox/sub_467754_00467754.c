// busybox.exe @ 0x467754 size=97

char *__usercall sub_467754@<eax>(char *Str@<eax>)
{
  size_t v2; // edi
  size_t Size; // esi
  char v4; // al
  char *Src; // eax
  char *result; // eax

  v2 = strlen(Str);
  for ( Size = v2; Size != 0; --Size )
  {
    v4 = Str[Size - 1];
    if ( v4 != 32 && (unsigned __int8)(v4 - 9) > 4u )
    {
      Src = sub_460FB8(Str);
      if ( Str != Src )
      {
        Size -= Src - Str;
        memmove(Str, Src, Size);
      }
      break;
    }
  }
  result = &Str[Size];
  if ( Size != v2 )
    *result = 0;
  return result;
}

