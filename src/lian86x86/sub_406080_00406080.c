// lian86.exe @ 0x00406080  size=137  name=sub_406080
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_406080(char *a1, int a2, int a3, int a4)
{
  char *v4; // esi
  int v5; // ebx
  int v6; // ebp
  char *v7; // edi
  int v8; // ecx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax

  v4 = a1;
  v5 = a3 < 0 ? 0 : a3;
  v6 = sub_40E880(a1);
  v7 = (char *)sub_40E900(v5, a4);
  if ( v6 != 0 )
    v4 = (char *)sub_40EA10(v6);
  if ( v4 != nullptr )
  {
    v8 = a2;
    if ( a2 <= 1 )
    {
LABEL_7:
      v9 = *(_WORD *)v4;
      if ( *(_WORD *)v4 != 0 )
      {
        v10 = v4 - v7;
        do
        {
          if ( v5 == 0 )
            break;
          *(_WORD *)v7 = v9;
          --v5;
          v11 = *(_WORD *)&v7[v10 + 2];
          v7 += 2;
          v9 = v11;
        }
        while ( v11 != 0 );
      }
    }
    else
    {
      while ( *(_WORD *)v4 != 0 )
      {
        --v8;
        v4 += 2;
        if ( v8 <= 1 )
          goto LABEL_7;
      }
    }
  }
  sub_40EA90(v5);
  *(_WORD *)v7 = 0;
  return 0;
}

