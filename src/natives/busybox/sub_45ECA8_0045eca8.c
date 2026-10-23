// busybox.exe @ 0x45eca8 size=542

_DWORD *__usercall sub_45ECA8@<eax>(char *a1@<eax>, unsigned int a2@<edx>)
{
  const char *Str; // ebp
  size_t MaxCount; // ebx
  int v5; // esi
  unsigned __int8 *v6; // ebp
  unsigned __int8 *v7; // ebx
  unsigned __int8 v8; // al
  _DWORD *v9; // eax
  int v10; // ebx
  unsigned int v11; // edi
  int v12; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // ebp
  const char *v15; // ebx
  int v16; // eax
  int v17; // ecx
  void (*v18)(void); // edi
  char *v19; // eax
  char v20; // dl

  Str = "PATH=";
  while ( 1 )
  {
    MaxCount = strlen(Str);
    v5 = strncmp(a1, Str, MaxCount);
    if ( v5 == 0 )
      break;
    Str += MaxCount + 1;
    if ( *Str == 0 )
      goto LABEL_23;
  }
  v6 = (unsigned __int8 *)sub_47188C();
  v7 = &v6[MaxCount];
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == 0 )
      break;
    if ( (unsigned __int8)(v8 - 58) > 1u )
    {
      if ( (unsigned __int8)((v8 | 0x20) - 97) <= 0x19u && v7[1] == 58 )
        v7 += 2;
      while ( (unsigned __int8)(*v7 - 58) > 1u && *v7 != 0 )
        ++v7;
    }
    if ( *v7 == 58 )
    {
      *v7++ = 59;
      v5 = 1;
    }
    else if ( *v7 == 59 )
    {
      ++v7;
    }
  }
  if ( v5 == 0 )
  {
    sub_4631A8();
LABEL_23:
    v9 = (_DWORD *)sub_4382E4((unsigned __int8 *)a1);
    goto LABEL_24;
  }
  if ( v6 == nullptr )
    goto LABEL_23;
  if ( (a2 & 0x118) == 0x100 )
    sub_4631A8();
  a2 = a2 & 0xFFFFFEE7 | 0x100;
  a1 = (char *)v6;
  v9 = (_DWORD *)sub_4382E4(v6);
LABEL_24:
  v10 = a2 | *(_BYTE *)(dword_485FF0 + 74) & 1;
  v11 = v10;
  v13 = sub_430DE0(v9);
  v14 = (_DWORD *)*v13;
  if ( *v13 == 0 )
  {
    if ( (v10 & 0x80u) != 0 )
      return v14;
    if ( (v10 & 0x27) == 0x20 )
      goto LABEL_40;
    v14 = (_DWORD *)sub_4728CC(v12);
    *v14 = *v13;
    *v13 = v14;
LABEL_47:
    if ( (v11 & 0x118) == 0 )
      a1 = (char *)sub_47188C();
    v14[2] = a1;
    v14[1] = v11;
    return v14;
  }
  if ( (v14[1] & 0x202) == 2 )
  {
    if ( (v10 & 0x100) != 0 )
      sub_4631A8();
    v15 = (const char *)v14[2];
    *(_BYTE *)dword_485FF0 = 1;
    v16 = sub_4635B0(v12, 61);
    sub_415B40(v17, "%.*s: is read only", v16 - (_DWORD)v15, v15);
  }
  if ( (v10 & 0x80u) == 0 )
  {
    v18 = (void (*)(void))v14[3];
    if ( v18 != nullptr && (v10 & 0x40) == 0 )
    {
      v19 = a1;
      do
      {
        v20 = *v19;
        if ( *v19 == 0 )
          break;
        ++v19;
      }
      while ( v20 != 61 );
      v18();
    }
    if ( (v14[1] & 0x18) == 0 )
      sub_4631A8();
    if ( (v14[1] & 4 | v10 & 0x27) == 0x20 )
    {
      *v13 = *v14;
      sub_4631A8();
LABEL_40:
      if ( (v10 & 0x118) == 0x100 )
        sub_4631A8();
      return v14;
    }
    v11 = v10 | v14[1] & 0xFFFFFEC7;
    if ( (v10 & 0x20) != 0 )
      v11 = v10 & 0xFFFFFDFF | v14[1] & 0xFFFFFCC7;
    goto LABEL_47;
  }
  return v14;
}

