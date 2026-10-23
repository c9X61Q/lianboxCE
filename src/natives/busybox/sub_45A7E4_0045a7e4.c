// busybox.exe @ 0x45a7e4 size=215

char __usercall sub_45A7E4@<al>(int a1@<eax>)
{
  int v1; // ebx
  int v2; // esi
  char v3; // dl
  int *v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi

  if ( dword_473388 != 0 )
  {
    v1 = a1;
    if ( dword_473380 <= a1 )
    {
      dword_473388 = (int)&dword_473378;
      v3 = 0;
      v4 = &dword_473378;
      while ( 1 )
      {
        v5 = (int)v4;
        v4 = (int *)*v4;
        if ( v4 == nullptr || v4[1] >= v1 )
          break;
        v3 = 1;
      }
      if ( v3 != 0 )
        dword_473388 = v5;
      while ( 1 )
      {
        LOBYTE(a1) = dword_473388;
        if ( *(_DWORD *)dword_473388 == 0 )
          break;
        ++*(_DWORD *)(dword_485FF0 + 56);
        v6 = (_DWORD *)dword_473388;
        v7 = **(_DWORD **)dword_473388;
        sub_4631A8();
        *v6 = v7;
        sub_43B8DC();
      }
      if ( *(_DWORD *)(dword_473388 + 8) > v1 )
        *(_DWORD *)(dword_473388 + 8) = v1;
    }
    else
    {
      while ( dword_473378 != 0 )
      {
        ++*(_DWORD *)(dword_485FF0 + 56);
        v2 = *(_DWORD *)dword_473378;
        sub_4631A8();
        dword_473378 = v2;
        LOBYTE(a1) = sub_43B8DC();
      }
      if ( dword_47337C <= v1 )
      {
        dword_473388 = (int)&dword_473378;
        dword_473380 = v1;
      }
      else
      {
        dword_473388 = 0;
      }
    }
  }
  return a1;
}

