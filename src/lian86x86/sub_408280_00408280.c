// lian86.exe @ 0x00408280  size=363  name=sub_408280
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __cdecl sub_408280(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // eax
  int v8; // esi
  int *v9; // ecx
  _DWORD *v10; // edx
  _DWORD *v11; // edi
  _DWORD *i; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v13; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+18h] [ebp-8h] BYREF

  if ( a3 == 2 )
  {
    v4 = (_DWORD *)*a1;
    if ( *(double *)(a4 + *(_DWORD *)a2) < *(double *)(*a1 + a4) )
    {
      *a1 = *(_DWORD *)a2;
      *(_DWORD *)a2 = v4;
      *(_DWORD *)*a1 = v4;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *a1;
    }
  }
  else if ( a3 > 2 )
  {
    v5 = a3 / 2;
    v6 = a3 - a3 / 2;
    v7 = (_DWORD *)*a1;
    for ( i = (_DWORD *)*a1; v5 != 0; --v5 )
    {
      v7 = (_DWORD *)*v7;
      i = v7;
    }
    v8 = a3 / 2;
    v13 = (_DWORD *)v7[1];
    sub_408280(a1, &v13, a3 / 2, a4);
    sub_408280(&i, a2, v6, a4);
    v9 = &v14;
    v10 = i;
    v11 = (_DWORD *)*a1;
    v13 = (_DWORD *)*a1;
    if ( a3 / 2 != 0 )
    {
      while ( v6 != 0 )
      {
        if ( *(double *)((char *)v10 + a4) < *(double *)((char *)v11 + a4) )
        {
          *v9 = (int)v10;
          --v6;
          i[1] = v9;
          v9 = i;
          v11 = v13;
          v10 = (_DWORD *)*i;
          i = (_DWORD *)*i;
        }
        else
        {
          *v9 = (int)v11;
          --v8;
          v13[1] = v9;
          v9 = v13;
          v10 = i;
          v11 = (_DWORD *)*v13;
          v13 = (_DWORD *)*v13;
        }
        if ( v8 == 0 )
          goto LABEL_13;
      }
      do
      {
        *v9 = (int)v11;
        v13[1] = v9;
        v9 = v13;
        v11 = (_DWORD *)*v13;
        v13 = (_DWORD *)*v13;
        --v8;
      }
      while ( v8 != 0 );
      *a1 = v14;
      *(_DWORD *)a2 = v9;
    }
    else
    {
LABEL_13:
      while ( v6 != 0 )
      {
        *v9 = (int)v10;
        i[1] = v9;
        v9 = i;
        v10 = (_DWORD *)*i;
        i = (_DWORD *)*i;
        --v6;
      }
      *a1 = v14;
      *(_DWORD *)a2 = v9;
    }
  }
}

