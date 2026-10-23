// busybox.exe @ 0x422724 size=130

int __userpurge sub_422724@<eax>(_DWORD *a1@<eax>, int a2@<edx>, unsigned int *a3@<ecx>, unsigned int a4)
{
  char v6; // dl
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  unsigned int v11; // ecx

  if ( a1[1] == 0 )
  {
    a1[2] = 0;
    a1[3] = 0;
  }
  while ( 1 )
  {
    v11 = *a3;
    if ( *a3 >= a4 )
      return 0;
    v6 = *(_BYTE *)(a2 + v11);
    *a3 = v11 + 1;
    v7 = a1[1];
    v8 = (unsigned __int64)(v6 & 0x7F) << v7 >> 32;
    v9 = (v6 & 0x7F) << v7;
    if ( (v7 & 0x20) != 0 )
    {
      v8 = (v6 & 0x7F) << v7;
      v9 = 0;
    }
    a1[2] |= v9;
    a1[3] |= v8;
    if ( v6 >= 0 )
      break;
    v10 = v7 + 7;
    a1[1] = v10;
    if ( v10 == 63 )
      return 7;
  }
  if ( v7 != 0 && v6 == 0 )
    return 7;
  a1[1] = 0;
  return 1;
}

