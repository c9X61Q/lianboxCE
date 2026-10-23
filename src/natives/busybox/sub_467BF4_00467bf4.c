// busybox.exe @ 0x467bf4 size=75

int __fastcall sub_467BF4(int a1, int a2)
{
  _BYTE *v2; // ebx
  BOOL v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  char *v7; // eax
  BOOL v9; // [esp+0h] [ebp-Ch]

  v2 = *(_BYTE **)(a2 + 4);
  if ( v2 != nullptr )
  {
    v3 = *v2 != 45;
    v4 = (*v2 == 45) + 1;
  }
  else
  {
    v3 = true;
    v4 = 1;
  }
  v5 = a2 + 4 * v4;
  v6 = 0;
  while ( 1 )
  {
    v5 += 4;
    v7 = *(char **)(v5 - 4);
    if ( v7 == nullptr )
      break;
    v9 = v3;
    v6 |= sub_4230C8(v7, 0, v3);
    v3 = v9;
  }
  return v6;
}

