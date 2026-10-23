// busybox.exe @ 0x462d94 size=120

BOOL __usercall sub_462D94@<eax>(int a1@<eax>)
{
  void *lpBuffer; // esi
  void *hEvent; // eax
  DWORD BytesReturned[5]; // [esp+20h] [ebp-14h] BYREF

  lpBuffer = (void *)(a1 + 40);
  memset((void *)(a1 + 40), 0, 0x800u);
  memset((void *)(a1 + 16), 0, 0x10u);
  hEvent = *(void **)(a1 + 4);
  *(_DWORD *)(a1 + 32) = hEvent;
  ResetEvent(hEvent);
  return ReadDirectoryChangesW(
           *(HANDLE *)a1,
           lpBuffer,
           0x800u,
           false,
           *(_DWORD *)(a1 + 8),
           BytesReturned,
           (LPOVERLAPPED)(a1 + 16),
           nullptr);
}

