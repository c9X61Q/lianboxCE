// gettime.exe @ 0x420df5 size=158

int __cdecl __acrt_lowio_ensure_fh_exists(unsigned int a1)
{
  int v1; // esi
  int v3; // edi
  int v4; // eax
  char *handle_array; // eax

  if ( a1 < 0x2000 )
  {
    v1 = 0;
    __acrt_lock(7);
    v3 = 0;
    v4 = dword_438C48;
    while ( (int)a1 >= v4 )
    {
      if ( dword_438A48[v3] == 0 )
      {
        handle_array = __acrt_lowio_create_handle_array();
        dword_438A48[v3] = (int)handle_array;
        if ( handle_array == nullptr )
        {
          v1 = 12;
          break;
        }
        v4 = dword_438C48 + 64;
        dword_438C48 += 64;
      }
      ++v3;
    }
    __acrt_unlock(7);
  }
  else
  {
    v1 = 9;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return v1;
}

