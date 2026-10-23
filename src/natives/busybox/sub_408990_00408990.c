// busybox.exe @ 0x408990 size=159

_DWORD *__cdecl sub_408990(_DWORD *a1)
{
  _DWORD *v1; // ebx
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v5; // edi

  v1 = a1;
  v2 = a1[4];
  v3 = a1 + 5;
  do
  {
    if ( *v3 != -1 )
    {
      ++*v3;
      return a1;
    }
    *v3++ = 0;
  }
  while ( &a1[v2 + 5] > v3 );
  if ( v2 >= a1[2] )
  {
    v5 = (_DWORD *)sub_40FFB0(a1[1] + 1);
    memcpy(v5 + 3, a1 + 3, 4 * a1[4] + 8);
    v1 = v5;
    sub_4100A0(a1);
    v2 = v5[4];
  }
  v1[4] = v2 + 1;
  v1[v2 + 5] = 1;
  return v1;
}

