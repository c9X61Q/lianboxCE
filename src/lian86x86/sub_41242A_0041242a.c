// lian86.exe @ 0x0041242a  size=261  name=sub_41242A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall __spoils<edx,ecx> sub_41242A(int a1, int *a2)
{
  int *v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-8h] [ebp-20h]
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]

  v2 = a2;
  v3 = *a2;
  if ( *a2 != -1 )
  {
    v4 = a1;
    do
    {
      ++v2;
      switch ( v3 )
      {
        case -7:
          v15 = *(_DWORD *)(*v2 + v4);
          v2 += v2[1] + 5;
          dword_4186D4(v15);
          break;
        case -6:
          v14 = *v2;
          v2 += 5;
          dword_4186DC(*(_DWORD *)(v14 + v4));
          break;
        case -5:
          v13 = *v2;
          v2 += 4;
          dword_4186D8(*(_DWORD *)(v13 + v4));
          break;
        case -4:
          v12 = *v2;
          v2 += 5;
          dword_4186D4(*(_DWORD *)(v12 + v4));
          break;
        case -3:
          v10 = *v2;
          v11 = v2[2];
          v2 += 3;
          sub_41242A(v10 + v4, v11);
          break;
        case -2:
          v5 = *v2;
          v6 = v2[2];
          v7 = v2[3];
          v8 = v2[1];
          v2 += 4;
          v17 = v6;
          v16 = v7;
          if ( v5 > 0 )
          {
            v9 = v8 + v4;
            do
            {
              sub_41242A(v9, v7);
              v7 = v16;
              v9 += v17;
              --v5;
            }
            while ( v5 != 0 );
            v4 = a1;
          }
          break;
        default:
          if ( *(_DWORD *)(v3 + v4) != 0 )
            sub_40E5F0(*(LPVOID *)(v3 + v4));
          break;
      }
      v3 = *v2;
    }
    while ( *v2 != -1 );
  }
}

