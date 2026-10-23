// busybox.exe @ 0x432a78 size=47

BOOL __usercall sub_432A78@<eax>(int a1@<eax>, int a2@<ecx>)
{
  return sub_4312E8(*(_DWORD *)(a2 + 8), a1, *(_BYTE *)(a2 + 12) != 0 ? 0x10 : 0) == 0;
}

