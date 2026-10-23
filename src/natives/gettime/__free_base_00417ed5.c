// gettime.exe @ 0x417ed5 size=58

void __cdecl _free_base(void *Block)
{
  DWORD LastError; // eax
  int v2; // esi

  if ( Block != nullptr && !HeapFree(hHeap, 0, Block) )
  {
    LastError = GetLastError();
    v2 = __acrt_errno_from_os_error(LastError);
    *_errno() = v2;
  }
}

