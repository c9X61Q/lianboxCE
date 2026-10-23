// gettime.exe @ 0x41f5f9 size=380

int __cdecl common_expand_argv_wildcards<char>(unsigned __int8 **a1, _DWORD *a2)
{
  const char **v3; // ecx
  unsigned __int8 **v4; // ebx
  const char **v5; // edi
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  int v8; // esi
  int v9; // eax
  const char **v10; // esi
  int v11; // ebx
  unsigned int v12; // eax
  const char *v13; // edx
  char *buffer_for_argv; // eax
  char *v15; // esi
  char *v16; // eax
  const char **v17; // ebx
  char *v18; // edx
  const char *v19; // ecx
  const char *v20; // edx
  const char *v21; // [esp-10h] [ebp-34h]
  int v22; // [esp+4h] [ebp-20h] BYREF
  const char **v23; // [esp+8h] [ebp-1Ch]
  int v24; // [esp+Ch] [ebp-18h]
  int v25; // [esp+10h] [ebp-14h]
  char *v26; // [esp+14h] [ebp-10h]
  const char *v27; // [esp+18h] [ebp-Ch]
  unsigned int v28; // [esp+1Ch] [ebp-8h]
  char Control[4]; // [esp+20h] [ebp-4h] BYREF

  if ( a2 != nullptr )
  {
    *a2 = 0;
    v3 = nullptr;
    v24 = 0;
    v4 = a1;
    v5 = nullptr;
    v23 = nullptr;
    v22 = 0;
    v6 = *a1;
    if ( *a1 != nullptr )
    {
      while ( 1 )
      {
        strcpy(Control, "*?");
        v7 = (unsigned __int8 *)strpbrk((const char *)v6, Control);
        if ( v7 != nullptr )
        {
          v9 = expand_argument_wildcards<char>(*v4, v7, (int)&v22);
          if ( v9 != 0 )
          {
            v8 = v9;
            goto LABEL_16;
          }
        }
        else
        {
          v8 = copy_and_add_argument_to_buffer<char>((char *)*v4, nullptr, 0, (int)&v22);
          if ( v8 != 0 )
            goto LABEL_16;
        }
        v6 = *++v4;
        if ( *v4 == nullptr )
        {
          v5 = (const char **)v22;
          v3 = v23;
          break;
        }
      }
    }
    v10 = v5;
    v11 = v3 - v5 + 1;
    v12 = 0;
    while ( 1 )
    {
      v28 = v12;
      if ( v10 == v3 )
        break;
      v13 = *v10;
      v27 = *v10 + 1;
      v12 = &v13[strlen(v13) + 1] - v27 + v28 + 1;
      ++v10;
    }
    buffer_for_argv = (char *)__acrt_allocate_buffer_for_argv(v3 - v5 + 1, v12, 1u);
    v15 = buffer_for_argv;
    if ( buffer_for_argv != nullptr )
    {
      v16 = &buffer_for_argv[4 * v11];
      v17 = v23;
      v26 = v16;
      v18 = v16;
      *(_DWORD *)Control = v16;
      if ( v5 != v23 )
      {
        v25 = v15 - (char *)v5;
        do
        {
          v19 = *v5;
          v27 = *v5 + 1;
          v21 = *v5;
          v27 = (const char *)(&v19[strlen(v19) + 1] - v27 + 1);
          if ( strncpy_s(v18, v28 + v26 - v18, v21, (rsize_t)v27) != 0 )
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
          v20 = *(const char **)Control;
          *(const char **)((char *)v5++ + v25) = *(const char **)Control;
          v18 = (char *)&v20[(_DWORD)v27];
          *(_DWORD *)Control = v18;
        }
        while ( v5 != v17 );
      }
      *a2 = v15;
      _free_base(nullptr);
      unknown_libname_100(&v22);
      return 0;
    }
    else
    {
      _free_base(nullptr);
      v8 = -1;
LABEL_16:
      unknown_libname_100(&v22);
      return v8;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

