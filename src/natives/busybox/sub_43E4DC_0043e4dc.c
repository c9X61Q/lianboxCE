// busybox.exe @ 0x43e4dc size=566

int __cdecl sub_43E4DC(int a1, int a2)
{
  const char **v2; // ebx
  _BYTE *v3; // eax
  int v4; // ecx
  _BYTE *Block; // esi
  int v6; // ecx
  const char *v7; // eax
  int v8; // ecx
  char *v9; // esi
  int v10; // edx
  void *lpNewFileName; // edi
  int v12; // edx
  int v13; // edx
  int (__cdecl *v15)(int, int); // [esp+10h] [ebp-88h]
  int v16; // [esp+18h] [ebp-80h]
  CHAR *lpExistingFileName; // [esp+1Ch] [ebp-7Ch]
  char v18; // [esp+20h] [ebp-78h]
  const char *v19; // [esp+24h] [ebp-74h]
  const char *v20; // [esp+28h] [ebp-70h] BYREF
  _BYTE v21[16]; // [esp+2Ch] [ebp-6Ch] BYREF
  int v22; // [esp+3Ch] [ebp-5Ch]

  v20 = "~";
  v18 = sub_435D44(a2, (int)"^sfnbS:vT", &v20);
  if ( a1 - dword_473090 > 2 && (v18 & 0x40) != 0 )
    sub_418210("-T accepts 2 args max");
  v19 = *(const char **)(a2 + 4 * a1 - 4);
  v2 = (const char **)(a2 + 4 * dword_473090);
  if ( v2[1] == nullptr )
  {
    *(v2 - 1) = *(const char **)(a2 + 4 * a1 - 4);
    v3 = (_BYTE *)sub_47188C();
    v19 = sub_417A68(v3, v4);
    --v2;
  }
  v15 = sub_43DEB8;
  if ( (v18 & 1) != 0 )
    v15 = (int (__cdecl *)(int, int))sub_46441C;
  v16 = 0;
  do
  {
    if ( sub_43C4D8((int)v19, (v18 & 0x44) == 0) )
    {
      if ( (v18 & 0x40) != 0 )
        sub_41784C("'%s' is a directory", v19);
      Block = (_BYTE *)sub_47188C();
      v7 = sub_417A68(Block, v6);
      lpExistingFileName = (CHAR *)sub_41E9A4(v19, v7, v8);
      free(Block);
      v9 = lpExistingFileName;
    }
    else
    {
      v9 = (char *)v19;
      lpExistingFileName = nullptr;
    }
    if ( (v18 & 1) == 0 && sub_444C28(*v2, v21) != 0 && (sub_443484(*v2, v21) != 0 || (v22 & 0xF000) != 0xA000) )
    {
      sub_418224(*v2, v10);
      free(lpExistingFileName);
LABEL_23:
      v16 = 1;
      goto LABEL_32;
    }
    if ( (v18 & 8) != 0 )
    {
      lpNewFileName = (void *)sub_4708BC("%s%s", v9, v20);
      if ( sub_443B88(v9, (LPCSTR)lpNewFileName) < 0 && *_errno() != 2 )
      {
        sub_418224(v9, v12);
        free(lpNewFileName);
        goto LABEL_23;
      }
      free(lpNewFileName);
LABEL_26:
      sub_444ECC(v9);
      goto LABEL_27;
    }
    if ( (v18 & 2) != 0 )
      goto LABEL_26;
LABEL_27:
    if ( (v18 & 0x20) != 0 )
      sub_46F088("'%s' -> '%s'\n", v9, *v2);
    if ( v15((int)*v2, (int)v9) != 0 )
    {
      sub_418224(v9, v13);
      v16 = 1;
    }
    free(lpExistingFileName);
LABEL_32:
    ++v2;
  }
  while ( v2[1] != nullptr );
  return v16;
}

