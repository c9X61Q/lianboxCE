// gettime.exe @ 0x41674e size=1550

int __cdecl __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>,1>(
        __crt_cached_ptd_host *a1,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        int a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  bool v7; // zf
  char v8; // bl
  unsigned __int16 *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  int v17; // eax
  bool v18; // cf
  int v19; // ecx
  unsigned int v20; // edx
  bool v21; // cl
  int v23; // esi
  unsigned __int16 *v24; // [esp+Ch] [ebp-90h]
  unsigned int v25; // [esp+98h] [ebp-4h]

  if ( unknown_libname_78(&a2) == 0 )
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
  v25 = 0;
  v24 = a2;
  v6 = *a2;
  v7 = *((_BYTE *)a1 + 20) == 0;
  ++a2;
  if ( v7 )
    __crt_cached_ptd_host::update_locale_slow(a1);
  while ( iswctype(v6, 8u) != 0 )
    v6 = *a2++;
  v8 = a5;
  if ( v6 == 45 )
  {
    v8 = a5 | 2;
  }
  else if ( v6 != 43 )
  {
    v9 = a2;
    goto LABEL_17;
  }
  v6 = *a2;
  v9 = ++a2;
LABEL_17:
  v10 = 48;
  if ( v5 == 0 || v5 == 16 )
  {
    if ( v6 >= 0x30u )
    {
      if ( v6 < 0x3Au )
      {
LABEL_21:
        v11 = v6 - v10;
        goto LABEL_58;
      }
      if ( v6 >= 0xFF10u )
      {
        if ( v6 < 0xFF1Au )
        {
          v11 = v6 - 65296;
LABEL_58:
          if ( v11 != -1 )
            goto LABEL_66;
        }
      }
      else
      {
        v10 = 1632;
        if ( v6 >= 0x660u )
        {
          if ( v6 < 0x66Au )
            goto LABEL_21;
          v10 = 1776;
          if ( v6 >= 0x6F0u )
          {
            if ( v6 < 0x6FAu )
              goto LABEL_21;
            v10 = 2406;
            if ( v6 >= 0x966u )
            {
              if ( v6 < 0x970u )
                goto LABEL_21;
              v10 = 2534;
              if ( v6 >= 0x9E6u )
              {
                if ( v6 < 0x9F0u )
                  goto LABEL_21;
                v10 = 2662;
                if ( v6 >= 0xA66u )
                {
                  if ( v6 < 0xA70u )
                    goto LABEL_21;
                  v10 = 2790;
                  if ( v6 >= 0xAE6u )
                  {
                    if ( v6 < 0xAF0u )
                      goto LABEL_21;
                    v10 = 2918;
                    if ( v6 >= 0xB66u )
                    {
                      if ( v6 < 0xB70u )
                        goto LABEL_21;
                      v10 = 3174;
                      if ( v6 >= 0xC66u )
                      {
                        if ( v6 < 0xC70u )
                          goto LABEL_21;
                        v10 = 3302;
                        if ( v6 >= 0xCE6u )
                        {
                          if ( v6 < 0xCF0u )
                            goto LABEL_21;
                          v10 = 3430;
                          if ( v6 >= 0xD66u )
                          {
                            if ( v6 < 0xD70u )
                              goto LABEL_21;
                            v10 = 3664;
                            if ( v6 >= 0xE50u )
                            {
                              if ( v6 < 0xE5Au )
                                goto LABEL_21;
                              v10 = 3792;
                              if ( v6 >= 0xED0u )
                              {
                                if ( v6 < 0xEDAu )
                                  goto LABEL_21;
                                v10 = 3872;
                                if ( v6 >= 0xF20u )
                                {
                                  if ( v6 < 0xF2Au )
                                    goto LABEL_21;
                                  v10 = 4160;
                                  if ( v6 >= 0x1040u )
                                  {
                                    if ( v6 < 0x104Au )
                                      goto LABEL_21;
                                    v10 = 6112;
                                    if ( v6 >= 0x17E0u )
                                    {
                                      if ( v6 < 0x17EAu )
                                        goto LABEL_21;
                                      v10 = 6160;
                                      if ( v6 >= 0x1810u && v6 < 0x181Au )
                                        goto LABEL_21;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v12 = v6;
    if ( v6 < 0x41u || v6 > 0x5Au )
    {
      v13 = v6 - 97;
      if ( v13 > 0x19 )
        goto LABEL_75;
    }
    else
    {
      v13 = v6 - 97;
    }
    if ( v13 <= 0x19 )
      v12 = v6 - 32;
    v11 = v12 - 55;
LABEL_66:
    if ( v11 == 0 )
    {
      v14 = *v9;
      a2 = v9 + 1;
      if ( v14 == 120 || v14 == 88 )
      {
        if ( v5 == 0 )
        {
          v5 = 16;
          a4 = 16;
        }
        v6 = v9[1];
        a2 = v9 + 2;
      }
      else
      {
        if ( v5 == 0 )
        {
          v5 = 8;
          a4 = 8;
        }
        __crt_strtox::c_string_character_source<wchar_t>::unget(&a2, v14);
      }
      goto LABEL_77;
    }
LABEL_75:
    if ( v5 == 0 )
    {
      v5 = 10;
      a4 = 10;
    }
  }
LABEL_77:
  v15 = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    if ( v6 < 0x30u )
      goto LABEL_118;
    if ( v6 < 0x3Au )
    {
      v16 = v6 - 48;
      goto LABEL_117;
    }
    v17 = 65296;
    if ( v6 >= 0xFF10u )
    {
      v18 = v6 < 0xFF1Au;
    }
    else
    {
      v17 = 1632;
      if ( v6 < 0x660u )
        goto LABEL_118;
      if ( v6 < 0x66Au )
        goto LABEL_116;
      v17 = 1776;
      if ( v6 < 0x6F0u )
        goto LABEL_118;
      if ( v6 < 0x6FAu )
        goto LABEL_116;
      v17 = 2406;
      if ( v6 < 0x966u )
        goto LABEL_118;
      if ( v6 < 0x970u )
        goto LABEL_116;
      v17 = 2534;
      if ( v6 < 0x9E6u )
        goto LABEL_118;
      if ( v6 < 0x9F0u )
        goto LABEL_116;
      v17 = 2662;
      if ( v6 < 0xA66u )
        goto LABEL_118;
      if ( v6 < 0xA70u )
        goto LABEL_116;
      v17 = 2790;
      if ( v6 < 0xAE6u )
        goto LABEL_118;
      if ( v6 < 0xAF0u )
        goto LABEL_116;
      v17 = 2918;
      if ( v6 < 0xB66u )
        goto LABEL_118;
      if ( v6 < 0xB70u )
        goto LABEL_116;
      v17 = 3174;
      if ( v6 < 0xC66u )
        goto LABEL_118;
      if ( v6 < 0xC70u )
        goto LABEL_116;
      v17 = 3302;
      if ( v6 < 0xCE6u )
        goto LABEL_118;
      if ( v6 < 0xCF0u )
        goto LABEL_116;
      v17 = 3430;
      if ( v6 < 0xD66u )
        goto LABEL_118;
      if ( v6 < 0xD70u )
        goto LABEL_116;
      v17 = 3664;
      if ( v6 < 0xE50u )
        goto LABEL_118;
      if ( v6 < 0xE5Au )
        goto LABEL_116;
      v17 = 3792;
      if ( v6 < 0xED0u )
        goto LABEL_118;
      if ( v6 < 0xEDAu )
        goto LABEL_116;
      v17 = 3872;
      if ( v6 < 0xF20u )
        goto LABEL_118;
      if ( v6 < 0xF2Au )
        goto LABEL_116;
      v17 = 4160;
      if ( v6 < 0x1040u )
        goto LABEL_118;
      if ( v6 < 0x104Au )
        goto LABEL_116;
      v17 = 6112;
      if ( v6 < 0x17E0u )
        goto LABEL_118;
      if ( v6 < 0x17EAu )
        goto LABEL_116;
      v17 = 6160;
      if ( v6 < 0x1810u )
        goto LABEL_118;
      v18 = v6 < 0x181Au;
    }
    if ( v18 )
    {
LABEL_116:
      v16 = v6 - v17;
LABEL_117:
      if ( v16 != -1 )
        goto LABEL_126;
    }
LABEL_118:
    if ( ((v19 = v6, v6 < 0x41u) || v6 > 0x5Au) && (v6 < 0x61u || v6 > 0x7Au) )
    {
      v16 = -1;
    }
    else
    {
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v19 = v6 - 32;
      v16 = v19 - 55;
    }
LABEL_126:
    if ( v16 >= a4 )
      break;
    v20 = a4 * v25 + v16;
    v21 = v20 < a4 * v25;
    v18 = v15 < v25;
    v25 = v20;
    v8 |= (4 * (v18 || v21)) | 8;
    v6 = *a2++;
  }
  __crt_strtox::c_string_character_source<wchar_t>::unget(&a2, v6);
  if ( (v8 & 8) != 0 )
  {
    v23 = v25;
    if ( __crt_strtox::is_overflow_condition<unsigned long>(v8, v25) )
    {
      *((_BYTE *)a1 + 28) = 1;
      *((_DWORD *)a1 + 6) = 34;
      if ( (v8 & 1) != 0 )
      {
        if ( (v8 & 2) != 0 )
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
      v23 = -1;
    }
    else if ( (v8 & 2) != 0 )
    {
      v23 = -v25;
    }
    if ( a3 != nullptr )
      *a3 = a2;
    return v23;
  }
  if ( a3 != nullptr )
    *a3 = v24;
  return 0;
}

