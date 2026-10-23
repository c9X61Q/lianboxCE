// gettime.exe @ 0x411e97 size=281

int __cdecl fgetc(FILE *Stream)
{
  FILE *v1; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  _BYTE *v7; // ecx
  int v8; // [esp+14h] [ebp-20h]
  _BYTE *v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h] BYREF

  v1 = Stream;
  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v3 = 0;
  _lock_file(Stream);
  ms_exc.registration.TryLevel = 0;
  if ( (Stream->_flag & 0x1000) != 0 )
    goto LABEL_14;
  v4 = _fileno(Stream);
  if ( v4 == -1 || v4 == -2 )
  {
    v7 = &unk_437278;
    v9 = &unk_437278;
    v5 = v4 >> 6;
    v6 = v4 & 0x3F;
  }
  else
  {
    v5 = v4 >> 6;
    v6 = v4 & 0x3F;
    v9 = (_BYTE *)(dword_438A48[v4 >> 6] + 56 * v6);
    v7 = &unk_437278;
  }
  v1 = Stream;
  if ( v9[41] == 0 )
  {
    if ( v4 != -1 && v4 != -2 )
      v7 = (_BYTE *)(dword_438A48[v5] + 56 * v6);
    if ( (v7[45] & 1) == 0 )
LABEL_14:
      v3 = 1;
  }
  if ( v3 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
    return -1;
  }
  v8 = _fgetc_nolock(v1);
  _unlock_file(v1);
  return v8;
}

