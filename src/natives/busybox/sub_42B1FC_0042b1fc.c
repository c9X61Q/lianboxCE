// busybox.exe @ 0x42b1fc size=126

int __cdecl sub_42B1FC(int a1, char a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  BOOL v6; // ecx
  int v7; // ecx

  v2 = dword_485FF0;
  ++*(_DWORD *)(dword_485FF0 + 16);
  v3 = 0;
  while ( 1 )
  {
    v4 = sub_42B5DC(*(_DWORD *)(a1 + 4), 2);
    v5 = sub_460FCC(v4);
    if ( v5 == 4 )
    {
      v3 = v6;
      goto LABEL_9;
    }
    if ( v5 == 0 )
      break;
LABEL_9:
    if ( (v5 & 0xFFFFFFFD) != 0 )
      goto LABEL_10;
  }
  if ( *(_BYTE *)a1 != 9 )
    v6 = !v6;
  if ( !v6 )
  {
    v3 = sub_42B5DC(*(_DWORD *)(a1 + 8), a2 & 2);
    v5 = sub_460FCC(v7);
    goto LABEL_9;
  }
LABEL_10:
  --*(_DWORD *)(v2 + 16);
  return v3;
}

