// busybox.exe @ 0x430504 size=142

char *__usercall sub_430504@<eax>(const char *a1@<eax>, char **a2@<edx>)
{
  char *Str; // ebx
  char *v5; // eax
  int v6; // ecx
  char *v7; // esi
  char *v8; // eax
  char *Block; // [esp+8h] [ebp-14h]

  for ( Str = *a2; Str != nullptr; Str = v7 )
  {
    v5 = strchr(Str, 59);
    v7 = v5;
    if ( v5 != nullptr )
      *v5 = 0;
    if ( *Str == 0 )
      Str = ".";
    v8 = (char *)sub_41E9A4(Str, a1, v6);
    if ( v7 != nullptr )
      *v7++ = 59;
    Block = v8;
    Str = (char *)sub_41422C(v8);
    sub_413848(Str);
    free(Block);
    if ( sub_42F668(Str) )
    {
      *a2 = v7;
      return Str;
    }
    free(Str);
  }
  return Str;
}

