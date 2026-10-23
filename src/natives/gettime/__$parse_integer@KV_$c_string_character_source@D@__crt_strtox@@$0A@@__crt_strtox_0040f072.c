// gettime.exe @ 0x40f072 size=527

int __cdecl __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<char>,0>(
        __crt_cached_ptd_host *a1,
        char *a2,
        char **a3,
        int a4,
        char a5)
{
  unsigned int v5; // esi
  unsigned int v6; // ecx
  char v7; // bl
  char *v8; // edi
  int v9; // eax
  char v10; // al
  char *v11; // edi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  bool v14; // cf
  int v16; // esi
  char *v17; // [esp+8h] [ebp-14h]
  unsigned int v18; // [esp+10h] [ebp-Ch]
  char v19; // [esp+14h] [ebp-8h]
  char v20; // [esp+18h] [ebp-4h]

  if ( (unsigned __int8)unknown_libname_78(&a2) == 0 )
    goto LABEL_6;
  v5 = a4;
  if ( a4 != 0 && (a4 < 2 || a4 > 36) )
  {
    *((_BYTE *)a1 + 28) = 1;
    *((_DWORD *)a1 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a1);
LABEL_6:
    if ( a3 != nullptr )
      *a3 = a2;
    return 0;
  }
  v6 = 0;
  v17 = a2;
  v18 = 0;
  v7 = *a2;
  v8 = a2 + 1;
  v20 = v7;
  ++a2;
  v19 = a5;
  if ( v7 == 45 )
  {
    v19 = a5 | 2;
LABEL_11:
    v7 = *v8++;
    v20 = v7;
    a2 = v8;
    goto LABEL_12;
  }
  if ( v7 == 43 )
    goto LABEL_11;
LABEL_12:
  if ( a4 != 0 && a4 != 16 )
    goto LABEL_31;
  if ( (unsigned __int8)(v7 - 48) > 9u )
  {
    if ( (unsigned __int8)(v7 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v7 - 65) > 0x19u )
        goto LABEL_29;
      v9 = v7 - 55;
    }
    else
    {
      v9 = v7 - 87;
    }
  }
  else
  {
    v9 = v7 - 48;
  }
  if ( v9 == 0 )
  {
    v10 = *v8;
    v11 = v8 + 1;
    a2 = v11;
    if ( v10 == 120 || v10 == 88 )
    {
      if ( a4 == 0 )
        v5 = 16;
      v7 = *v11;
      v8 = v11 + 1;
      v20 = v7;
      a2 = v8;
    }
    else
    {
      if ( a4 == 0 )
        v5 = 8;
      __crt_strtox::c_string_character_source<char>::unget(v10);
      v8 = a2;
      v6 = 0;
    }
    goto LABEL_31;
  }
LABEL_29:
  if ( a4 == 0 )
    v5 = 10;
LABEL_31:
  while ( 1 )
  {
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v12 = (unsigned __int8)(v7 - 65) > 0x19u ? -1 : v7 - 55;
      else
        v12 = v7 - 87;
    }
    else
    {
      v12 = v7 - 48;
    }
    if ( v12 >= v5 )
      break;
    v13 = v5 * v6;
    v7 = *v8;
    v20 = *v8;
    v14 = 0xFFFFFFFF / v5 < v18;
    v18 = v13 + v12;
    v19 |= (4 * (v14 || v13 + v12 < v13)) | 8;
    ++v8;
    v6 = v13 + v12;
    a2 = v8;
  }
  __crt_strtox::c_string_character_source<char>::unget(v20);
  if ( (v19 & 8) == 0 )
  {
    if ( a3 != nullptr )
      *a3 = v17;
    return 0;
  }
  v16 = v18;
  if ( !__crt_strtox::is_overflow_condition<unsigned long>(v19, v18) )
  {
    if ( (v19 & 2) != 0 )
      v16 = -v18;
    goto LABEL_56;
  }
  *((_BYTE *)a1 + 28) = 1;
  *((_DWORD *)a1 + 6) = 34;
  if ( (v19 & 1) == 0 )
  {
    v16 = -1;
LABEL_56:
    if ( a3 != nullptr )
      *a3 = a2;
    return v16;
  }
  if ( (v19 & 2) != 0 )
  {
    if ( a3 != nullptr )
      *a3 = a2;
    return 0x80000000;
  }
  else
  {
    if ( a3 != nullptr )
      *a3 = a2;
    return 0x7FFFFFFF;
  }
}

