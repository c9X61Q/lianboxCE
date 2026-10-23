// busybox.exe @ 0x41c738 size=168

int __cdecl sub_41C738(int a1, _BYTE **a2)
{
  _BYTE **v2; // edi
  _BYTE *v3; // ebx
  int v4; // eax
  int *v5; // eax
  _DWORD *v6; // ebx
  int v7; // edi
  int v8; // esi

  v2 = a2;
  while ( 1 )
  {
    v3 = *++v2;
    if ( *v2 == nullptr )
      break;
    if ( *v3 != 45 )
    {
      v3 = nullptr;
      break;
    }
    if ( v3[1] != 0 && strchr("-Rvcf", (unsigned __int8)v3[1]) == nullptr )
    {
      *v3 = 97;
      break;
    }
  }
  sub_435D44(a2, "^Rvcf");
  v4 = dword_473090;
  if ( v3 != nullptr )
    *v3 = 45;
  v5 = (int *)&a2[v4];
  v6 = v5 + 1;
  v7 = *v5;
  v8 = 0;
  do
  {
    if ( sub_45927C(&sub_42F294, v7, 0) == 0 )
      v8 = 1;
    ++v6;
  }
  while ( *v6 != 0 );
  return v8;
}

