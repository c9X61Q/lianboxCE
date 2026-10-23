// busybox.exe @ 0x41ee84 size=1558

int __usercall sub_41EE84@<eax>(const CHAR *a1@<eax>, char *a2@<edx>, signed __int32 a3@<ecx>)
{
  _DWORD (__cdecl *v4)(const CHAR *, int *); // eax
  int v5; // edx
  int (__cdecl *v6)(const CHAR *, char *); // esi
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  char v10; // si
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  signed __int32 v15; // ecx
  int v16; // edx
  char v17; // al
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // esi
  unsigned int v22; // edx
  int v23; // edx
  char *v24; // ebx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  const char *v30; // [esp+10h] [ebp-F4h]
  void *v31; // [esp+10h] [ebp-F4h]
  void *Block; // [esp+14h] [ebp-F0h]
  char *v33; // [esp+18h] [ebp-ECh]
  char v34; // [esp+18h] [ebp-ECh]
  unsigned int v35; // [esp+18h] [ebp-ECh]
  int FileHandle; // [esp+1Ch] [ebp-E8h]
  unsigned __int16 FileHandlea; // [esp+1Ch] [ebp-E8h]
  int FileHandleb; // [esp+1Ch] [ebp-E8h]
  signed __int32 v40; // [esp+24h] [ebp-E0h] BYREF
  int v41[4]; // [esp+28h] [ebp-DCh] BYREF
  int v42; // [esp+38h] [ebp-CCh] BYREF
  __int64 v43; // [esp+40h] [ebp-C4h]
  int v44; // [esp+48h] [ebp-BCh]
  int v45; // [esp+70h] [ebp-94h]
  _DWORD v46[2]; // [esp+98h] [ebp-6Ch] BYREF
  __int64 v47; // [esp+A0h] [ebp-64h]
  int v48; // [esp+A8h] [ebp-5Ch]
  int v49; // [esp+D0h] [ebp-34h]

  v40 = a3;
  FileHandle = a3 & 0x102;
  v4 = (_DWORD (__cdecl *)(const CHAR *, int *))sub_443484;
  if ( (a3 & 0x102) != 0 )
    v4 = (_DWORD (__cdecl *)(const CHAR *, int *))sub_444C28;
  if ( (int)v4(a1, &v42) >= 0 )
  {
    if ( (int)sub_443484(a2, v46) >= 0 )
    {
      if ( v42 == v46[0] && v43 == v47 && v43 != 0 )
      {
        sub_41783C("'%s' and '%s' are the same file", a1, a2);
        return -1;
      }
      v10 = 1;
    }
    else
    {
      if ( *_errno() != 2 )
      {
LABEL_10:
        sub_417FE4(v8, "can't stat '%s'", a2);
        return -1;
      }
      v10 = 0;
    }
    if ( (v44 & 0xF000) == 0x4000 )
    {
      if ( (v40 & 4) == 0 )
      {
        sub_41783C("omitting directory '%s'", a1);
        return -1;
      }
      if ( sub_43C518() != 0 )
      {
        sub_41783C("recursion detected, omitting directory '%s'", a1);
        return -1;
      }
      if ( v10 != 0 )
      {
        if ( (v48 & 0xF000) != 0x4000 )
        {
          sub_41783C("target '%s' is not a directory", a2);
          return -1;
        }
        FileHandlea = 0;
      }
      else
      {
        FileHandlea = sub_444EA4(0);
        if ( sub_443494(a2) < 0 )
        {
          sub_444EA4(FileHandlea);
          sub_417FE4(v11, "can't create directory '%s'", a2);
          return -1;
        }
        sub_444EA4(FileHandlea);
        if ( (int)sub_443484(a2, v46) < 0 )
          goto LABEL_10;
      }
      sub_4137B0(v46, nullptr);
      v33 = sub_402D50(a1);
      LOBYTE(v9) = -1;
      if ( v33 != nullptr )
      {
        LOBYTE(v9) = 0;
        while ( 1 )
        {
          v12 = sub_402F30((int)v33);
          if ( v12 == 0 )
            break;
          v30 = (const char *)(v12 + 8);
          Block = (void *)sub_41EA10(a1, v12 + 8, v13);
          if ( Block != nullptr )
          {
            v31 = (void *)sub_41E9A4(a2, v30, v14);
            v15 = v40;
            BYTE1(v15) = BYTE1(v40) & 0xFE;
            if ( sub_41EE84(v15, v31) < 0 )
              LOBYTE(v9) = -1;
            free(Block);
            free(v31);
          }
        }
        sub_403050(v33);
        if ( v10 == 0 && sub_442E6C(a2, (unsigned __int16)v44 & ~FileHandlea) < 0 )
          sub_417FE4(v16, "can't preserve %s of '%s'", "permissions", a2);
      }
LABEL_84:
      if ( (v40 & 1) != 0 )
      {
        v41[0] = v45;
        v41[2] = v45;
        v41[1] = 0;
        v41[3] = 0;
        if ( sub_46C3FC(a2, (int)v41) < 0 )
          sub_417FE4(v27, "can't preserve %s of '%s'", "times", a2);
        if ( sub_442E6C(a2, (unsigned __int16)v44) < 0 )
          sub_417FE4(v28, "can't preserve %s of '%s'", "permissions", a2);
      }
LABEL_90:
      if ( _bittest(&v40, 0xCu) )
        sub_46F088("'%s' -> '%s'\n", a1, a2);
      return (char)v9;
    }
    if ( v10 != 0 )
    {
      if ( _bittest(&v40, 0xDu) && v45 <= v49 )
        return 0;
      if ( !_bittest(&v40, 0xFu) )
      {
LABEL_48:
        if ( (v40 & 0x60) != 0 )
        {
LABEL_5:
          v6 = (int (__cdecl *)(const CHAR *, char *))sub_46442C;
          if ( (v40 & 0x40) != 0 )
          {
            v7 = sub_46442C(a1, a2);
          }
          else
          {
            v6 = (int (__cdecl *)(const CHAR *, char *))sub_43DEB8;
            v7 = sub_43DEB8(a1, a2);
          }
          if ( v7 >= 0 )
            return 0;
          v17 = sub_415C38(a2, v40);
          if ( v17 > 0 )
          {
            if ( v6(a1, a2) < 0 )
            {
              sub_417FE4(v18, "can't create link '%s'", a2);
              return -1;
            }
            return 0;
          }
          return v17;
        }
        if ( (v40 & 4) != 0 )
        {
          if ( (v44 & 0xF000) != 0x8000 )
          {
LABEL_74:
            if ( v10 != 0 )
            {
              *_errno() = 17;
              v17 = sub_415C38(a2, v40);
              if ( v17 <= 0 )
                return v17;
            }
            if ( (v44 & 0xF000) != 0xA000 )
            {
              if ( (v44 & 0xD000) == 0x1000 || (v44 & 0xF000) == 0x2000 )
              {
                *_errno() = 40;
                sub_417FE4(v26, "can't create '%s'", a2);
              }
              else
              {
                sub_41783C("unrecognized file '%s' with mode %x", a1, (unsigned __int16)v44);
              }
              return -1;
            }
            v24 = (char *)sub_471264();
            if ( v24 != nullptr )
            {
              *_errno() = 40;
              sub_417FE4(v25, "can't create %slink '%s' to '%s'", "sym", a2, v24);
              free(v24);
              return -1;
            }
            LOBYTE(v9) = 0;
            goto LABEL_90;
          }
        }
        else if ( FileHandle == 0 && (v44 & 0xF000) == 0xA000 )
        {
          goto LABEL_74;
        }
        FileHandleb = sub_447A60();
        v9 = -1;
        if ( FileHandleb < 0 )
          return v9;
        v19 = (unsigned __int16)v44;
        if ( (v44 & 0xF000) != 0x8000 )
          v19 = 438;
        v9 = sub_443508(a2, 1281, v19);
        if ( v9 == -1 )
        {
          v34 = sub_415C38(a2, v40);
          if ( v34 <= 0 )
          {
            sub_442EA4(FileHandleb);
            return v34;
          }
          v20 = sub_4479C8(v19, 1281);
          if ( v20 < 0 )
          {
            sub_442EA4(FileHandleb);
            return v9;
          }
          v9 = v20;
        }
        v21 = sub_416EC0();
        v35 = v22;
        if ( sub_442EA4(v9) < 0 )
        {
          sub_417FE4(v23, "error writing to '%s'", a2);
          LOBYTE(v9) = -1;
        }
        else
        {
          LOBYTE(v9) = (v35 & v21) == -1;
          v9 = -v9;
        }
        sub_442EA4(FileHandleb);
        if ( (v44 & 0xF000) != 0x8000 )
          return (char)v9;
        goto LABEL_84;
      }
      v17 = sub_415C38(a2, v40);
      if ( v17 <= 0 )
        return v17;
    }
    v10 = 0;
    goto LABEL_48;
  }
  if ( (v40 & 0x60) != 0 )
    goto LABEL_5;
  sub_417FE4(v5, "can't stat '%s'", a1);
  return -1;
}

