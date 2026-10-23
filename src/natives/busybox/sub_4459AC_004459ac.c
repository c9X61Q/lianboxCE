// busybox.exe @ 0x4459ac size=570

int __cdecl sub_4459AC(int a1, int a2)
{
  const char **v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  const char *v6; // eax
  int v7; // ecx
  char *lpNewFileName; // ebx
  int v9; // ecx
  FILE *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  char v15; // [esp+10h] [ebp-D8h]
  int v16; // [esp+14h] [ebp-D4h]
  const char *v17; // [esp+18h] [ebp-D0h]
  _BYTE v18[96]; // [esp+1Ch] [ebp-CCh] BYREF
  _BYTE v19[108]; // [esp+7Ch] [ebp-6Ch] BYREF

  v15 = sub_435D60(a2, (int)"^finv", (int)"interactive");
  v2 = (const char **)(a2 + 4 * dword_473090);
  v3 = (int)v2[a1 - dword_473090 - 1];
  v17 = (const char *)v3;
  if ( a1 - dword_473090 != 2 )
  {
LABEL_4:
    v16 = 0;
    while ( 1 )
    {
      v6 = sub_417A68(*v2, v3);
      lpNewFileName = (char *)sub_41E9A4(v17, v6, v7);
      v5 = sub_41FA1C(v9, (int)v18);
      if ( v5 < 0 )
        goto LABEL_35;
LABEL_8:
      if ( v5 != 0 )
      {
        if ( (v15 & 4) != 0 )
          goto LABEL_36;
        if ( (v15 & 1) == 0 && (sub_442D6C(lpNewFileName, 2) < 0 && sub_443380(0) != 0 || (v15 & 2) != 0) )
        {
          v10 = off_4730E8(2);
          if ( (int)sub_46EEFC(v10, "mv: overwrite '%s'? ", lpNewFileName) < 0 )
            goto LABEL_35;
          if ( !sub_416DD0() )
            goto LABEL_36;
        }
      }
      if ( sub_443B88(*v2, lpNewFileName) < 0 )
      {
        if ( *_errno() != 18 || (v12 = sub_41FA28(*v2, (int)v19, sub_443484)) <= 0 )
        {
          sub_417FE4(v11, "can't rename '%s'", *v2);
LABEL_35:
          v16 = 1;
          goto LABEL_36;
        }
        if ( v5 != 0 )
        {
          if ( v5 == 3 )
          {
            if ( v12 != 3 )
            {
              sub_41783C("can't overwrite %sdirectory with %sdirectory", (const char *)&unk_479D3E, "non-");
              goto LABEL_35;
            }
          }
          else if ( v12 == 3 )
          {
            sub_41783C("can't overwrite %sdirectory with %sdirectory", "non-", (const char *)&unk_479D3E);
            goto LABEL_35;
          }
          if ( sub_444ECC(lpNewFileName) < 0 )
          {
            sub_417FE4(v13, "can't remove '%s'", lpNewFileName);
            goto LABEL_35;
          }
        }
        if ( sub_41EE84(*v2, lpNewFileName, 5) < 0 || sub_45A294() < 0 )
          goto LABEL_35;
      }
LABEL_36:
      if ( (v15 & 8) != 0 )
        sub_46F088("'%s' -> '%s'\n", *v2, lpNewFileName);
      if ( lpNewFileName != v17 )
        free(lpNewFileName);
      if ( v2[1] == v17 )
        return v16;
      ++v2;
    }
  }
  v4 = sub_41FA1C(v3, (int)v18);
  v5 = v4;
  v16 = 1;
  if ( v4 >= 0 )
  {
    v16 = v4 & 2;
    if ( (v4 & 2) == 0 )
    {
      lpNewFileName = (char *)v17;
      goto LABEL_8;
    }
    goto LABEL_4;
  }
  return v16;
}

