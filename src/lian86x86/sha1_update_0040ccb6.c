// lian86.exe @ 0x0040ccb6  size=182  name=sha1_update
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void *__cdecl sha1_update(_DWORD *a1, char *Src, unsigned int a3)
{
  _DWORD *v4; // ebp
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int i; // ebp
  _DWORD *v11; // [esp+14h] [ebp+4h]

  if ( a1[23] != 0 )
    v4 = a1 + 24;
  else
    v4 = nullptr;
  v5 = a1[5];
  v6 = (v5 >> 3) & 0x3F;
  v11 = v4;
  v7 = v5 + 8 * a3;
  a1[5] = v7;
  if ( v7 < 8 * a3 )
    ++a1[6];
  a1[6] += a3 >> 29;
  if ( v6 + a3 <= 0x3F )
  {
    v8 = 0;
  }
  else
  {
    v8 = 64 - v6;
    memcpy((char *)a1 + v6 + 28, Src, 64 - v6);
    sha1_block(a1, a1 + 7, v4);
    for ( i = v8 + 63; i < a3; i += 64 )
    {
      sha1_block(a1, &Src[i - 63], v11);
      v8 += 64;
    }
    v6 = 0;
  }
  return memcpy((char *)a1 + v6 + 28, &Src[v8], a3 - v8);
}

