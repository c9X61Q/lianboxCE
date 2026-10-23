// busybox.exe @ 0x4218a4 size=39

int __usercall sub_4218A4@<eax>(int a1@<eax>)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h]

  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 8);
  v2 = sub_4728CC();
  *(_DWORD *)(a1 + 96) = v2;
  return sub_4715C8(v4, v2);
}

