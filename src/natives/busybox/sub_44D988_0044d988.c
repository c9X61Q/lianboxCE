// busybox.exe @ 0x44d988 size=69

char __usercall sub_44D988@<al>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // edx
  int v4; // ecx

  if ( *a1 != 0 )
  {
    v1 = a1;
    ++*(_DWORD *)(dword_485FF0 + 56);
    while ( 1 )
    {
      v2 = dword_485FF4;
      if ( *(_DWORD *)dword_485FF4 == *v1 )
        break;
      *(_DWORD *)dword_485FF4 = **(_DWORD **)dword_485FF4;
      sub_4631A8();
    }
    v3 = v1[1];
    *(_DWORD *)(dword_485FF4 + 4) = v3;
    v4 = v1[2];
    *(_DWORD *)(v2 + 12) = v4;
    *(_DWORD *)(v2 + 8) = v4 + v3;
    LOBYTE(a1) = sub_43B8DC();
  }
  return (char)a1;
}

