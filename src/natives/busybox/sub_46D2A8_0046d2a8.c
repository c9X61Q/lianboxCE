// busybox.exe @ 0x46d2a8 size=162

int __fastcall sub_46D2A8(int a1, int a2)
{
  _DWORD *v2; // ebx
  int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // edx
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v12; // [esp+0h] [ebp-Ch]

  v12 = a2;
  v2 = dword_48600C;
  if ( *((_DWORD *)dword_48600C + 5) < (unsigned int)(*((_DWORD *)dword_48600C + 6) - 1) )
  {
    v3 = *((_DWORD *)dword_48600C + 8);
    while ( 1 )
    {
      sub_43B1AC(a1, a2);
      v4 = v2[5];
      if ( v4 >= v2[6] - 1 )
        break;
      a2 = *(unsigned __int8 *)(v3 + v4);
      if ( (unsigned __int8)(a2 - 9) > 4u && (_BYTE)a2 != 32 )
      {
        v12 = a2;
        if ( (unsigned __int8)sub_411B90(a2) != 0 )
        {
          while ( 1 )
          {
            v5 = v2[5];
            if ( v5 >= v2[6] - 1 || (unsigned __int8)sub_411B90(*(_BYTE *)(v3 + v5 + 1)) == 0 )
              break;
            sub_43B1AC(v7, v6);
          }
        }
        else if ( *sub_4635B0("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", v12) != 0 )
        {
          while ( 1 )
          {
            v8 = v2[5];
            if ( v8 >= v2[6] - 1
              || *sub_4635B0("!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~", *(unsigned __int8 *)(v3 + v8 + 1)) == 0 )
            {
              break;
            }
            sub_43B1AC(v10, v9);
          }
        }
        return v12;
      }
    }
  }
  return v12;
}

