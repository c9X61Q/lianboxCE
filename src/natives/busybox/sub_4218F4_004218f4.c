// busybox.exe @ 0x4218f4 size=20

int __usercall sub_4218F4@<eax>(int a1@<eax>)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(a1 + 40))(
           *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12),
           *(_DWORD *)(*(_DWORD *)(a1 + 24) + 8));
}

