// gettime.exe @ 0x4104bf size=401

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_74(int this)
{
  int v2; // eax
  char v3; // al
  char v4; // cl
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  char v14; // al
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  int v19; // [esp-4h] [ebp-20h]
  int v20; // [esp+8h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]

  *(_DWORD *)(this + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( v2 == 0 )
    {
      v4 = *(_BYTE *)(this + 45);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(this + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(_BYTE *)(this + 45);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = this + 60;
  if ( __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(
         (_DWORD *)(this + 60),
         v2 + 349,
         *(_DWORD *)(this + 8)) != 0 )
  {
    v6 = *(_DWORD *)(this + 36);
  }
  else
  {
    v6 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)(this + 60)) - 349;
    *(_DWORD *)(this + 36) = v6;
  }
  v7 = *(_DWORD *)(this + 1088);
  if ( v7 == 0 )
    v7 = this + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(this + 48) = v7;
  v8 = *(int **)(this + 16);
  *(_DWORD *)(this + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(this + 45);
  v21 = v10;
  v24 = v11;
  v23 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)(this + 60));
  v22 = (int)__crt_stdio_output::formatting_buffer::scratch_data<char>((_DWORD *)(this + 60));
  v12 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)(this + 60));
  if ( *(_DWORD *)(this + 1088) != 0 )
    v5 = *(_DWORD *)(this + 1088);
  __acrt_fp_format(
    (int)&v20,
    v5,
    v12,
    v22,
    v23,
    v24,
    v6,
    *(_DWORD *)this,
    *(_DWORD *)(this + 4),
    1,
    *(__crt_cached_ptd_host **)(this + 8));
  if ( (*(_DWORD *)(this + 28) & 0x20) != 0 && *(_DWORD *)(this + 36) == 0 )
  {
    v13 = *(_DWORD *)(this + 8);
    if ( *(_BYTE *)(v13 + 20) == 0 )
      __crt_cached_ptd_host::update_locale_slow(*(__crt_cached_ptd_host **)(this + 8));
    __crt_stdio_output::force_decimal_point(*(__crt_stdio_output **)(this + 48), (char *)(v13 + 12));
  }
  v14 = *(_BYTE *)(this + 45);
  if ( (v14 == 103 || v14 == 71) && (*(_DWORD *)(this + 28) & 0x20) == 0 )
  {
    v15 = *(_DWORD *)(this + 8);
    if ( *(_BYTE *)(v15 + 20) == 0 )
      __crt_cached_ptd_host::update_locale_slow(*(__crt_cached_ptd_host **)(this + 8));
    __crt_stdio_output::crop_zeroes(*(__crt_stdio_output **)(this + 48), (char *)(v15 + 12));
  }
  v16 = *(const char **)(this + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(this + 28) |= 0x40u;
    *(_DWORD *)(this + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(this + 28) &= ~8u;
    *(_BYTE *)(this + 45) = 115;
  }
  *(_DWORD *)(this + 52) = strlen(v16);
  return 1;
}

