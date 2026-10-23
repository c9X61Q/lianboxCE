// lian86.exe @ 0x0040a290  size=98  name=sub_40A290
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A290(const unsigned __int16 *Src, int a2, int a3)
{
  int v4; // ebx
  _WORD *v5; // eax
  _WORD *v6; // esi
  char *v7; // ecx
  __int16 v8; // ax

  if ( a2 == -1 )
    return sub_40A240(Src, a3);
  v4 = a2 < 0 ? 0 : a2;
  v5 = (_WORD *)sub_40E900(v4, a3);
  v6 = v5;
  if ( Src != nullptr && v4 != 0 )
  {
    v7 = (char *)((char *)Src - (char *)v5);
    do
    {
      v8 = *(_WORD *)((char *)v6 + (_DWORD)v7);
      if ( v8 == 0 )
        break;
      *v6++ = v8;
      --v4;
    }
    while ( v4 != 0 );
  }
  sub_40EA90(v4);
  *v6 = 0;
  return 0;
}

