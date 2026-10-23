// busybox.exe @ 0x46c2b0 size=195

int __cdecl sub_46C2B0(int a1, unsigned __int16 *a2, int a3, int *a4, int a5)
{
  int v5; // edx
  int v6; // edx
  int result; // eax
  int v8; // eax
  unsigned int v9; // edx

  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( (v5 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 24) = v5 | 1;
      if ( a5 > 3 )
      {
        if ( *(_DWORD *)a1 == 12000 )
        {
          v6 = 65279;
        }
        else
        {
          if ( *(_DWORD *)a1 != 12001 )
            goto LABEL_9;
          v6 = -131072;
        }
        *a4 = v6;
LABEL_9:
        result = sub_46C2B0(a1, (int)a2, a3, (int)(a4 + 1), a5 - 4);
        if ( result != -1 )
          result += 4;
        return result;
      }
LABEL_12:
      *_errno() = 7;
      return -1;
    }
  }
  if ( a5 <= 3 )
    goto LABEL_12;
  v8 = sub_46C0A8(a2);
  v9 = v8;
  if ( *(_DWORD *)a1 == 12000 )
  {
    *a4 = v8;
    return 4;
  }
  else
  {
    result = 4;
    if ( *(_DWORD *)a1 == 12001 )
      *a4 = _byteswap_ulong(v9);
  }
  return result;
}

