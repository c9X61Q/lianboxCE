// busybox.exe @ 0x41cb90 size=49

int __usercall sub_41CB90@<eax>(int a1@<eax>)
{
  void *hObject; // eax

  hObject = *(void **)(a1 + 16);
  if ( hObject != (void *)-1 )
    CloseHandle(hObject);
  if ( *(_DWORD *)(a1 + 20) != -1 )
    CloseHandle(*(HANDLE *)(a1 + 20));
  return sub_41CA70((_DWORD *)a1);
}

