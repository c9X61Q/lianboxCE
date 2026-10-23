// busybox.exe @ 0x46c0d4 size=286

int __cdecl sub_46C0D4(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int result; // eax
  __int16 v7; // ax
  __int16 v8; // ax

  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( (v5 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 24) = v5 | 1;
      if ( a5 > 1 )
      {
        if ( *(_DWORD *)a1 == 1200 )
        {
          *(_WORD *)a4 = -257;
        }
        else if ( *(_DWORD *)a1 == 1201 )
        {
          *(_WORD *)a4 = -2;
        }
        result = sub_46C0D4(a1, a2, a3, a4 + 2, a5 - 2);
        if ( result != -1 )
          result += 2;
        return result;
      }
LABEL_18:
      *_errno() = 7;
      return -1;
    }
  }
  if ( a5 <= 1 )
    goto LABEL_18;
  v7 = *(_WORD *)a2;
  if ( *(_DWORD *)a1 == 1200 )
  {
    *(_BYTE *)a4 = v7;
    v8 = HIBYTE(*(_WORD *)a2);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1201 )
      goto LABEL_16;
    *(_BYTE *)a4 = HIBYTE(v7);
    v8 = *(_WORD *)a2;
  }
  *(_BYTE *)(a4 + 1) = v8;
LABEL_16:
  result = 2;
  if ( (unsigned __int16)(*(_WORD *)a2 + 10240) > 0x3FFu )
    return result;
  if ( a5 <= 3 )
    goto LABEL_18;
  if ( *(_DWORD *)a1 == 1200 )
  {
    *(_BYTE *)(a4 + 2) = *(_WORD *)(a2 + 2);
    *(_BYTE *)(a4 + 3) = *(_BYTE *)(a2 + 3);
    return 4;
  }
  else
  {
    result = 4;
    if ( *(_DWORD *)a1 == 1201 )
    {
      *(_BYTE *)(a4 + 2) = *(_BYTE *)(a2 + 3);
      *(_BYTE *)(a4 + 3) = *(_WORD *)(a2 + 2);
    }
  }
  return result;
}

