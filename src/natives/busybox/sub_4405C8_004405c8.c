// busybox.exe @ 0x4405c8 size=102

int __usercall sub_4405C8@<eax>(unsigned int a1@<eax>, unsigned __int8 *a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned __int8 *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int8 *v8; // [esp+0h] [ebp-14h]

  if ( a2 == nullptr )
    return 1;
  v3 = a2;
  v4 = (unsigned __int16)a1;
  v5 = HIWORD(a1);
  while ( a3 != 0 )
  {
    v6 = a3;
    if ( a3 > 0x15B0 )
      v6 = 5552;
    v8 = &v3[v6];
    do
    {
      v4 += *v3++;
      v5 += v4;
    }
    while ( v3 != v8 );
    a3 -= v6;
    v4 %= 0xFFF1u;
    v5 %= 0xFFF1u;
  }
  return v4 | (v5 << 16);
}

