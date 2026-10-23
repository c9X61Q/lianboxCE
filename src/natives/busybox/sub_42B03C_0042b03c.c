// busybox.exe @ 0x42b03c size=182

int __cdecl sub_42B03C(_DWORD *a1, char a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebx
  int i; // edi
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // eax
  _DWORD *v10; // [esp+8h] [ebp-18h] BYREF
  _DWORD *v11; // [esp+Ch] [ebp-14h]

  v2 = dword_485FEC;
  v3 = a1[1];
  *(_DWORD *)(dword_485FEC + 376) = v3;
  v4 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 20) = v3;
  if ( dword_473340 != 0 )
    *(_DWORD *)(v2 + 376) = v3 - (dword_473340 - 1);
  v10 = nullptr;
  v11 = &v10;
  for ( i = a1[2]; i != 0; i = *(_DWORD *)(i + 4) )
    sub_42DB08(3);
  *v11 = 0;
  ++*(_DWORD *)(v4 + 16);
  v6 = v10;
  v7 = 0;
  while ( v6 != nullptr )
  {
    sub_45EC2C(v7, v6[1]);
    v8 = sub_42B5DC(a1[3], a2 & 2);
    if ( (sub_460FCC(v8) & 0xFFFFFFFD) != 0 )
      break;
    v6 = (_DWORD *)*v6;
  }
  --*(_DWORD *)(v4 + 16);
  return v7;
}

