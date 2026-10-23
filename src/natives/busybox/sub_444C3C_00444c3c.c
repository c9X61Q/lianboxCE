// busybox.exe @ 0x444c3c size=481

size_t __cdecl sub_444C3C(char *Buffer, size_t SizeInBytes, int a3, struct tm *a4)
{
  int v4; // ebx
  char *v5; // ebp
  char v6; // al
  char *v7; // esi
  int tm_isdst; // edx
  int v9; // eax
  char v10; // cl
  char *v11; // edi
  char *Format; // [esp+8h] [ebp-80h]
  size_t v14; // [esp+10h] [ebp-78h]
  struct tm Tm; // [esp+14h] [ebp-74h] BYREF
  char Str[80]; // [esp+38h] [ebp-50h] BYREF

  v4 = sub_47188C();
  v5 = (char *)v4;
  while ( *(_BYTE *)v4 != 0 )
  {
    if ( *(_BYTE *)v4 != 37 )
      goto LABEL_29;
    v6 = *(_BYTE *)(v4 + 1);
    switch ( v6 )
    {
      case 101:
        v7 = Str;
        if ( a4->tm_mday > 0x63u )
          strcpy(Str, "  ");
        else
          sub_462748(Str, "%2d", a4->tm_mday);
        goto LABEL_28;
      case 115:
        Tm = *a4;
        Format = (char *)mktime(&Tm);
        v7 = Str;
        sub_462748(Str, "%d", Format);
        goto LABEL_28;
      case 84:
        v7 = "%H:%M:%S";
LABEL_28:
        *(_BYTE *)v4 = 0;
        v11 = (char *)sub_4708BC("%s%s%s", v5, v7, (const char *)(v4 + 2));
        free(v5);
        v4 = (int)&v11[v4 - (_DWORD)v5 - 1 + strlen(v7)];
        v5 = v11;
        goto LABEL_29;
      case 122:
        tzset_0();
        tm_isdst = a4->tm_isdst;
        if ( tm_isdst < 0 )
        {
          Str[0] = 0;
        }
        else
        {
          if ( tm_isdst != 0 )
            tm_isdst = 3600;
          v9 = timezone - tm_isdst;
          v10 = 45;
          if ( timezone - tm_isdst <= 0 )
          {
            v9 = tm_isdst - timezone;
            v10 = 43;
          }
          Str[0] = v10;
          sub_462748(&Str[1], "%04d", 100 * (v9 / 3600) + v9 % 3600 / 60);
        }
        v7 = Str;
        goto LABEL_28;
      case 45:
        if ( *(_BYTE *)(v4 + 2) != 0 && strchr("dHIjmMSUwWyY", *(unsigned __int8 *)(v4 + 2)) != nullptr )
        {
          *(_BYTE *)(v4 + 1) = 35;
          goto LABEL_29;
        }
        break;
      case 0:
        goto LABEL_29;
      default:
        break;
    }
    ++v4;
LABEL_29:
    ++v4;
  }
  v14 = strftime(Buffer, SizeInBytes, v5, a4);
  free(v5);
  return v14;
}

