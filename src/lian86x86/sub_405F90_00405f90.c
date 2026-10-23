// lian86.exe @ 0x00405f90  size=198  name=sub_405F90
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405F90(__int16 *a1, unsigned __int16 *a2, int a3)
{
  int v3; // edi
  __int16 *v4; // esi
  int v5; // ebp
  __int16 *v6; // ebx
  int v7; // eax
  int v8; // esi
  __int16 *v9; // ecx
  int v10; // eax
  _WORD *v11; // edi
  int v13; // [esp+18h] [ebp+8h]

  v3 = 32;
  if ( a2 != nullptr )
    v3 = *a2;
  v4 = a1;
  v5 = sub_405DE0(a1);
  if ( a1 != nullptr )
  {
    v6 = a1;
    if ( (unsigned __int16)*a1 == v3 )
    {
      do
      {
        v7 = (unsigned __int16)v4[1];
        ++v4;
      }
      while ( v7 == v3 );
    }
    v8 = v4 - a1;
    if ( v8 >= v5 )
    {
      v5 -= v8;
    }
    else
    {
      v9 = &a1[v5 - 1];
      if ( (unsigned __int16)*v9 == v3 )
      {
        do
          v10 = (unsigned __int16)*--v9;
        while ( v10 == v3 );
      }
      v5 -= v8 + (((int)a1 + 2 * v5 - (int)v9 - 2) >> 1);
    }
  }
  else
  {
    v8 = (int)a2;
    v6 = nullptr;
  }
  v13 = sub_40E880(v6);
  v11 = (_WORD *)sub_40E900(v5, a3);
  if ( v13 != 0 )
    v6 = (__int16 *)sub_40EA10(v13);
  if ( v6 != nullptr )
    return sub_40EA40(v11, &v6[v8], v5);
  *v11 = 0;
  return 0;
}

