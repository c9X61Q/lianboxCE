// busybox.exe @ 0x45e850 size=102

int __usercall sub_45E850@<eax>(_DWORD *a1@<eax>)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // ebp
  int v7; // ebx
  int result; // eax

  v2 = 0;
  do
  {
    v3 = a1[v2];
    v4 = v2++;
  }
  while ( v3 != 0 );
  v5 = sub_470E78();
  v6 = (_DWORD *)v5;
  while ( *a1 != 0 )
  {
    ++a1;
    *v6++ = sub_47188C();
  }
  *v6 = 0;
  v7 = dword_485FEC;
  result = sub_431F40(dword_485FEC);
  *(_BYTE *)(v7 + 12) = 1;
  *(_DWORD *)v7 = v4;
  *(_DWORD *)(v7 + 16) = v5;
  *(_DWORD *)(v7 + 4) = 1;
  *(_DWORD *)(v7 + 8) = -1;
  return result;
}

