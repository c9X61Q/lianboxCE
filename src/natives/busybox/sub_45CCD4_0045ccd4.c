// busybox.exe @ 0x45ccd4 size=65

int __usercall sub_45CCD4@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // ebp
  int v4; // esi
  int result; // eax
  int v6; // ebx

  v3 = *(_DWORD *)(a1 + 92);
  v4 = v3;
  result = 0;
  while ( v4 > result )
  {
    v6 = (v4 + result) >> 1;
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 100) + 20 * v6 + 4) >= a2 )
      v4 = (v4 + result) >> 1;
    else
      result = v6 + 1;
  }
  if ( v3 <= result || *(_DWORD *)(*(_DWORD *)(a1 + 100) + 20 * result + 4) != a2 )
    return -1;
  return result;
}

