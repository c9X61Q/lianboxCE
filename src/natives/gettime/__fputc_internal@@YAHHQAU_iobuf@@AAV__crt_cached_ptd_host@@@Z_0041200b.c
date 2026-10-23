// gettime.exe @ 0x41200b size=308

int __cdecl _fputc_internal(int a1, FILE *Stream, struct __crt_cached_ptd_host *a3)
{
  FILE *v3; // edi
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  _BYTE *v8; // ecx
  BOOL v9; // eax
  int v10; // [esp+10h] [ebp-20h]
  _BYTE *v11; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h] BYREF

  v3 = Stream;
  if ( Stream == nullptr )
  {
    *((_BYTE *)a3 + 28) = 1;
    *((_DWORD *)a3 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a3);
    return -1;
  }
  _lock_file(Stream);
  ms_exc.registration.TryLevel = 0;
  if ( (Stream->_flag & 0x1000) != 0 )
  {
    v9 = true;
  }
  else
  {
    v5 = _fileno(Stream);
    if ( v5 == -1 || v5 == -2 )
    {
      v8 = &unk_437278;
      v11 = &unk_437278;
      v6 = v5 >> 6;
      v7 = v5 & 0x3F;
    }
    else
    {
      v6 = v5 >> 6;
      v7 = v5 & 0x3F;
      v11 = (_BYTE *)(dword_438A48[v5 >> 6] + 56 * v7);
      v8 = &unk_437278;
    }
    v3 = Stream;
    if ( v11[41] != 0 )
    {
      v9 = false;
    }
    else
    {
      if ( v5 != -1 && v5 != -2 )
        v8 = (_BYTE *)(dword_438A48[v6] + 56 * v7);
      v9 = (v8[45] & 1) == 0;
    }
  }
  if ( !v9 )
  {
    *((_BYTE *)a3 + 28) = 1;
    *((_DWORD *)a3 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a3);
    _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
    return -1;
  }
  v10 = _fputc_nolock_internal(a1, v3, a3);
  _unlock_file(v3);
  return v10;
}

