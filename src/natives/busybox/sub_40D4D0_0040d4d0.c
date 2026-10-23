// busybox.exe @ 0x40d4d0 size=54

_DWORD *__cdecl sub_40D4D0(int a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax

  v1 = 0;
  if ( a1 > 19 )
  {
    v2 = 4;
    do
    {
      v2 *= 2;
      ++v1;
    }
    while ( v2 + 15 < a1 );
  }
  v3 = (_DWORD *)sub_40FFB0(v1);
  *v3 = v1;
  return v3 + 1;
}

