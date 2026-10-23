// busybox.exe @ 0x46d204 size=162

int __fastcall sub_46D204(int a1, int a2)
{
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // eax
  char v5; // dl
  int v6; // eax
  int v7; // eax

  v2 = dword_48600C;
  if ( *((_DWORD *)dword_48600C + 5) != 0 )
  {
    v3 = *((_DWORD *)dword_48600C + 8);
    while ( 1 )
    {
      sub_43B090(1u);
      v4 = v2[5];
      if ( v4 == 0 )
        break;
      v5 = *(_BYTE *)(v3 + v4);
      if ( (unsigned __int8)(v5 - 9) > 4u && v5 != 32 )
      {
        a2 = *(unsigned __int8 *)(v3 + v4);
        if ( (unsigned __int8)sub_411B90(v5) != 0 )
        {
          while ( 1 )
          {
            v6 = v2[5];
            if ( v6 == 0 || (unsigned __int8)sub_411B90(*(_BYTE *)(v3 + v6 - 1)) == 0 )
              break;
            sub_43B090(1u);
          }
        }
        else if ( *sub_4635B0("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", a2) != 0 )
        {
          while ( 1 )
          {
            v7 = v2[5];
            if ( v7 == 0 || *sub_4635B0("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", *(unsigned __int8 *)(v3 + v7 - 1)) == 0 )
              break;
            sub_43B090(1u);
          }
        }
        return a2;
      }
    }
  }
  return a2;
}

