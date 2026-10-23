// busybox.exe @ 0x427774 size=406

int __usercall sub_427774@<eax>(char *a1@<ebx>, char *a2@<edi>, int a3, int a4)
{
  int v4; // eax
  FILE *(__cdecl *v5)(int); // esi
  FILE *v6; // esi
  int v7; // eax
  int v8; // edx
  int v10; // [esp+10h] [ebp-7Ch]
  FILE *Stream; // [esp+14h] [ebp-78h]
  const char **v12; // [esp+18h] [ebp-74h]
  const char *v13; // [esp+1Ch] [ebp-70h]
  _BYTE v14[108]; // [esp+20h] [ebp-6Ch] BYREF

  v10 = (*dword_485AD0 == 100) + 1;
  v4 = sub_435D44(a4, "^du");
  if ( v4 != 0 )
    v10 = v4;
  v12 = (const char **)(a4 + 4 * dword_473090);
  do
  {
    v13 = *v12;
    v5 = off_4730E8;
    Stream = off_4730E8(0);
    v6 = v5(1);
    if ( v13 != nullptr )
    {
      a1 = (char *)sub_470FE8();
      if ( a1 == nullptr )
        sub_41823C(v13);
      Stream = (FILE *)sub_470CF8();
      fileno(Stream);
      sub_470D20(a1, v14);
      a2 = (char *)sub_4708BC("%sXXXXXX", a1);
      sub_471508();
      *_errno() = 40;
      v6 = (FILE *)sub_470C94();
    }
    while ( 1 )
    {
      v7 = fgetc(Stream);
      v8 = v7;
      if ( v7 == -1 )
        break;
      if ( v7 != 13 )
      {
        if ( v10 == 1 && v7 == 10 )
        {
          fputc(13, v6);
          v8 = 10;
        }
        fputc(v8, v6);
      }
    }
    if ( v13 != nullptr )
    {
      if ( fclose(Stream) < 0 || fclose(v6) < 0 )
      {
        sub_444ECC(a2);
        sub_418048();
      }
      sub_4716FC();
      free(a2);
      free(a1);
    }
    if ( *v12 == nullptr )
      break;
    ++v12;
  }
  while ( *v12 != nullptr );
  return 0;
}

