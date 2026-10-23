// busybox.exe @ 0x41b370 size=247

__int16 __usercall sub_41B370@<ax>(const char *a1@<eax>, int a2@<edx>)
{
  int v4; // edx
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v11; // [esp+8h] [ebp-74h]
  int v12; // [esp+10h] [ebp-6Ch]
  _BYTE v13[16]; // [esp+14h] [ebp-68h] BYREF
  int v14; // [esp+24h] [ebp-58h]

  if ( sub_443484(a1, v13) != 0 )
  {
    LOWORD(v5) = sub_417FE4(v4, "stat %s", a1);
    return v5;
  }
  LOWORD(v5) = v14 & 0xF000;
  if ( (v14 & 0xF000) == 0xA000 )
  {
    v6 = *(_BYTE *)(a2 + 12) == 0;
  }
  else
  {
    LOWORD(v5) = v5 - 0x4000;
    v6 = (v5 & 0xB000) == 0;
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    {
      v7 = *(_DWORD *)a2;
    }
    else
    {
      if ( sub_42F1FC((char)a1) != 0 )
      {
        LOWORD(v5) = sub_417FE4(v8, "reading flags on %s", a1);
LABEL_14:
        if ( *(_BYTE *)(a2 + 12) != 0 )
        {
          LOWORD(v5) = v14 & 0xF000;
          if ( (v14 & 0xF000) == 0x4000 )
            LOWORD(v5) = sub_43CB78(a1, (int)sub_41B8F8, a2);
        }
        return v5;
      }
      v7 = *(_DWORD *)a2 | v12 & ~*(_DWORD *)(a2 + 4);
    }
    v11 = v7;
    v5 = sub_42F1FC((char)a1);
    if ( v5 != 0 )
      LOWORD(v5) = sub_417FE4(v9, "setting flags on %s", v11);
    goto LABEL_14;
  }
  return v5;
}

