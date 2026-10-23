// busybox.exe @ 0x432f64 size=338

const char *__fastcall sub_432F64(_DWORD *a1, char *a2)
{
  char v2; // di
  char v3; // bp
  int v4; // esi
  const char *v5; // ebx
  char v6; // al
  int i; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // edx
  char Str[1039]; // [esp+15h] [ebp-40Fh] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = (const char *)sub_460FB8();
    v6 = *v5;
    if ( *v5 == 47 )
    {
      strcpy(Str, v5 + 1);
      v9 = strchr(Str, 47);
      if ( v9 != nullptr )
        *v9 = 0;
      i = sub_45CC20(*(_DWORD *)(dword_486010 + 4), *(_DWORD *)dword_486010);
      if ( i == 0 )
        return nullptr;
      goto LABEL_23;
    }
    if ( (unsigned __int8)v6 <= 0x2Fu )
    {
      if ( v6 == 46 )
      {
        i = *(_DWORD *)dword_486010;
        goto LABEL_23;
      }
      if ( v6 == 36 )
      {
        i = *(_DWORD *)(dword_486010 + 4);
        goto LABEL_23;
      }
      if ( v6 == 39 )
        break;
    }
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      *a2 = v3;
LABEL_31:
      *a1 = v4;
      return v5;
    }
    for ( i = 0; ; i = 10 * i + v10 - 48 )
    {
      v10 = *(unsigned __int8 *)v5;
      if ( (unsigned __int8)(v10 - 48) > 9u )
        break;
      ++v5;
    }
LABEL_23:
    if ( v2 != 0 )
      i = -i;
    v4 += i;
    v5 = (const char *)sub_460FB8();
    if ( *v5 == 43 )
    {
      v2 = 0;
    }
    else
    {
      if ( *v5 != 45 )
      {
        *a2 = 1;
        goto LABEL_31;
      }
      v2 = 1;
    }
    v3 = 1;
  }
  v8 = *((unsigned __int8 *)v5 + 1);
  if ( (unsigned int)(v8 - 97) <= 0x19 )
  {
    i = *(_DWORD *)(dword_486010 + 4 * v8 - 336);
    goto LABEL_23;
  }
  sub_4181F8("bad mark name");
  return nullptr;
}

