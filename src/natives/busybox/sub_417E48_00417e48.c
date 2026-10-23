// busybox.exe @ 0x417e48 size=411

unsigned int __usercall sub_417E48@<eax>(const char *String@<eax>, int a2@<edx>, int a3@<ecx>)
{
  const char *v3; // esi
  unsigned int result; // eax
  int v6; // edx
  const char *v7; // eax
  _BYTE *v8; // eax
  unsigned int v9; // edi
  char v10; // al
  const char *v11; // ebp
  int v12; // ebp
  int v13; // ebp
  int v14; // edi
  char v15; // [esp+Dh] [ebp-1Bh]
  __int16 v16; // [esp+Eh] [ebp-1Ah]
  int v17; // [esp+10h] [ebp-18h]
  char *EndPtr; // [esp+14h] [ebp-14h] BYREF

  v3 = String;
  if ( (unsigned __int8)(*String - 48) > 7u )
  {
    while ( 1 )
    {
LABEL_6:
      if ( *v3 == 0 )
        return (unsigned __int16)a2;
      if ( *v3 != 44 )
        break;
      ++v3;
    }
    v6 = 0;
    while ( 2 )
    {
      v7 = "augo";
      while ( *v7 != *v3 )
      {
        if ( *++v7 == 0 )
        {
          v16 = -4096;
          if ( (_WORD)v6 != 0 )
            v16 = ~(_WORD)v6;
          do
          {
            v15 = *v3;
            if ( ((*v3 - 43) & 0xFD) != 0 )
            {
              if ( v15 != 61 )
                return -1;
              LOWORD(a2) = v16 & a2;
            }
            v8 = "augo" + 1;
            do
            {
              if ( *v8 == v3[1] )
              {
                LOWORD(a3) = word_484B08[v8 - "augo"];
                a3 &= a2;
                v9 = a3 & 0xFFFF01FF;
                if ( (a3 & 0x124) != 0 )
                  LOWORD(v9) = a3 & 0xDB | 0x124;
                if ( (v9 & 0x92) != 0 )
                  LOWORD(v9) = v9 | 0x92;
                if ( (v9 & 0x49) != 0 )
                  v9 |= 0x49u;
                v3 += 2;
                goto LABEL_38;
              }
              ++v8;
            }
            while ( *v8 != 0 );
            ++v3;
            v9 = 0;
            HIWORD(a3) = HIWORD(a2);
            do
            {
              v10 = *v3;
              v11 = "rwxXst";
              while ( *v11 != v10 )
              {
                if ( *++v11 == 0 )
                  goto LABEL_38;
              }
              if ( v10 != 88 || (a2 & 0x4049) != 0 )
                LOWORD(v9) = word_483A14[v11 - "rwxXst"] | v9;
              ++v3;
            }
            while ( *v3 != 0 );
LABEL_38:
            if ( (_WORD)v9 != 0 )
            {
              v12 = v6;
              if ( (_WORD)v6 == 0 )
              {
                v17 = v6;
                v13 = sub_444EA4(0);
                sub_444EA4((unsigned __int16)v13);
                v12 = ~v13;
                v6 = v17;
              }
              v14 = v12 & v9;
              if ( v15 == 45 )
                a2 &= ~v14;
              else
                a2 |= v14;
            }
          }
          while ( *v3 != 44 && *v3 != 0 );
          goto LABEL_6;
        }
      }
      LOWORD(v6) = word_484B08[v7 - "augo"] | v6;
      if ( *++v3 != 0 )
        continue;
      return -1;
    }
  }
  result = strtoul(String, &EndPtr, 8);
  if ( *EndPtr != 0 || result > 0xFFF )
    return -1;
  return result;
}

