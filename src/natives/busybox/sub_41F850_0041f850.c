// busybox.exe @ 0x41f850 size=457

int __cdecl sub_41F850(int a1, int a2)
{
  int v2; // eax
  signed __int32 v3; // ebx
  int v4; // ecx
  const char *v5; // edi
  _DWORD (__cdecl *v6)(_DWORD, _DWORD); // ecx
  int v7; // esi
  int v8; // eax
  const char *v9; // eax
  char *v10; // esi
  char *v11; // eax
  const char *v12; // eax
  int v13; // ecx
  char *Block; // [esp+10h] [ebp-D8h]
  const char **v16; // [esp+14h] [ebp-D4h]
  int v17; // [esp+18h] [ebp-D0h]
  _BYTE v18[96]; // [esp+1Ch] [ebp-CCh] BYREF

  v2 = sub_435D60(a2, "^pdRfilsLHarPvuT", "archive");
  v3 = v2 ^ 2;
  if ( (v2 & 0x80u) != 0 )
    v3 = v2 | 2;
  v4 = a2 + 4 * dword_473090;
  v16 = (const char **)v4;
  v5 = *(const char **)(v4 + 4 * (a1 - dword_473090) - 4);
  if ( a1 - dword_473090 != 2 )
  {
    v17 = v3 & 0x4000;
    if ( (v3 & 0x4000) == 0 )
      goto LABEL_32;
    v9 = "too many arguments";
LABEL_25:
    sub_418210(v9);
  }
  v6 = sub_444C28;
  if ( (v3 & 2) == 0 )
    v6 = sub_443484;
  v7 = sub_41FA28(v6, v18);
  if ( v7 < 0 )
    return 1;
  v8 = sub_41FA1C();
  if ( v8 < 0 )
    return 1;
  if ( (v3 & 0x4000) != 0 && (v7 & 2) == 0 && (v8 & 2) != 0 )
    sub_41784C("'%s' is a directory", v5);
  if ( (v3 & 0x10000) != 0 && (v8 & 2) == 0 )
  {
    v9 = "with --parents, the destination must be a directory";
    goto LABEL_25;
  }
  if ( (v3 & 0x8000) != 0 )
    v3 |= 8u;
  v17 = ((unsigned __int8)v8 | (unsigned __int8)v7) & 2;
  if ( (((unsigned __int8)v8 | (unsigned __int8)v7) & 2) == 0 )
  {
    v10 = (char *)v5;
    goto LABEL_28;
  }
  if ( (v3 & 4) != 0 && (v7 & 2) != 0 && v8 == 0 || (v17 = v3 & 0x4000, (v3 & 0x4000) != 0) )
  {
    v10 = (char *)v5;
    v17 = 0;
    goto LABEL_28;
  }
  while ( 1 )
  {
LABEL_32:
    if ( (v3 & 0x10000) != 0 )
    {
      v10 = (char *)sub_41E9A4(v5, *v16, v4);
      Block = (char *)sub_47188C();
      v11 = sub_403200(Block);
      if ( sub_417C00(v11, -1, 4) != 0 )
        return 1;
      free(Block);
    }
    else
    {
      v12 = sub_417A68(*v16, v4);
      v10 = (char *)sub_41E9A4(v5, v12, v13);
    }
LABEL_28:
    if ( sub_41EE84(*v16, v10, v3) < 0 )
      v17 = 1;
    if ( v16[1] == v5 )
      break;
    ++v16;
    free(v10);
  }
  return v17;
}

