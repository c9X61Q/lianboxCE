// busybox.exe @ 0x43c8fc size=473

unsigned int __cdecl sub_43C8FC(_DWORD *a1, _WORD *a2, int a3, char *a4, int a5)
{
  int v5; // ebx
  int v6; // ebp
  char **v7; // esi
  size_t MaxCount; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  unsigned int result; // eax
  size_t Size; // [esp+30h] [ebp-34h]
  int Sizea; // [esp+30h] [ebp-34h]
  int v16; // [esp+34h] [ebp-30h]
  int v17; // [esp+38h] [ebp-2Ch]
  int v18; // [esp+3Ch] [ebp-28h] BYREF
  int v19; // [esp+40h] [ebp-24h] BYREF
  char Src; // [esp+44h] [ebp-20h] BYREF
  char v21[31]; // [esp+45h] [ebp-1Fh] BYREF

  v18 = 16;
  v5 = a3;
  v19 = 0;
  if ( dword_4730F8(&v19, *a1, a2, &a3, &Src, &v18) != 0 || a3 != v5 )
  {
LABEL_24:
    *_errno() = 42;
    return -1;
  }
  v6 = v18;
  if ( v18 <= a5 )
  {
    v7 = &off_4733D0;
    if ( v18 != 1 )
    {
      while ( *v7 != nullptr )
      {
        Size = (size_t)v7;
        MaxCount = (size_t)v7[1];
        v9 = strncmp(&Src, *v7, MaxCount);
        v7 += 4;
        if ( v9 == 0 )
        {
          v10 = *(_DWORD *)(Size + 12);
          goto LABEL_9;
        }
      }
      goto LABEL_24;
    }
    v10 = 0;
    MaxCount = 0;
LABEL_9:
    v11 = 0;
    if ( v21[MaxCount - 1] == 14 )
    {
      ++MaxCount;
      v11 = 1;
    }
    if ( v10 == 0 && *a2 > 0x7Fu )
      goto LABEL_24;
    Sizea = dword_4733C8[4 * v10];
    if ( v6 < (int)(MaxCount + Sizea) )
      goto LABEL_24;
    v12 = a1[6];
    v16 = v11 | (v10 << 8);
    if ( v12 == v16 )
    {
      if ( MaxCount != 0 )
      {
        memmove(&Src, &v21[MaxCount - 1], Sizea);
        MaxCount = 0;
      }
    }
    else
    {
      if ( v10 == 0 )
      {
        v17 = a1[6];
        MaxCount = dword_4733C4;
        memmove(&v21[dword_4733C4 - 1], &Src, Sizea);
        qmemcpy(&Src, off_4733C0, MaxCount);
        LOBYTE(v12) = v17;
      }
      if ( (_BYTE)v12 == 1 )
      {
        memmove(v21, &Src, MaxCount + Sizea);
        Src = 15;
        ++MaxCount;
      }
    }
    result = MaxCount + Sizea;
    if ( (int)(MaxCount + Sizea) <= a5 )
    {
      qmemcpy(a4, &Src, result);
      a1[6] = v16;
      return result;
    }
  }
  *_errno() = 7;
  return -1;
}

