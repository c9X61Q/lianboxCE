// busybox.exe @ 0x470c28 size=39

int __usercall sub_470C28@<eax>(int a1@<eax>)
{
  int v3; // [esp+0h] [ebp-8h]

  v3 = sub_471780(0, 1);
  sub_470B6C(*(_DWORD *)a1, (struct sockaddr *)(a1 + 4), v3);
  return v3;
}

