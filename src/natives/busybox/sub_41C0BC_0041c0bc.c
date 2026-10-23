// busybox.exe @ 0x41c0bc size=94

int __userpurge sub_41C0BC@<eax>(int a1@<eax>, int a2@<edx>, int a3, int a4, int a5)
{
  int v5; // edx
  int v6; // edi
  int result; // eax

  v5 = *(_DWORD *)(a1 + 100) + 20 * a2;
  v6 = *(_DWORD *)(v5 + 8);
  if ( v6 > a4 )
    return -1;
  result = 1;
  if ( *(_DWORD *)(v5 + 12) >= a4 )
  {
    result = (v6 == a4) | (2 * (*(_DWORD *)(v5 + 12) == a4));
    if ( result != 0 )
      return sub_41C11C(a3, a5);
  }
  return result;
}

