// busybox.exe @ 0x44d900 size=133

char __usercall sub_44D900@<al>(int a1@<eax>)
{
  int v1; // ebp
  int v2; // edi
  _DWORD *v3; // ebx
  int i; // esi
  int FileHandle; // ecx
  int v7; // [esp+4h] [ebp-14h]

  v1 = dword_485FEC;
  if ( *(_DWORD *)(dword_485FEC + 20) != 0 )
  {
    v2 = a1;
    ++*(_DWORD *)(dword_485FF0 + 56);
    v3 = *(_DWORD **)(v1 + 20);
    for ( i = 0; v3[1] > i; ++i )
    {
      FileHandle = v3[2 * i + 3];
      if ( FileHandle == -1 )
      {
        if ( v2 == 0 )
          sub_442EA4(v3[2 * i + 2]);
      }
      else if ( FileHandle != -2 )
      {
        if ( v2 == 0 )
        {
          v7 = v3[2 * i + 3];
          sub_42930C(v7, v3[2 * i + 2]);
          FileHandle = v7;
        }
        sub_442EA4(FileHandle);
      }
    }
    *(_DWORD *)(v1 + 20) = *v3;
    sub_4631A8();
    LOBYTE(a1) = sub_43B8DC();
  }
  return a1;
}

