// gettime.exe @ 0x413c83 size=326

int __cdecl _seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  void (__cdecl *v8)(int, int); // edi
  int v9; // edx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // [esp+8h] [ebp-4h]

  v2 = (_DWORD *)unknown_libname_96();
  v3 = v2;
  if ( v2 == nullptr )
    return 0;
  v4 = *v2;
  v5 = (_DWORD *)*v2;
  v6 = *v2 + 144;
  if ( *v3 == v6 )
    return 0;
  while ( *v5 != ExceptionNum )
  {
    v5 += 3;
    if ( v5 == (_DWORD *)v6 )
      return 0;
  }
  if ( v5 == nullptr )
    return 0;
  v8 = (void (__cdecl *)(int, int))v5[2];
  if ( v8 == nullptr )
    return 0;
  if ( v8 == (void (__cdecl *)(int, int))5 )
  {
    v5[2] = 0;
    return 1;
  }
  if ( v8 != (void (__cdecl *)(int, int))1 )
  {
    v13 = v3[1];
    v3[1] = ExceptionPtr;
    if ( v5[1] != 8 )
    {
      v5[2] = 0;
      ((void (__cdecl *)(_DWORD))v8)(v5[1]);
      goto LABEL_38;
    }
    v9 = v4 + 36;
    v10 = v9 + 108;
    while ( v9 != v10 )
    {
      *(_DWORD *)(v9 + 8) = 0;
      v9 += 12;
    }
    v11 = v3[2];
    if ( *v5 > 0xC0000091 )
    {
      switch ( *v5 )
      {
        case 0xC0000092:
          v12 = 138;
          goto LABEL_35;
        case 0xC0000093:
          v12 = 133;
          goto LABEL_35;
        case 0xC00002B4:
          v12 = 142;
          goto LABEL_35;
        default:
          break;
      }
      v12 = v3[2];
      if ( *v5 == -1073741131 )
      {
        v12 = 141;
        goto LABEL_35;
      }
    }
    else
    {
      switch ( *v5 )
      {
        case 0xC0000091:
          v12 = 132;
          goto LABEL_35;
        case 0xC000008D:
          v12 = 130;
          goto LABEL_35;
        case 0xC000008E:
          v12 = 131;
          goto LABEL_35;
        case 0xC000008F:
          v12 = 134;
          goto LABEL_35;
        default:
          break;
      }
      v12 = v3[2];
      if ( *v5 == -1073741680 )
      {
        v12 = 129;
LABEL_35:
        v3[2] = v12;
      }
    }
    v8(8, v12);
    v3[2] = v11;
LABEL_38:
    v3[1] = v13;
  }
  return -1;
}

