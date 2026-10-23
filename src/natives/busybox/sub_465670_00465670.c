// busybox.exe @ 0x465670 size=298

int __usercall sub_465670@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  const char *Str; // ebp
  const char *v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  int v7; // eax
  char *v8; // ebp
  char *v9; // edi
  char *v10; // ebx
  char *v11; // eax
  int v12; // eax
  int v13; // edx
  int v16; // [esp+Ch] [ebp-14h]

  Str = *(const char **)(dword_486010 + 4 * a1);
  v4 = *(const char **)(dword_486010 + 4 * a2);
  v5 = 0;
  if ( strchr(Str, 58) != nullptr )
    v5 = atoi(Str);
  if ( strchr(v4, 58) != nullptr )
  {
    v6 = atoi(v4);
    v7 = -1;
    if ( v6 > v5 )
      goto LABEL_15;
  }
  else
  {
    v6 = 0;
  }
  v7 = 1;
  if ( v5 <= v6 )
  {
    v8 = (char *)sub_47188C();
    v9 = (char *)sub_47188C();
    v10 = strrchr(v8, 45);
    v11 = strrchr(v9, 45);
    if ( v10 != nullptr )
      *v10 = 0;
    if ( v11 != nullptr )
      *v11 = 0;
    v12 = sub_46CB1C();
    if ( v12 == 0 )
      v12 = sub_46CB1C();
    v16 = v12;
    free(v8);
    free(v9);
    v7 = v16;
  }
LABEL_15:
  v13 = 0;
  switch ( a3 )
  {
    case 1:
      LOBYTE(v13) = v7 == 0;
      goto LABEL_19;
    case 2:
      goto LABEL_21;
    case 3:
      LOBYTE(v13) = v7 <= 0;
      goto LABEL_19;
    case 4:
      LOBYTE(v13) = v7 > 0;
LABEL_19:
      v13 = (unsigned __int8)v13;
      break;
    case 5:
      v7 = ~v7;
LABEL_21:
      v13 = (unsigned int)v7 >> 31;
      break;
    case 6:
      v13 = 1;
      break;
    default:
      return v13;
  }
  return v13;
}

