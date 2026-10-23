// busybox.exe @ 0x42143c size=95

int __usercall sub_42143C@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  __int64 v4; // rax
  int v5; // esi
  int result; // eax

  LODWORD(v4) = sub_402540(*(_QWORD *)(a1 + 48), a2);
  v5 = sub_402540(a2 - v4, a2);
  result = (*(int (__fastcall **)(_DWORD, int))(a1 + 40))(0, v5);
  *(_QWORD *)(a1 + 48) += (unsigned int)v5;
  return result;
}

