// busybox.exe @ 0x448618 size=302

int __usercall sub_448618@<eax>(char **a1@<eax>, const char *a2@<edx>)
{
  char *Str; // ebp
  int result; // eax
  int v4; // ebx
  const char *Control; // edi
  char *v6; // esi
  char *v7; // eax
  int v8; // ecx
  char *v9; // esi
  _BYTE *v10; // eax
  _BYTE *v11; // ecx
  char *v12; // eax
  size_t v13; // ebx
  const char *v14; // eax
  const char *v15; // esi
  size_t v16; // ecx
  unsigned int v17; // ebx
  char *v18; // eax
  char *v19; // edi
  char v20; // dl
  size_t v21; // [esp+8h] [ebp-24h]
  int v22; // [esp+Ch] [ebp-20h]
  unsigned int v23; // [esp+Ch] [ebp-20h]

  Str = *a1;
  result = -1;
  if ( Str != nullptr )
  {
    v4 = 0;
    Control = "%;";
    if ( *Str == 37 )
    {
      v6 = Str + 1;
      v7 = sub_43D434((int)(Str + 1));
      v4 = (int)v7;
      if ( v7 != nullptr )
      {
        Str = v7;
        v4 = (int)v6;
        Control = ";";
      }
    }
    v21 = strcspn(Str, Control);
    v9 = &Str[v21];
    if ( Str[v21] == 37 )
    {
      v22 = sub_4635B0(v8, 59) - (_DWORD)v9;
      v10 = sub_43D434((int)(v9 + 1));
      v11 = v9 + 1;
      if ( v10 == nullptr )
      {
        v21 += v22;
        v11 = (_BYTE *)v4;
      }
      v9 += v22;
      v4 = (int)v11;
    }
    dword_4734F0 = v4;
    v12 = nullptr;
    if ( *v9 == 59 )
      v12 = v9 + 1;
    *a1 = v12;
    v13 = strlen(a2);
    v14 = (const char *)sub_4460B4(Str);
    v15 = v14;
    v16 = 0;
    if ( v14 != nullptr )
      v16 = strlen(v14);
    v17 = v16 + v21 + v13 + 6;
    v23 = v16;
    v18 = (char *)sub_4371F8(v17);
    if ( v21 != 0 )
    {
      qmemcpy(v18, v15, v23);
      qmemcpy(&v18[v23], Str, v21);
      v19 = &v18[v23 + v21];
      v18 = v19;
      v20 = *(v19 - 1);
      if ( v20 != 47 && v20 != 92 )
      {
        *v19 = 47;
        v18 = v19 + 1;
      }
    }
    strcpy(v18, a2);
    return v17;
  }
  return result;
}

