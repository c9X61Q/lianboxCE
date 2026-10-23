// busybox.exe @ 0x402d50 size=474

char *__cdecl sub_402D50(LPCSTR lpFileName)
{
  DWORD FileAttributesA; // eax
  unsigned int v2; // ebx
  char *v3; // eax
  char *v4; // ebp
  _BYTE *v5; // edx
  unsigned int v6; // eax
  _WORD *v7; // ebx
  char v9; // cl
  char Buffer[288]; // [esp+1Ch] [ebp-120h] BYREF

  *errno() = 0;
  if ( lpFileName == nullptr )
  {
    v4 = nullptr;
    *errno() = 14;
    return v4;
  }
  if ( *lpFileName == 0 )
    goto LABEL_18;
  FileAttributesA = GetFileAttributesA(lpFileName);
  if ( FileAttributesA == -1 )
  {
    v4 = nullptr;
    *errno() = 2;
    return v4;
  }
  if ( (FileAttributesA & 0x10) != 0 )
  {
    fullpath(Buffer, lpFileName, 0x104u);
    v2 = strlen(Buffer);
    v3 = (char *)malloc(v2 + 563);
    v4 = v3;
    if ( v3 != nullptr )
    {
      v5 = v3 + 556;
      v6 = v2 + 1;
      if ( v2 + 1 < 4 )
      {
        if ( v2 != -1 )
        {
          *v5 = Buffer[0];
          if ( (v6 & 2) != 0 )
            *(_WORD *)&v5[v6 - 2] = *(_WORD *)&Buffer[v6 - 2];
        }
      }
      else
      {
        *(_DWORD *)&v5[v6 - 4] = *(_DWORD *)&Buffer[v6 - 4];
        qmemcpy(v5, Buffer, 4 * (v2 >> 2));
      }
      if ( v4[556] != 0 )
      {
        v9 = v4[v2 + 555];
        v7 = &v5[v2];
        if ( v9 != 92 && v9 != 47 )
        {
          *v7 = 92;
          v7 = &v5[v6];
        }
      }
      else
      {
        v7 = &v5[v2];
      }
      *v7 = 42;
      *((_DWORD *)v4 + 137) = -1;
      *((_DWORD *)v4 + 138) = 0;
      *((_DWORD *)v4 + 70) = 0;
      *((_DWORD *)v4 + 71) = 0;
      memset(v4 + 288, 0, 0x104u);
    }
    else
    {
      *errno() = 12;
    }
    return v4;
  }
LABEL_18:
  *errno() = 20;
  return nullptr;
}

