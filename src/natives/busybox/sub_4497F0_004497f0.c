// busybox.exe @ 0x4497f0 size=1147

int __usercall sub_4497F0@<eax>(int Str@<eax>, int *a2@<edx>)
{
  int v4; // eax
  int result; // eax
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  bool v10; // of
  char v11; // cc
  unsigned int v12; // eax
  unsigned int v13; // edx
  char *v14; // eax
  char *v15; // [esp+20h] [ebp-24h]
  int v16; // [esp+20h] [ebp-24h]
  int *v17; // [esp+24h] [ebp-20h]
  char v18; // [esp+2Fh] [ebp-15h] BYREF
  __time32_t Time; // [esp+30h] [ebp-14h] BYREF

  v18 = 0;
  v15 = strrchr((const char *)Str, 58);
  if ( v15 == nullptr )
  {
    if ( strchr((const char *)Str, 45) != nullptr )
    {
      result = sub_462964(Str, "%u-%u-%u %u%c", a2 + 5, a2 + 4, a2 + 3, a2 + 2, &v18);
      if ( result > 3 || (result = sub_462964(Str, "%u-%u-%u%c", a2 + 5, a2 + 4, a2 + 3, &v18)) > 2 )
      {
        a2[5] -= 1900;
        --a2[4];
LABEL_59:
        v6 = v18 == 0;
        goto LABEL_10;
      }
    }
    if ( *(_BYTE *)Str == 64 )
    {
      Time = sub_4182BC(10, (char *)(Str + 1), nullptr);
      if ( *_errno() != 0 || (result = (int)localtime(&Time)) == 0 )
      {
        v18 = 49;
        goto LABEL_51;
      }
      qmemcpy(a2, (const void *)result, 0x24u);
      return result;
    }
    v16 = a2[5];
    v8 = sub_4635B0(v7, 46) - Str;
    switch ( v8 )
    {
      case 2:
        result = sub_462964(Str, "%2u%c", a2 + 1, &v18);
        if ( result > 0 )
        {
LABEL_49:
          *a2 = 0;
          if ( v18 != 46 )
            goto LABEL_58;
          v14 = strchr((const char *)Str, 46);
          result = sub_462964(v14 + 1, "%u%c", a2, &v18) - 1;
          if ( result == 0 )
            v18 = 0;
          if ( *a2 <= 60 )
          {
LABEL_58:
            if ( a2[1] <= 59 && a2[2] <= 23 && a2[3] <= 31 && a2[4] <= 11 )
              goto LABEL_59;
          }
        }
LABEL_51:
        sub_41784C("invalid date '%s'", (const char *)Str);
      case 4:
        v9 = sub_462964(Str, "%2u%2u%c", a2 + 2, a2 + 1, &v18);
        v10 = __OFSUB__(v9, 1);
        result = v9 - 1;
        v11 = (result < 0) ^ v10 | (result == 0);
        break;
      case 6:
        result = sub_462964(Str, "%2u%2u%2u%c", a2 + 3, a2 + 2, a2 + 1, &v18);
        v11 = result <= 2;
        break;
      default:
        switch ( v8 )
        {
          case 8:
            result = sub_462964(Str, "%2u%2u%2u%2u%c", a2 + 4, a2 + 3, a2 + 2, a2 + 1, &v18);
            if ( result <= 3 )
              goto LABEL_51;
            break;
          case 10:
            result = sub_462964(Str, "%2u%2u%2u%2u%2u%c", a2 + 5, a2 + 4, a2 + 3, a2 + 2, a2 + 1, &v18);
            if ( result <= 4 )
              goto LABEL_51;
            --a2[4];
            if ( v16 > 49 )
            {
              v12 = a2[5] + 100 * (v16 / 0x64u);
              if ( v12 < v16 - 50 )
                v12 += 100;
              a2[5] = v12;
              v13 = a2[5];
              result = v16 + 50;
              if ( v13 > v16 + 50 )
                a2[5] = v13 - 100;
            }
            goto LABEL_49;
          case 12:
            result = sub_462964(Str, "%4u%2u%2u%2u%2u%c", a2 + 5, a2 + 4, a2 + 3, a2 + 2, a2 + 1, &v18);
            if ( result <= 4 )
              goto LABEL_51;
            a2[5] -= 1900;
            break;
          default:
            goto LABEL_51;
        }
        --a2[4];
        goto LABEL_49;
    }
    if ( v11 )
      goto LABEL_51;
    goto LABEL_49;
  }
  v4 = sub_462964(Str, "%u:%u%c", a2 + 2, a2 + 1, &v18);
  v11 = v4 <= 1;
  result = v4 - 1;
  if ( !v11 )
  {
LABEL_12:
    if ( v18 == 58 )
    {
      result = sub_462964(v15 + 1, "%u%c", a2, &v18) - 1;
      if ( result == 0 )
        return result;
    }
    goto LABEL_59;
  }
  v17 = a2 + 3;
  result = sub_462964(Str, "%u.%u-%u:%u%c", a2 + 4, a2 + 3, a2 + 2, a2 + 1, &v18);
  if ( result > 3 )
  {
LABEL_6:
    --a2[4];
    goto LABEL_12;
  }
  result = sub_462964(Str, "%u.%u.%u-%u:%u%c", a2 + 5, a2 + 4, v17, a2 + 2, a2 + 1, &v18);
  if ( result > 4 || (result = sub_462964(Str, "%u-%u-%u %u:%u%c", a2 + 5, a2 + 4, v17, a2 + 2, a2 + 1, &v18)) > 4 )
  {
    a2[5] -= 1900;
    goto LABEL_6;
  }
  result = sub_4639A8(Str, "%b %d %T %Y", a2);
  if ( result == 0 )
    goto LABEL_51;
  v6 = *(_BYTE *)result == 0;
LABEL_10:
  if ( !v6 )
    goto LABEL_51;
  return result;
}

