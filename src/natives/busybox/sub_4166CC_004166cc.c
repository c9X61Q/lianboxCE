// busybox.exe @ 0x4166cc size=552

int __usercall sub_4166CC@<eax>(const char *Str@<eax>, int *a2@<edx>, char **a3@<ecx>)
{
  char *Source; // ebx
  int v5; // esi
  int i; // ebp
  int v7; // edi
  signed int v8; // esi
  int v9; // eax
  signed int v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *v13; // eax
  char v14; // al
  char *v15; // eax
  char *v16; // edx
  char *v19; // [esp+1Ch] [ebp-28h]
  char v20; // [esp+20h] [ebp-24h] BYREF
  char v21; // [esp+21h] [ebp-23h]
  char Control[2]; // [esp+22h] [ebp-22h] BYREF
  int v23; // [esp+24h] [ebp-20h] BYREF
  int v24; // [esp+28h] [ebp-1Ch]

  Source = (char *)Str;
  strlen(Str);
  v19 = (char *)sub_4728CC();
  *a3 = v19;
  strcpy(v19, Source);
  v5 = *a2;
  v21 = *a2;
  v20 = v5;
  *(_WORD *)Control = 0;
  if ( *(_BYTE *)sub_436704() == 0 )
    Control[0] = 10;
  if ( (*a2 & 0xFF00) == 0x2100 )
  {
    i = 0;
    if ( *Source != 0 )
    {
      i = 1;
      do
      {
        if ( *(_BYTE *)(dword_486010 - 12) != 0 )
          v7 = a2[3];
        else
          v7 = a2[2];
        v8 = strcspn(Source, Control);
        v9 = sub_459FE8(v7, Source, 1, (int)&v23, 0);
        v10 = v8;
        if ( v9 != 0 || (v11 = v23, v23 > v8) )
        {
          v24 = v8;
          if ( Source[v8] != 0 )
            v24 = v8 + 1;
        }
        else
        {
          if ( v24 == 0 )
          {
            v11 = v23 + 1;
            v24 = 1;
          }
          ++i;
          v10 = v11;
        }
        qmemcpy(v19, Source, v10);
        do
          v19[v10++] = 0;
        while ( v24 > v10 );
        sub_446BC0();
        Source += v24;
      }
      while ( *Source != 0 );
    }
  }
  else if ( (_BYTE)v5 != 0 )
  {
    if ( (_BYTE)v5 == 32 )
    {
      for ( i = 0; *Source != 0; ++i )
      {
        Source = (char *)sub_460FB8();
        if ( *Source == 0 )
          break;
        while ( 1 )
        {
          v16 = v19;
          if ( (*Source & 0xDF) == 0 || (unsigned __int8)(*Source - 9) <= 4u )
            break;
          ++Source;
          ++v19;
          *v16 = *(Source - 1);
        }
        ++v19;
        *v16 = 0;
      }
    }
    else
    {
      if ( *(_BYTE *)(dword_486010 - 12) != 0 )
      {
        v14 = v5;
        if ( (unsigned __int8)(v5 - 97) <= 0x19u )
          v14 = v5 - 32;
        v20 = v14;
        if ( (unsigned __int8)(v5 - 65) <= 0x19u )
          LOBYTE(v5) = v5 + 32;
        v21 = v5;
      }
      for ( i = *v19 != 0; ; ++i )
      {
        v15 = strpbrk(v19, &v20);
        if ( v15 == nullptr )
          break;
        v19 = v15 + 1;
        *v15 = 0;
      }
    }
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v12 = Source[i];
      if ( v12 == 0 )
        break;
      *v19 = v12;
      v13 = v19 + 1;
      v19 += 2;
      *v13 = 0;
    }
  }
  return i;
}

