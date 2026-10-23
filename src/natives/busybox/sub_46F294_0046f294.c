// busybox.exe @ 0x46f294 size=441

int __cdecl sub_46F294(int a1, char *Buf, unsigned int MaxCharCount)
{
  char *v3; // ecx
  char v4; // di
  char v5; // dl
  int v6; // ecx
  int v7; // ebx
  char v8; // al
  char *v10; // ebp
  char *v11; // esi
  int v12; // eax
  size_t v13; // esi
  int v14; // eax

  if ( sub_43C480(a1) != 0 )
  {
    v3 = Buf;
    v4 = 0;
    v5 = 0;
    while ( &Buf[MaxCharCount] != v3 )
    {
      v8 = *v3;
      if ( *v3 == 27 || v8 < 0 )
      {
        v5 = 1;
      }
      else if ( v8 == 0 )
      {
        v4 = 1;
      }
      ++v3;
    }
    if ( ((unsigned __int8)v5 ^ 1 | (unsigned __int8)v4) != 0 )
      return write(a1, Buf, MaxCharCount);
    if ( MaxCharCount > dword_473470 )
    {
      free(lpMultiByteStr);
      lpMultiByteStr = (LPSTR)malloc(MaxCharCount + 1);
      dword_473470 = MaxCharCount;
    }
    v10 = lpMultiByteStr;
    qmemcpy(lpMultiByteStr, Buf, MaxCharCount);
    v10[MaxCharCount] = 0;
    v7 = 0;
    while ( *v10 != 0 )
    {
      v11 = strchr(v10, 27);
      if ( v11 == nullptr || sub_460D08(0) != 0 )
      {
        v13 = strlen(v10);
        sub_46ED2C(v10, v10);
        v14 = write(a1, v10, v13);
        v7 += v14;
        if ( v14 == -1 )
          return -1;
        return v7;
      }
      if ( v11 != v10 )
      {
        sub_46ED64(v11 - v10, v10, v10);
        v12 = write(a1, v10, v11 - v10);
        if ( v12 == -1 )
          return -1;
        v7 += v12;
      }
      v10 = sub_44F634(v11);
      if ( v11 == v10 )
      {
        if ( write(a1, v11, 1u) == -1 )
          return -1;
        v10 = v11 + 1;
      }
      v7 += v10 - v11;
    }
  }
  else
  {
    SetLastError(0);
    v7 = write(a1, Buf, MaxCharCount);
    if ( v7 == -1 )
      sub_41C460(a1, v6);
  }
  return v7;
}

