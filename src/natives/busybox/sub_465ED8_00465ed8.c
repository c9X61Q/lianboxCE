// busybox.exe @ 0x465ed8 size=46

int __usercall sub_465ED8@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // edx
  int v6; // [esp+0h] [ebp-4h]

  if ( a2 > 0x4000 )
    sub_470D44(v6);
  v4 = a2 + 72;
  if ( *(_DWORD *)(a1 + 36) < v4 )
  {
    *(_DWORD *)(a1 + 36) = v4;
    *(_DWORD *)(a1 + 32) = sub_471600(a3, v4);
  }
  return *(_DWORD *)(a1 + 32) + 24;
}

