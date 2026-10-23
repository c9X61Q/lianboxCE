// gettime.exe @ 0x41cc16 size=133

bool __cdecl stream_is_at_end_of_file_nolock(_DWORD *a1)
{
  void *osfhandle; // esi
  LARGE_INTEGER FileSize; // [esp+0h] [ebp-10h] BYREF
  LARGE_INTEGER NewFilePointer; // [esp+8h] [ebp-8h] BYREF

  if ( (a1[3] & 8) != 0 )
    return true;
  if ( (a1[3] & 0xC0) != 0 && *a1 == a1[1] )
    return false;
  osfhandle = (void *)_get_osfhandle(a1[4]);
  if ( osfhandle == (void *)-1
    || !SetFilePointerEx(osfhandle, 0, &NewFilePointer, 1u)
    || !GetFileSizeEx(osfhandle, &FileSize) )
  {
    return false;
  }
  return NewFilePointer.QuadPart == FileSize.QuadPart;
}

