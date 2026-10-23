// busybox.exe @ 0x460b38 size=145

int __usercall sub_460B38@<eax>(_BYTE *a1@<eax>, int a2@<ecx>)
{
  _BYTE *v3; // esi
  _BYTE *v4; // ebx
  _BYTE *v5; // eax
  unsigned int v6; // ecx
  _BYTE *v7; // edi
  unsigned int v8; // edi
  _BYTE *v9; // eax
  _BYTE *v10; // edi
  unsigned int v12; // [esp+0h] [ebp-14h]

  v3 = *(_BYTE **)(dword_485FF4 + 4);
  do
  {
    v4 = (_BYTE *)sub_4635B0(a2, 39);
    v5 = (_BYTE *)sub_441F7C(v4 - a1 + 3, (int)v3);
    *v5 = 39;
    qmemcpy(v5 + 1, a1, v4 - a1);
    v7 = &v5[v4 - a1 + 1];
    v6 = 0;
    v3 = v7 + 1;
    *v7 = 39;
    if ( *v4 != 39 )
      break;
    do
    {
      v8 = v6++;
      a1 = &v4[v6];
    }
    while ( v4[v6] == 39 );
    v12 = v6;
    v9 = (_BYTE *)sub_441F7C(v8 + 4, (int)v3);
    *v9 = 34;
    qmemcpy(v9 + 1, &a1[~v8], v12);
    v10 = &v9[v12 + 1];
    a2 = 0;
    v3 = v10 + 1;
    *v10 = 34;
  }
  while ( *a1 != 0 );
  *v3 = 0;
  return *(_DWORD *)(dword_485FF4 + 4);
}

