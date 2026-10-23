// busybox.exe @ 0x44cf80 size=44

int __usercall sub_44CF80@<eax>(int result@<eax>)
{
  int i; // ebx
  int v2; // edx
  int v3; // ecx
  int v4; // ebx

  for ( i = 0; ; ++i )
  {
    v2 = *(_DWORD *)(result + 4 * i);
    if ( v2 == 0 )
      break;
  }
  v3 = i - 1;
  if ( i != 0 )
  {
    while ( v3 > v2 )
    {
      v4 = *(_DWORD *)(result + 4 * v3);
      *(_DWORD *)(result + 4 * v3) = *(_DWORD *)(result + 4 * v2);
      *(_DWORD *)(result + 4 * v2) = v4;
      --v3;
      ++v2;
    }
  }
  return result;
}

