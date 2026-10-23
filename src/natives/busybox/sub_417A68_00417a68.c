// busybox.exe @ 0x417a68 size=90

const char *__usercall sub_417A68@<eax>(_BYTE *a1@<eax>, int a2@<ecx>)
{
  _BYTE *v3; // eax
  int v4; // ecx
  _BYTE *v5; // esi

  v3 = (_BYTE *)sub_43D3D4(a2, 47);
  v5 = a1;
  if ( (unsigned __int8)((*a1 | 0x20) - 97) <= 0x19u && a1[1] == 58 )
    v5 = a1 + 2;
  if ( v3 != nullptr || (v3 = (_BYTE *)sub_43D3D4(v4, 92)) != nullptr )
  {
    while ( (*v3 == 92 || *v3 == 47) && v3 != v5 )
      *v3-- = 0;
  }
  return sub_417A0C((int)a1);
}

