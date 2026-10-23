// busybox.exe @ 0x42149c size=890

int __usercall sub_42149C@<eax>(int a1@<eax>)
{
  int v1; // esi
  const char *v2; // edi
  char *Str; // ebx
  bool i; // zf
  char *v5; // eax
  char *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  int result; // eax
  int *v10; // eax
  bool v11; // zf
  unsigned __int16 v12; // ax
  int v13; // edx
  char *v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // edx
  int FileHandle; // [esp+Ch] [ebp-78h]
  char *FileHandlea; // [esp+Ch] [ebp-78h]
  int FileHandleb; // [esp+Ch] [ebp-78h]
  int FileHandlec; // [esp+Ch] [ebp-78h]
  int v23[28]; // [esp+14h] [ebp-70h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v2 = nullptr;
  if ( (*(_DWORD *)(v1 + 24) & 0xF000) == 0x8000 && *(_QWORD *)(v1 + 8) == 0 )
    v2 = *(const char **)(v1 + 4);
  Str = *(char **)v1;
  FileHandle = *(_DWORD *)(a1 + 56);
  for ( i = FileHandle == 0; !i; i = FileHandle-- == 1 )
  {
    v5 = strchr(Str, 47);
    v6 = v5;
    if ( v5 == nullptr || v5[1] == 0 )
      return sub_4218F4();
    if ( v2 != nullptr )
    {
      v7 = strchr(v2, 47);
      if ( v7 == nullptr || v7[1] == 0 )
        return sub_4218F4();
      v2 = v7 + 1;
    }
    Str = v6 + 1;
  }
  if ( (*(_BYTE *)a1 & 2) != 0 )
  {
    v8 = strrchr(Str, 47);
    FileHandlea = v8;
    if ( v8 != nullptr )
    {
      *v8 = 0;
      sub_417C00(Str, -1, 4);
      *FileHandlea = 47;
    }
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 24) & 0xF000) != 0x4000 )
    {
      if ( v2 != nullptr )
      {
        result = strcmp(v2, Str);
        if ( result == 0 )
          return result;
      }
      if ( sub_444ECC(Str) == -1 )
      {
        v10 = _errno();
        v11 = *v10 == 2;
LABEL_32:
        if ( !v11 )
          sub_418014((int)v10, "can't remove old file %s", Str);
      }
    }
LABEL_34:
    if ( v2 != nullptr )
      return sub_4209AC(v2, Str);
    v12 = *(_WORD *)(v1 + 24) & 0xF000;
    if ( v12 != 0xC000 )
    {
      if ( v12 > 0xC000u )
        goto LABEL_59;
      if ( v12 == 0xA000 )
      {
        sub_4209AC(*(const char **)(v1 + 4), Str);
        goto LABEL_60;
      }
      if ( v12 > 0xA000u )
        goto LABEL_59;
      if ( v12 == 0x8000 )
      {
        v13 = (*(_DWORD *)a1 & 0x80) == 0 ? 1281 : 769;
        v14 = Str;
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          FileHandleb = (*(_DWORD *)a1 & 0x80) == 0 ? 1281 : 769;
          v15 = getpid();
          v14 = (char *)sub_4708BC("%s;%x", Str, v15);
          v13 = FileHandleb;
        }
        FileHandlec = sub_471558(*(unsigned __int16 *)(v1 + 24), v13);
        sub_416EDC(*(_QWORD *)(v1 + 8));
        sub_442EA4(FileHandlec);
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          sub_4716FC();
          free(v14);
        }
        goto LABEL_60;
      }
      if ( v12 > 0x8000u )
        goto LABEL_59;
      if ( v12 == 0x4000 )
      {
        if ( sub_443494(Str) != 0 && *_errno() != 21 && *_errno() != 17 )
          sub_417FE4(v16, "can't make dir %s", Str);
        goto LABEL_60;
      }
      if ( v12 > 0x4000u || v12 != 12288 && (v12 > 0x3000u || ((v12 - 4096) & 0xE000) != 0) )
LABEL_59:
        sub_418210("unrecognized file type");
    }
    *_errno() = 40;
    sub_417FE4(v17, "can't create node %s", Str);
LABEL_60:
    result = *(unsigned __int16 *)(v1 + 24);
    if ( (*(_WORD *)(v1 + 24) & 0xF000) != 0xA000 )
    {
      if ( (*(_BYTE *)a1 & 0x20) == 0 )
        sub_442E6C(Str, result);
      result = a1;
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v23[0] = *(_DWORD *)(v1 + 28);
        v23[2] = v23[0];
        v23[1] = 0;
        v23[3] = 0;
        return sub_46C3FC(Str, (int)v23);
      }
    }
    return result;
  }
  if ( (*(_DWORD *)a1 & 8) == 0 )
    goto LABEL_34;
  if ( sub_443484(Str, v23) == -1 )
  {
    if ( *_errno() != 2 )
      sub_41823C("can't stat old file");
    goto LABEL_34;
  }
  if ( v23[14] < *(_DWORD *)(v1 + 28) )
  {
    if ( sub_444ECC(Str) != -1 )
      goto LABEL_34;
    v10 = _errno();
    v11 = *v10 == 21;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v1 + 24) & 0xF000) != 0x4000 )
    sub_41783C("%s not created: newer or same age file exists", Str);
  return sub_4218F4();
}

