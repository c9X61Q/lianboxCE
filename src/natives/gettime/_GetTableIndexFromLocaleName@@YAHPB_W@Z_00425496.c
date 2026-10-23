// gettime.exe @ 0x425496 size=80

int __cdecl GetTableIndexFromLocaleName(const wchar_t *a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // eax

  v1 = 0;
  v2 = 227;
  while ( 1 )
  {
    v3 = (v2 + v1) / 2;
    v4 = sub_426B47(a1, *(&off_42F6C0 + 2 * v3), 85);
    if ( v4 == 0 )
      break;
    if ( v4 >= 0 )
      v1 = v3 + 1;
    else
      v2 = v3 - 1;
    if ( v1 > v2 )
      return -1;
  }
  return dword_42F6C4[2 * v3];
}

