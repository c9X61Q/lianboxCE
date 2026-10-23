// busybox.exe @ 0x45abd4 size=349

void __cdecl __noreturn sub_45ABD4(int a1, int a2)
{
  char **v2; // esi
  char *Buffer; // ebp
  unsigned int v4; // ebx
  FILE *Stream; // edi
  int v6; // ecx
  size_t v7; // eax
  FILE *v8; // eax
  signed int v9; // edx
  signed int i; // eax
  unsigned int v11; // [esp+Ch] [ebp-20h]
  char v12; // [esp+10h] [ebp-1Ch]
  unsigned int v13; // [esp+14h] [ebp-18h]
  char v14; // [esp+14h] [ebp-18h]

  sub_435D44(a2, (int)&unk_4770EC);
  v2 = (char **)(a2 + 4 * dword_473090);
  if ( *v2 == nullptr )
    v2 = &off_47DE4C;
  Buffer = (char *)sub_470E78();
  v4 = 256;
  v12 = 0;
  while ( 1 )
  {
    Stream = sub_431518(*v2);
    if ( Stream != nullptr )
    {
      v11 = 0;
      while ( 1 )
      {
        v13 = v4 - 1;
        Buffer[v4 - 1] = 1;
        if ( fgets(&Buffer[v11], v4 - v11, Stream) == nullptr )
          break;
        if ( Buffer[v4 - 1] != 0 || Buffer[v4 - 2] == 10 || feof(Stream) != 0 )
        {
          v7 = strlen(Buffer);
          if ( v7 != 0 )
          {
            v9 = v7 - 1;
            if ( v7 != 1 )
            {
              if ( Buffer[v7 - 1] != 10 || (v9 = v7 - 2, v7 != 2) )
              {
                if ( Buffer[v9] == 13 )
                  --v9;
                for ( i = 0; i < v9; ++i )
                {
                  v14 = Buffer[i];
                  Buffer[i] = Buffer[v9];
                  Buffer[v9--] = v14;
                }
              }
            }
          }
          v8 = off_4730E8(1);
          sub_46EF20(Buffer, v8);
        }
        else
        {
          v4 += (v4 >> 3) + 64;
          Buffer = (char *)sub_471600(v6, v4);
          v11 = v13;
        }
      }
      fclose(Stream);
    }
    else
    {
      v12 = 1;
    }
    if ( *++v2 == nullptr )
      sub_42F138(v12);
  }
}

