// lian86.exe @ 0x00407270  size=330  name=sub_407270
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __cdecl sub_407270(int *a1, int *a2, int i, int a4)
{
  int v4; // esi
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // ebp
  _DWORD *v11; // edi
  int *v12; // eax
  int v13; // edx
  _DWORD *v14; // [esp+Ch] [ebp-Ch] BYREF
  int v15; // [esp+10h] [ebp-8h] BYREF

  v4 = i;
  if ( i == 2 )
  {
    v5 = (_DWORD *)*a1;
    if ( *(_WORD *)(*a1 + a4) < *(_WORD *)(a4 + *a2) )
    {
      *a1 = *a2;
      *a2 = (int)v5;
      *(_DWORD *)*a1 = v5;
      *(_DWORD *)(*a2 + 4) = *a1;
    }
  }
  else if ( i > 2 )
  {
    v6 = (_DWORD *)*a1;
    v7 = i / 2;
    v8 = i - i / 2;
    for ( i = *a1; v7 != 0; --v7 )
    {
      v6 = (_DWORD *)*v6;
      i = (int)v6;
    }
    v9 = v4 - v8;
    v10 = a4;
    v14 = (_DWORD *)v6[1];
    sub_407270(a1, &v14, v9, a4);
    sub_407270(&i, a2, v8, v10);
    v11 = (_DWORD *)*a1;
    v12 = &v15;
    v13 = i;
    v14 = (_DWORD *)*a1;
    if ( v9 != 0 )
    {
      while ( v8 != 0 )
      {
        if ( *(_WORD *)((char *)v11 + v10) < *(_WORD *)(v13 + v10) )
        {
          *v12 = v13;
          --v8;
          *(_DWORD *)(i + 4) = v12;
          v12 = (int *)i;
          v11 = v14;
          v13 = *(_DWORD *)i;
          i = *(_DWORD *)i;
        }
        else
        {
          *v12 = (int)v11;
          --v9;
          v14[1] = v12;
          v12 = v14;
          v13 = i;
          v11 = (_DWORD *)*v14;
          v14 = (_DWORD *)*v14;
        }
        if ( v9 == 0 )
          goto LABEL_13;
      }
      do
      {
        *v12 = (int)v11;
        v14[1] = v12;
        v12 = v14;
        v11 = (_DWORD *)*v14;
        v14 = (_DWORD *)*v14;
        --v9;
      }
      while ( v9 != 0 );
    }
    else
    {
LABEL_13:
      while ( v8 != 0 )
      {
        *v12 = v13;
        *(_DWORD *)(i + 4) = v12;
        v12 = (int *)i;
        v13 = *(_DWORD *)i;
        i = *(_DWORD *)i;
        --v8;
      }
    }
    *a1 = v15;
    *a2 = (int)v12;
  }
}

