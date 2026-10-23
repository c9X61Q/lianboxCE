// busybox.exe @ 0x41addc size=352

int sub_41ADDC()
{
  char v0; // di
  const char *v1; // ebx
  char v2; // al
  char v3; // al
  int v4; // esi
  int *v5; // eax
  char *v6; // eax
  int v7; // ecx
  char v9; // [esp+Fh] [ebp-71h]
  char *v10; // [esp+10h] [ebp-70h]
  _BYTE v11[16]; // [esp+14h] [ebp-6Ch] BYREF
  int v12; // [esp+24h] [ebp-5Ch]

  v0 = sub_41AF3C();
  v1 = *(const char **)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    if ( *v1 != 45 || v1[1] != 0 )
      goto LABEL_8;
    v1 = (const char *)sub_43E9A4();
    v0 |= 2u;
  }
  else
  {
    v1 = (const char *)sub_43E9A4();
  }
  if ( v1 == nullptr )
    v1 = (const char *)(dword_485FF0 + 62);
LABEL_8:
  v2 = *v1;
  if ( *v1 != 92 && v2 != 47 && ((unsigned __int8)((*v1 | 0x20) - 97) > 0x19u || v1[1] != 58) )
  {
    if ( v2 == 46 )
    {
      v3 = v1[1];
      while ( v3 != 47 )
      {
        if ( (unsigned __int8)v3 > 0x2Fu )
          goto LABEL_22;
        if ( v3 == 0 )
          break;
        if ( v3 == 46 )
        {
          v3 = v1[2];
          if ( v3 != 46 )
            continue;
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( v2 == 0 )
        v1 = ".";
LABEL_22:
      v10 = (char *)sub_43E9A4();
      while ( sub_448618() >= 0 )
      {
        v9 = *v10;
        v4 = sub_462C74();
        if ( (int)sub_444C28(v4, v11) >= 0 && (v12 & 0xF000) == 0x4000 )
        {
          if ( v9 != 59 && v9 != 0 )
            v0 |= 2u;
          break;
        }
      }
    }
  }
  if ( sub_4275E0() != 0 )
  {
    v5 = _errno();
    v6 = strerror(*v5);
    sub_415B40(v7, "can't cd to %s: %s", v1, v6);
  }
  if ( (v0 & 2) != 0 )
    sub_4480E8("%s\n", *(const char **)(dword_485FF0 + 36));
  return 0;
}

