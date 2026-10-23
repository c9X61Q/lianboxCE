// busybox.exe @ 0x45690c size=245

int __usercall sub_45690C@<eax>(FILE *a1@<eax>, FILE *a2@<edx>, signed __int32 a3@<ecx>)
{
  int Size; // ebx
  int result; // eax
  int v5; // ebp
  const char *v6; // edi
  signed __int32 v7; // [esp+10h] [ebp-98h] BYREF
  FILE *Stream; // [esp+14h] [ebp-94h]
  FILE *v9; // [esp+18h] [ebp-90h]
  int v10; // [esp+1Ch] [ebp-8Ch]
  char *v11; // [esp+20h] [ebp-88h] BYREF
  char Buffer[50]; // [esp+24h] [ebp-84h] BYREF
  char Str1[82]; // [esp+56h] [ebp-52h] BYREF

  Stream = a1;
  v9 = a2;
  v7 = a3;
  Size = 0;
  v10 = (char)a3;
  while ( 1 )
  {
    while ( Size <= 63 )
    {
      result = fgetc(Stream);
      if ( v10 == result )
      {
        if ( Size == 0 )
          return result;
LABEL_10:
        v5 = 1;
        goto LABEL_11;
      }
      if ( result == -1 )
        goto LABEL_10;
      if ( result <= 32 )
        break;
      Str1[Size++] = result;
    }
    v5 = 0;
LABEL_11:
    Str1[Size] = 0;
    if ( _bittest(&v7, 8u) )
    {
      result = strcmp(Str1, "====");
      if ( result == 0 )
        return result;
    }
    v11 = Buffer;
    v6 = sub_4227A8(&v11, Str1);
    result = sub_46EF84(Buffer, v11 - Buffer, 1u, v9);
    if ( v5 != 0 )
      break;
    Size = strlen(v6);
    memmove(Str1, v6, Size);
  }
  if ( *v6 != 0 )
    sub_418210("truncated base64 input");
  return result;
}

