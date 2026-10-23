// lian86.exe @ 0x004087f0  size=347  name=sub_4087F0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __cdecl sub_4087F0(int *a1, int *a2, int i, int a4)
{
  int v4; // edi
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  int v10; // ebp
  _DWORD *v11; // ecx
  int v12; // eax
  int *v13; // esi
  _DWORD *v14; // [esp+8h] [ebp-Ch] BYREF
  int v15; // [esp+Ch] [ebp-8h] BYREF

  v4 = i;
  if ( i == 2 )
  {
    if ( (int)sub_408D50(*(_DWORD *)(*a1 + a4), *(_DWORD *)(*a2 + a4)) > 0 )
    {
      v5 = (_DWORD *)*a1;
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
    sub_4087F0(a1, &v14, v9, a4);
    sub_4087F0(&i, a2, v8, v10);
    v11 = (_DWORD *)*a1;
    v12 = i;
    v13 = &v15;
    v14 = (_DWORD *)*a1;
    if ( v9 != 0 )
    {
      while ( v8 != 0 )
      {
        if ( (int)sub_408D50(*(_DWORD *)((char *)v11 + v10), *(_DWORD *)(v12 + v10)) > 0 )
        {
          --v8;
          *v13 = i;
          *(_DWORD *)(i + 4) = v13;
          v13 = (int *)i;
          v11 = v14;
          v12 = *(_DWORD *)i;
          i = *(_DWORD *)i;
        }
        else
        {
          --v9;
          *v13 = (int)v14;
          v14[1] = v13;
          v13 = v14;
          v12 = i;
          v11 = (_DWORD *)*v14;
          v14 = (_DWORD *)*v14;
        }
        if ( v9 == 0 )
          goto LABEL_13;
      }
      do
      {
        *v13 = (int)v11;
        v14[1] = v13;
        v13 = v14;
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
        *v13 = v12;
        *(_DWORD *)(i + 4) = v13;
        v13 = (int *)i;
        v12 = *(_DWORD *)i;
        i = *(_DWORD *)i;
        --v8;
      }
    }
    *a1 = v15;
    *a2 = (int)v13;
  }
}

