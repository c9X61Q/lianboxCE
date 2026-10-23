// busybox.exe @ 0x439a50 size=43

int __usercall sub_439A50@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax

  *(_QWORD *)(a1 + 120) += (unsigned int)(*(_DWORD *)(a2 + 4) - *(_DWORD *)(a1 + 16));
  result = sub_472278(*(_DWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

