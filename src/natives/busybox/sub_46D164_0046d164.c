// busybox.exe @ 0x46d164 size=76

char __fastcall sub_46D164(int a1, int a2)
{
  _DWORD *v2; // ebx
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // edx

  v2 = dword_48600C;
  v3 = *((_DWORD *)dword_48600C + 8);
  do
  {
    sub_43B1AC(a1, a2);
    v4 = v2[5];
    if ( v4 >= v2[6] )
      break;
    LOBYTE(v4) = *(_BYTE *)(v3 + v4);
    a2 = v4 - 9;
  }
  while ( (_BYTE)v4 == 32 || (unsigned __int8)a2 <= 4u );
  while ( 1 )
  {
    v5 = v2[5];
    v6 = v2[6] - 1;
    if ( v5 >= v6 )
      break;
    LOBYTE(v6) = *(_BYTE *)(v3 + v5 + 1);
    v7 = v6 - 9;
    if ( (_BYTE)v6 == 32 || (unsigned __int8)v7 <= 4u )
      break;
    sub_43B1AC(a1, v7);
  }
  return v6;
}

