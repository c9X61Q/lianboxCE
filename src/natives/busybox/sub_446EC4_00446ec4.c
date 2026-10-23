// busybox.exe @ 0x446ec4 size=221

int __usercall sub_446EC4@<eax>(const char *a1@<eax>)
{
  const char *v1; // edi
  char *Destination; // ebx
  char v3; // dl
  char *v4; // ebp
  int v5; // ecx
  char v6; // al
  char v7; // al
  char v9; // [esp+Bh] [ebp-91h]
  char v10[144]; // [esp+Ch] [ebp-90h] BYREF

  v10[0] = 0;
  v1 = "(NULL)";
  if ( *a1 != 0 )
    v1 = a1;
  Destination = v10;
  while ( 1 )
  {
    v3 = *v1;
    if ( *v1 == 0 )
      return sub_463088("'%s' is not implemented", v10);
    if ( v3 == -101 )
    {
      strcpy(Destination, "\x1B[m");
      v4 = Destination + 3;
      v5 = 1;
      v6 = 46;
      v3 = -101;
      goto LABEL_14;
    }
    if ( (unsigned __int8)v3 <= 0x1Fu )
    {
      v7 = *v1;
    }
    else
    {
      v7 = 127;
      if ( v3 != 127 )
      {
        v6 = *v1;
        v4 = Destination;
        v5 = 0;
        goto LABEL_14;
      }
    }
    v4 = Destination + 1;
    *Destination = 94;
    v6 = v7 | 0x40;
    v5 = 0;
    if ( v6 == 127 )
      v6 = 63;
LABEL_14:
    Destination = v4 + 1;
    *v4 = v6;
    v4[1] = 0;
    if ( v5 != 0 )
    {
      v9 = v3;
      strcpy(v4 + 1, "\x1B[7m");
      Destination = v4 + 5;
      v3 = v9;
    }
    if ( v3 == 10 )
      *(_WORD *)Destination++ = 36;
    if ( Destination - v10 > 118 )
      return sub_463088("'%s' is not implemented", v10);
    ++v1;
  }
}

