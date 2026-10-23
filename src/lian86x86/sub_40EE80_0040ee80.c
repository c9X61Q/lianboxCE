// lian86.exe @ 0x0040ee80  size=311  name=sub_40EE80
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40EE80(char *a1, int *a2, int a3, int *a4)
{
  int v4; // ebx
  int v5; // esi
  char *v6; // edi
  int result; // eax
  int v8; // eax
  int v9; // edi
  char v10; // [esp+13h] [ebp-39h] BYREF
  int v11; // [esp+14h] [ebp-38h] BYREF
  int v12; // [esp+18h] [ebp-34h]
  char *v13; // [esp+20h] [ebp-2Ch]
  int i; // [esp+24h] [ebp-28h]
  int v15; // [esp+28h] [ebp-24h]
  int v16; // [esp+34h] [ebp-18h]
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]

  v4 = *a4;
  v5 = *a2;
  if ( *a2 != 0 )
  {
    v6 = a1;
    *a2 = 0;
  }
  else
  {
    v6 = &v10;
    v5 = 1;
    a1 = &v10;
  }
  v11 = a3;
  v12 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  result = sub_4108D0(&v11, "1.2.11", 56);
  if ( result == 0 )
  {
    v13 = v6;
    for ( i = 0; ; result = i )
    {
      if ( result == 0 )
      {
        i = v5;
        v5 = 0;
      }
      if ( v12 == 0 )
      {
        v12 = v4;
        v4 = 0;
      }
      v8 = sub_40EFF0(&v11, 0);
      v9 = v8;
      if ( v8 != 0 )
        break;
    }
    *a4 -= v4 + v12;
    if ( a1 == &v10 )
    {
      if ( v15 != 0 && v8 == -5 )
        v5 = 1;
    }
    else
    {
      *a2 = v15;
    }
    sub_4107A0(&v11);
    if ( v9 == 1 )
    {
      return 0;
    }
    else
    {
      if ( v9 == 2 || v9 == -5 && v5 + i != 0 )
        return -3;
      return v9;
    }
  }
  return result;
}

