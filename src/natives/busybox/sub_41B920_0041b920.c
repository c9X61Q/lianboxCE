// busybox.exe @ 0x41b920 size=224

int __cdecl sub_41B920(int a1, int a2)
{
  char *v3; // esi
  char v4; // dl
  _DWORD *v5; // edi
  int Val; // eax
  char *v7; // eax
  const char *v8; // eax
  char v10; // [esp+Bh] [ebp-1h]
  _DWORD v11[7]; // [esp+Ch] [ebp+0h] BYREF

  memset(v11, 0, 0x10u);
  while ( 1 )
  {
    v3 = *(char **)(a2 + 4);
    if ( v3 == nullptr )
LABEL_3:
      sub_418164();
    a2 += 4;
    v4 = *v3;
    if ( *v3 != 45 )
      break;
    v11[2] |= 2u;
    v5 = &v11[1];
LABEL_11:
    while ( 1 )
    {
      Val = (unsigned __int8)*++v3;
      if ( (_BYTE)Val == 0 )
        break;
      if ( (_BYTE)Val == 82 && v4 == 45 )
      {
        LOBYTE(v11[3]) = 1;
      }
      else
      {
        v10 = v4;
        v7 = strchr("rhsatn", Val);
        if ( v7 == nullptr )
          goto LABEL_3;
        *v5 |= dword_47FA94[v7 - "rhsatn"];
        v4 = v10;
      }
    }
  }
  if ( v4 == 43 )
  {
    v11[2] |= 1u;
    v5 = v11;
    goto LABEL_11;
  }
  if ( (v11[2] & 4) != 0 && (v11[2] & 3) != 0 )
  {
    v8 = "= is incompatible with - and +";
    goto LABEL_20;
  }
  if ( (v11[1] & v11[0]) != 0 )
  {
    v8 = "can't set and unset a flag";
    goto LABEL_20;
  }
  if ( v11[2] == 0 )
  {
    v8 = "must use - or +";
LABEL_20:
    sub_418210(v8);
  }
  do
  {
    sub_41B370(*(const char **)a2, (int)v11);
    a2 += 4;
  }
  while ( *(_DWORD *)a2 != 0 );
  return 0;
}

