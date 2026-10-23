// busybox.exe @ 0x41c314 size=213

BOOL __usercall sub_41C314@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // dl
  BOOL result; // eax
  bool v9; // zf
  bool v10; // zf
  unsigned int v11; // esi
  char v12; // dl
  unsigned int v13; // esi

  v6 = *(_BYTE *)(a1[1] + a3);
  v7 = *(_BYTE *)(a2 + 4);
  if ( v7 != 5 )
  {
    result = false;
    if ( v7 > 5u )
      return result;
    if ( v7 != 1 )
    {
      if ( v7 != 3 )
        return result;
      v10 = ((*(_DWORD *)(*(_DWORD *)a2 + 4 * (v6 >> 5)) >> v6) & 1) == 0;
      goto LABEL_10;
    }
    v9 = *(_BYTE *)a2 == v6;
LABEL_14:
    if ( !v9 )
      return result;
    goto LABEL_15;
  }
  if ( v6 == 10 )
  {
    result = false;
    v10 = (*(_BYTE *)(a1[17] + 128) & 0x40) == 0;
LABEL_10:
    if ( v10 )
      return result;
    goto LABEL_15;
  }
  if ( v6 == 0 )
  {
    result = false;
    v9 = *(_BYTE *)(a1[17] + 128) >= 0;
    goto LABEL_14;
  }
LABEL_15:
  v11 = *(_DWORD *)(a2 + 4);
  result = true;
  if ( (v11 & 0x3FF00) != 0 )
  {
    v12 = sub_4564EC(a1[18], a3);
    v13 = v11 >> 8;
    if ( (v13 & 4) == 0 || (result = false, (v12 & 1) != 0) )
    {
      if ( (v13 & 8) == 0 || (result = false, (v12 & 1) == 0) )
      {
        if ( (v13 & 0x20) == 0 || (result = false, (v12 & 2) != 0) )
        {
          result = true;
          if ( (v13 & 0x80) != 0 )
            return (v12 & 8) != 0;
        }
      }
    }
  }
  return result;
}

