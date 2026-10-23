// lian86.exe @ 0x0040e405  size=189  name=sub_40E405
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E405(char *Src, int a2, int a3)
{
  int v3; // ebx
  int *v4; // edi
  int v5; // ebp
  int v6; // ecx
  char *v7; // edi
  char *v8; // ebp

  v3 = 0;
  if ( Src != nullptr && a2 != 0 )
  {
    v4 = (int *)(a2 - 24);
    v5 = *((_DWORD *)Src - 6);
    if ( v5 == *(_DWORD *)(a2 - 24) )
    {
      if ( a3 != 0 )
      {
        v4 = sub_40E266(
               *((_DWORD *)Src - 5),
               *((_DWORD *)Src - 2),
               *((_DWORD *)Src - 1),
               *((_DWORD *)Src - 4),
               (_DWORD *)v4[3])
           - 6;
        *v4 = v5;
      }
      if ( v5 > 1 )
        memcpy((void *)(v4[3] + 4), (const void *)(*((_DWORD *)Src - 3) + 4), 4 * v5);
      v6 = *((_DWORD *)Src - 2);
      if ( v6 == v4[4] )
      {
        if ( *((_DWORD *)Src - 4) != 0 )
        {
          v7 = (char *)(v4 + 6);
          v8 = Src;
          if ( v6 > 0 )
          {
            do
            {
              sub_412154(v7, *((_DWORD *)Src - 5), *((_DWORD *)Src - 4), v8);
              v8 += *((_DWORD *)Src - 5);
              v7 += *((_DWORD *)Src - 5);
              ++v3;
            }
            while ( v3 < *((_DWORD *)Src - 2) );
          }
        }
        else
        {
          memcpy(v4 + 6, Src, v6 * *((_DWORD *)Src - 5));
        }
        return 1;
      }
    }
  }
  return v3;
}

