// lian86.exe @ 0x0040ac12  size=210  name=sub_40AC12
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40AC12(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  _DWORD *i; // ecx
  int v6; // ebx
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // eax

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = a2;
  if ( a2 < 0 || (v4 = *(_DWORD *)(a1 + 16), a2 >= v4) )
  {
    i = nullptr;
  }
  else if ( *(_BYTE *)(a1 + 48) != 0 )
  {
    if ( a2 >= v4 / 2 )
    {
      i = *(_DWORD **)(a1 + 4);
      v6 = v4 - a2;
      while ( 1 )
      {
        --v6;
        if ( i == nullptr || v6 == 0 )
          break;
        i = (_DWORD *)i[1];
      }
    }
    else
    {
      i = *(_DWORD **)a1;
      while ( i != nullptr && v2 != 0 )
      {
        i = (_DWORD *)*i;
        --v2;
      }
    }
  }
  else
  {
    i = *(_DWORD **)(a1 + 8);
    if ( a2 <= v3 )
    {
      v9 = v3 - a2;
      if ( v9 < a2 )
      {
        while ( i != nullptr && v9 != 0 )
        {
          i = (_DWORD *)i[1];
          --v9;
        }
      }
      else
      {
        i = *(_DWORD **)a1;
        while ( i != nullptr && v2 != 0 )
        {
          i = (_DWORD *)*i;
          --v2;
        }
      }
    }
    else
    {
      v7 = v4 - a2;
      v8 = a2 - v3;
      if ( a2 - v3 < v7 )
      {
        while ( i != nullptr && v8 != 0 )
        {
          i = (_DWORD *)*i;
          --v8;
        }
      }
      else
      {
        for ( i = *(_DWORD **)(a1 + 4); ; i = (_DWORD *)i[1] )
        {
          --v7;
          if ( i == nullptr || v7 == 0 )
            break;
        }
      }
    }
  }
  v10 = *(_DWORD **)(a1 + 12);
  *(_DWORD *)(a1 + 8) = i;
  *v10 = i;
  if ( i != nullptr )
  {
    *(_BYTE *)(a1 + 48) = 0;
    return i + 2;
  }
  else
  {
    *(_BYTE *)(a1 + 48) = 1;
    return nullptr;
  }
}

