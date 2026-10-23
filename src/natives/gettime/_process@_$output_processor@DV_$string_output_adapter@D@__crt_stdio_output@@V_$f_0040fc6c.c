// gettime.exe @ 0x40fc6c size=707

int __thiscall __crt_stdio_output::output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>>>::process(
        int this)
{
  char *v2; // ecx
  int v3; // eax
  int v5; // eax
  char v6; // dl
  char v7; // al
  int v8; // edi
  int ctype_array_value; // eax
  int *v10; // edi
  _DWORD *v11; // ecx
  char *v12; // eax
  char v13; // cl
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int *v17; // eax
  char v18; // al
  int *v19; // ecx
  int v20; // eax
  int *v21; // ecx
  int v22; // eax
  char *v23; // eax
  char v24; // dl
  char v25; // al
  int v26; // ecx
  char v27; // [esp+Fh] [ebp-5h]
  char v28; // [esp+13h] [ebp-1h]
  char v29; // [esp+13h] [ebp-1h]

  if ( (unsigned __int8)unknown_libname_79(*(__crt_cached_ptd_host **)(this + 8)) == 0 )
    return -1;
  v2 = *(char **)(this + 12);
  if ( v2 == nullptr )
  {
LABEL_3:
    v3 = *(_DWORD *)(this + 8);
    *(_DWORD *)(v3 + 24) = 22;
    *(_BYTE *)(v3 + 28) = 1;
LABEL_4:
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, *(struct __acrt_ptd ***)(this + 8));
    return -1;
  }
  v5 = *(_DWORD *)(this + 1104) + 1;
  *(_DWORD *)(this + 1104) = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(this + 52) = 0;
      *(_BYTE *)(this + 24) = 0;
      v6 = *v2++;
      v28 = v6;
      *(_DWORD *)(this + 12) = v2;
      *(_BYTE *)(this + 45) = v6;
      if ( v6 != 0 )
      {
        v27 = v6;
        while ( *(int *)(this + 20) >= 0 )
        {
          v7 = unknown_libname_71(v27, *(_BYTE *)(this + 24));
          *(_BYTE *)(this + 24) = v7;
          switch ( v7 )
          {
            case 0:
              v8 = *(_DWORD *)(this + 8);
              *(_BYTE *)(this + 56) = 0;
              if ( *(_BYTE *)(v8 + 20) == 0 )
                __crt_cached_ptd_host::update_locale_slow((__crt_cached_ptd_host *)v8);
              v29 = *(_BYTE *)(this + 45);
              ctype_array_value = __acrt_locale_get_ctype_array_value(
                                    **(const unsigned __int16 *const **)(v8 + 12),
                                    v29,
                                    0x8000);
              v10 = (int *)(this + 1096);
              if ( ctype_array_value != 0 )
              {
                v11 = (_DWORD *)*v10;
                if ( *(_DWORD *)(*v10 + 8) == *(_DWORD *)(*v10 + 4) )
                {
                  if ( *((_BYTE *)v11 + 12) != 0 )
                    ++*(_DWORD *)(this + 20);
                  else
                    *(_DWORD *)(this + 20) = -1;
                }
                else
                {
                  ++*(_DWORD *)(this + 20);
                  ++v11[2];
                  *(_BYTE *)(*(_DWORD *)*v10)++ = v29;
                }
                v12 = *(char **)(this + 12);
                v13 = *v12;
                *(_DWORD *)(this + 12) = v12 + 1;
                *(_BYTE *)(this + 45) = v13;
                if ( v13 == 0 )
                {
                  v14 = *(_DWORD *)(this + 8);
                  *(_BYTE *)(v14 + 28) = 1;
                  *(_DWORD *)(v14 + 24) = 22;
                  _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, *(struct __acrt_ptd ***)(this + 8));
                  v15 = *(_DWORD *)(this + 8);
                  *(_BYTE *)(v15 + 28) = 1;
                  *(_DWORD *)(v15 + 24) = 22;
                  _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, *(struct __acrt_ptd ***)(this + 8));
                  return -1;
                }
              }
              else
              {
                v13 = v29;
              }
              v16 = *v10;
              if ( *(_DWORD *)(*v10 + 8) == *(_DWORD *)(*v10 + 4) )
              {
                if ( *(_BYTE *)(v16 + 12) != 0 )
                  ++*(_DWORD *)(this + 20);
                else
                  *(_DWORD *)(this + 20) = -1;
              }
              else
              {
                ++*(_DWORD *)(this + 20);
                ++*(_DWORD *)(v16 + 8);
                *(_BYTE *)(*(_DWORD *)*v10)++ = v13;
              }
LABEL_52:
              v23 = *(char **)(this + 12);
              v24 = *v23;
              v2 = v23 + 1;
              *(_DWORD *)(this + 12) = v23 + 1;
              v28 = v24;
              *(_BYTE *)(this + 45) = v24;
              v27 = v24;
              if ( v24 == 0 )
                goto LABEL_53;
              break;
            case 1:
              *(_DWORD *)(this + 36) = -1;
              *(_DWORD *)(this + 32) = 0;
              *(_BYTE *)(this + 44) = 0;
              *(_DWORD *)(this + 28) = 0;
              *(_DWORD *)(this + 40) = 0;
              *(_BYTE *)(this + 56) = 0;
              goto LABEL_52;
            case 2:
              switch ( v28 )
              {
                case ' ':
                  *(_DWORD *)(this + 28) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(this + 28) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(this + 28) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(this + 28) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(this + 28) |= 8u;
                  break;
                default:
                  break;
              }
              goto LABEL_52;
            case 3:
              if ( v28 != 42 )
              {
                v17 = (int *)(this + 32);
                goto LABEL_40;
              }
              v19 = *(int **)(this + 16);
              *(_DWORD *)(this + 16) = v19 + 1;
              v20 = *v19;
              *(_DWORD *)(this + 32) = *v19;
              if ( v20 < 0 )
              {
                *(_DWORD *)(this + 28) |= 4u;
                *(_DWORD *)(this + 32) = -v20;
              }
              goto LABEL_43;
            case 4:
              *(_DWORD *)(this + 36) = 0;
              goto LABEL_52;
            case 5:
              if ( v28 == 42 )
              {
                v21 = *(int **)(this + 16);
                *(_DWORD *)(this + 16) = v21 + 1;
                v22 = *v21;
                *(_DWORD *)(this + 36) = *v21;
                if ( v22 < 0 )
                  *(_DWORD *)(this + 36) = -1;
LABEL_43:
                v18 = 1;
              }
              else
              {
                v17 = (int *)(this + 36);
LABEL_40:
                v18 = unknown_libname_72((__crt_cached_ptd_host **)this, v17);
              }
LABEL_51:
              if ( v18 != 0 )
                goto LABEL_52;
              return -1;
            case 6:
              v18 = sub_40FF50(this);
              goto LABEL_51;
            case 7:
              v18 = sub_4100A9(this);
              goto LABEL_51;
            default:
              v26 = *(_DWORD *)(this + 8);
              *(_BYTE *)(v26 + 28) = 1;
              *(_DWORD *)(v26 + 24) = 22;
              goto LABEL_4;
          }
        }
      }
LABEL_53:
      v25 = *(_BYTE *)(this + 24);
      if ( v25 != 0 && v25 != 7 )
        goto LABEL_3;
      if ( ++*(_DWORD *)(this + 1104) == 2 )
        return *(_DWORD *)(this + 20);
    }
  }
  return *(_DWORD *)(this + 20);
}

