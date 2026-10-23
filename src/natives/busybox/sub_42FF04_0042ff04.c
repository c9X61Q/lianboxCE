// busybox.exe @ 0x42ff04 size=19

bool __usercall sub_42FF04@<al>(int a1@<eax>, int a2@<ecx>)
{
  return sub_4305B0(a2, **(_DWORD **)(a1 + 24)) != 0;
}

