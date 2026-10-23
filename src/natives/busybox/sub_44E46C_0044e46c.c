// busybox.exe @ 0x44e46c size=191

int __cdecl sub_44E46C(FILE *Stream, FILE *a2, char a3)
{
  int v3; // ebx
  int v4; // edx
  char *Str; // ebx
  int *v6; // ebp
  int result; // eax
  int v8; // eax
  int v9; // [esp+8h] [ebp-14h]

  v3 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v4 = 1;
    Str = "Reparse";
    v6 = dword_47FA80;
    do
    {
      if ( ((unsigned int)a2 & *v6) != 0 )
      {
        if ( v4 == 0 )
          sub_46EF20(", ", Stream);
        sub_46EF20(Str, Stream);
        v4 = 0;
      }
      v9 = v4;
      ++v6;
      result = strlen(Str);
      Str += result + 1;
      v4 = v9;
    }
    while ( *Str != 0 );
    if ( v9 != 0 )
      return sub_46EF20("---", Stream);
  }
  else
  {
    do
    {
      v8 = 45;
      if ( ((unsigned int)a2 & dword_47FA80[v3]) != 0 )
        v8 = (unsigned __int8)byte_47FA64[v3];
      result = fputc(v8, Stream);
      ++v3;
    }
    while ( byte_47FA64[v3] != 0 );
  }
  return result;
}

