// busybox.exe @ 0x4279bc size=82

int __usercall sub_4279BC@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax

  sub_468398();
  while ( 1 )
  {
    v4 = dword_486010;
    v5 = *(_DWORD *)(dword_486010 + 68);
    if ( a1 <= 0 )
      break;
    if ( a2 == -1 )
      v6 = sub_44DC1C();
    else
      v6 = sub_446708();
    *(_DWORD *)(v4 + 68) = v6;
    --a1;
  }
  if ( *(_DWORD *)(dword_486010 + 8) < v5 )
    *(_DWORD *)(dword_486010 + 8) = v5;
  v7 = sub_4298F8();
  if ( *(_DWORD *)(v4 + 8) > v7 )
    *(_DWORD *)(v4 + 8) = sub_418A48(v7);
  return sub_427A10();
}

