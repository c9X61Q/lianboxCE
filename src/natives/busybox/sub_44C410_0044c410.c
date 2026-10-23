// busybox.exe @ 0x44c410 size=1223

int __usercall sub_44C410@<eax>(unsigned __int8 *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebp
  int result; // eax
  int v8; // edx
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // dl
  int v11; // edi
  bool v12; // zf
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  int v16; // ebp
  unsigned __int8 v17; // [esp+6h] [ebp-1Eh]
  unsigned __int8 v18; // [esp+6h] [ebp-1Eh]
  unsigned __int8 v19; // [esp+7h] [ebp-1Dh]
  int v20; // [esp+8h] [ebp-1Ch]
  char v21; // [esp+10h] [ebp-14h]

  v4 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 40) <= v4 )
  {
    a1[4] = 2;
    return 0;
  }
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_BYTE *)(v8 + v4);
  *a1 = v9;
  v17 = a1[6] & 0xEF;
  a1[6] = v17;
  if ( v9 == 92 )
  {
    if ( v4 + 1 >= *(_DWORD *)(a2 + 32) )
    {
      a1[4] = 36;
      return 1;
    }
    if ( *(_BYTE *)(a2 + 59) != 0 )
      v10 = *(_BYTE *)(*(_DWORD *)(a2 + 8) + *(_DWORD *)a2 + v4 + 1);
    else
      v10 = *(_BYTE *)(v8 + v4 + 1);
    *a1 = v10;
    a1[4] = 1;
    v11 = v10;
    v18 = v10;
    a1[6] = (16 * (isalnum(v10) != 0 || v10 == 95)) | a1[6] & 0xEF;
    result = 2;
    if ( v18 <= 0x7Du )
    {
      if ( v18 > 0x72u )
      {
        switch ( v18 )
        {
          case 's':
            result = 2;
            if ( (a3 & 0x80000) == 0 )
              a1[4] = 34;
            break;
          case 'w':
            result = 2;
            if ( (a3 & 0x80000) == 0 )
              a1[4] = 32;
            break;
          case '{':
            result = 2;
            v14 = (a3 & 0x1200) == 512;
            goto LABEL_80;
          case '|':
            result = 2;
            if ( (a3 & 0x8400) == 0 )
              a1[4] = 10;
            break;
          case '}':
            result = 2;
            v15 = (a3 & 0x1200) == 512;
            goto LABEL_83;
          default:
LABEL_100:
            result = 2;
            break;
        }
      }
      else if ( v18 == 98 )
      {
        if ( (a3 & 0x80000) == 0 )
        {
          a1[4] = 12;
          *(_DWORD *)a1 = 256;
        }
      }
      else if ( v18 <= 0x62u )
      {
        if ( v18 == 96 )
        {
          if ( (a3 & 0x80000) == 0 )
          {
            a1[4] = 12;
            *(_DWORD *)a1 = 64;
          }
        }
        else if ( v18 <= 0x60u )
        {
          if ( v18 == 87 )
          {
            if ( (a3 & 0x80000) == 0 )
              a1[4] = 33;
          }
          else if ( v18 <= 0x57u )
          {
            if ( v18 > 0x42u )
            {
              result = 2;
              if ( v18 == 83 && (a3 & 0x80000) == 0 )
                a1[4] = 35;
            }
            else if ( v18 > 0x26u )
            {
              switch ( v18 )
              {
                case '\'':
                  result = 2;
                  if ( (a3 & 0x80000) == 0 )
                  {
                    a1[4] = 12;
                    *(_DWORD *)a1 = 128;
                  }
                  break;
                case '(':
                  result = 2;
                  if ( (a3 & 0x2000) == 0 )
                    goto LABEL_86;
                  break;
                case ')':
                  result = 2;
                  if ( (a3 & 0x2000) == 0 )
                    goto LABEL_88;
                  break;
                case '+':
                  result = 2;
                  v12 = (a3 & 0x402) == 2;
                  goto LABEL_74;
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                  result = 2;
                  if ( (a3 & 0x4000) == 0 )
                  {
                    a1[4] = 4;
                    *(_DWORD *)a1 = v11 - 49;
                  }
                  break;
                case '<':
                  result = 2;
                  if ( (a3 & 0x80000) == 0 )
                  {
                    a1[4] = 12;
                    *(_DWORD *)a1 = 6;
                  }
                  break;
                case '>':
                  result = 2;
                  if ( (a3 & 0x80000) == 0 )
                  {
                    a1[4] = 12;
                    *(_DWORD *)a1 = 9;
                  }
                  break;
                case '?':
                  result = 2;
                  v13 = (a3 & 0x402) == 2;
                  goto LABEL_77;
                case 'B':
                  result = 2;
                  if ( (a3 & 0x80000) == 0 )
                  {
                    a1[4] = 12;
                    *(_DWORD *)a1 = 512;
                  }
                  break;
                default:
                  goto LABEL_100;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v20 = v8;
    a1[4] = 1;
    v19 = v9;
    a1[6] = v17 | (16 * ((v9 == 95) | (isalnum(v9) != 0)));
    if ( v19 != 125 )
    {
      result = 1;
      if ( v19 > 0x7Du )
        return result;
      switch ( v19 )
      {
        case '|':
          if ( (a3 & 0x8400) != 0x8000 )
            return result;
          break;
        case '{':
          v14 = (a3 & 0x1200) == 4608;
LABEL_80:
          if ( v14 )
            a1[4] = 23;
          return result;
        case '^':
          if ( (a3 & 0x400008) != 0 || v4 == 0 || *(_BYTE *)(v20 + v4 - 1) == 10 && (a3 & 0x800) != 0 )
          {
            a1[4] = 12;
            *(_DWORD *)a1 = 16;
          }
          return 1;
        default:
          if ( v19 > 0x5Eu )
            return result;
          if ( v19 == 91 )
          {
            a1[4] = 20;
            return result;
          }
          if ( v19 > 0x5Bu )
            return result;
          if ( v19 == 63 )
          {
            result = 1;
            v13 = (a3 & 0x402) == 0;
LABEL_77:
            if ( v13 )
              a1[4] = 19;
            return result;
          }
          if ( v19 > 0x3Fu )
            return result;
          if ( v19 != 10 )
          {
            switch ( v19 )
            {
              case '$':
                if ( (a3 & 8) == 0 )
                {
                  v16 = v4 + 1;
                  if ( v16 != *(_DWORD *)(a2 + 32) )
                  {
                    *(_DWORD *)(a2 + 24) = v16;
                    sub_44C410(a3, a2);
                    --*(_DWORD *)(a2 + 24);
                    result = 1;
                    if ( (unsigned __int8)(v21 - 9) > 1u )
                      return result;
                  }
                }
                a1[4] = 12;
                *(_DWORD *)a1 = 32;
                break;
              case '%':
              case '&':
              case '\'':
              case ',':
              case '-':
                return 1;
              case '(':
                result = 1;
                if ( (a3 & 0x2000) != 0 )
LABEL_86:
                  a1[4] = 8;
                return result;
              case ')':
                result = 1;
                if ( (a3 & 0x2000) != 0 )
LABEL_88:
                  a1[4] = 9;
                return result;
              case '*':
                a1[4] = 11;
                return 1;
              case '+':
                result = 1;
                v12 = (a3 & 0x402) == 0;
LABEL_74:
                if ( v12 )
                  a1[4] = 18;
                return result;
              case '.':
                a1[4] = 5;
                return 1;
              default:
                return result;
            }
            return 1;
          }
          if ( (a3 & 0x800) == 0 )
            return result;
          break;
      }
      a1[4] = 10;
      return 1;
    }
    result = 1;
    v15 = (a3 & 0x1200) == 4608;
LABEL_83:
    if ( v15 )
      a1[4] = 24;
  }
  return result;
}

