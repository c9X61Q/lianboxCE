// busybox.exe @ 0x45c0f8 size=437

int __usercall sub_45C0F8@<eax>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  char *v4; // ebx
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  void *Block; // esi
  int v10; // ecx
  char *v11; // eax
  char *v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  char *v16; // eax
  char *v17; // ebx
  char *Str; // [esp+1Ch] [ebp-70h]
  _BYTE v20[40]; // [esp+20h] [ebp-6Ch] BYREF
  __int64 v21; // [esp+48h] [ebp-44h]

  if ( a3 == 11 )
    return 0;
  v4 = a1;
  if ( sub_442D6C(a1, 4) != 0 )
    return 0;
  v7 = dword_486008 & 2;
  if ( (dword_486008 & 2) == 0 )
  {
    if ( a2 == 0 )
      goto LABEL_16;
    sub_471860(v6, v20);
    if ( __SPAIR64__(v7, 300) < v21 )
      goto LABEL_16;
    v8 = sub_471098();
    Block = (void *)v8;
    if ( v8 != 0 && sub_43C594(v8, (int)".so ") != 0 )
    {
      *(_BYTE *)sub_4635B0(v10, 10) = 0;
      Str = (char *)sub_460FB8();
      v11 = strrchr(v4, 47);
      if ( v11 != nullptr )
      {
        *v11 = 0;
        if ( strchr(Str, 47) != nullptr )
        {
          v12 = strrchr(v4, 47);
          if ( v12 == nullptr )
            goto LABEL_16;
          *v12 = 0;
        }
        v4 = (char *)sub_4708BC("%s/%s", v4, Str);
        free(Block);
        if ( sub_460288(a3 + 1, a2) != 0 )
          return 1;
      }
    }
    else
    {
      free(Block);
    }
LABEL_16:
    sub_442EA4(0);
    sub_447B4C(v4);
    if ( a2 != 0 )
    {
      v15 = sub_43571C(v14, v13);
      if ( v15 > 10 )
        v15 -= 2;
      v16 = (char *)sub_4708BC(
                      "%s | %s -rLL=%un -rLT=%un 2>&1 | %s",
                      (const char *)*(&MultiByteStr + 1),
                      (const char *)unk_485BE8,
                      v15,
                      v15,
                      (const char *)qword_485BEC);
    }
    else
    {
      v16 = (char *)sub_47188C();
    }
    v17 = v16;
    sub_444E20(v16);
    free(v17);
    return 1;
  }
  sub_46F108(v4);
  return 1;
}

