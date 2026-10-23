// gettime.exe @ 0x40d52a size=146

int __vcrt_getptd_noexit()
{
  DWORD LastError; // edi
  int Value; // eax
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dwTlsIndex == -1 )
    return 0;
  LastError = GetLastError();
  Value = __vcrt_FlsGetValue(dwTlsIndex);
  v3 = Value;
  if ( Value == -1 )
  {
LABEL_6:
    v3 = 0;
    goto LABEL_12;
  }
  if ( Value == 0 )
  {
    if ( __vcrt_FlsSetValue(dwTlsIndex, (LPVOID)0xFFFFFFFF) != 0 )
    {
      v4 = calloc(1u, 0x28u);
      v5 = v4;
      if ( v4 != nullptr && __vcrt_FlsSetValue(dwTlsIndex, v4) != 0 )
      {
        v3 = (int)v5;
        v5 = nullptr;
      }
      else
      {
        v3 = 0;
        __vcrt_FlsSetValue(dwTlsIndex, nullptr);
      }
      free(v5);
      goto LABEL_12;
    }
    goto LABEL_6;
  }
LABEL_12:
  SetLastError(LastError);
  return v3;
}

