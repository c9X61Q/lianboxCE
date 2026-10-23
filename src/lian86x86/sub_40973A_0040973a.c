// lian86.exe @ 0x0040973a  size=292  name=sub_40973A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPWSTR __cdecl sub_40973A(int *a1)
{
  _DWORD *v1; // ebp
  int v2; // ebx
  LPWSTR v3; // esi
  LPWSTR result; // eax
  WCHAR v5; // dx
  LPWSTR v6; // ecx
  WCHAR v7; // dx
  WCHAR v8; // cx
  __int16 v9; // cx
  int v10; // edx

  v1 = (_DWORD *)sub_40D968(dword_41872C);
  v2 = -1;
  v3 = nullptr;
  result = GetCommandLineW();
  v5 = *result;
  if ( *result == 0 )
  {
LABEL_28:
    if ( a1 == nullptr )
      return (LPWSTR)v2;
    goto LABEL_32;
  }
  v6 = (LPWSTR)a1;
  while ( 1 )
  {
    if ( v5 == 32 )
    {
      do
        ++result;
      while ( *result == 32 );
    }
    v7 = *result;
    if ( *result == 34 )
    {
      v3 = ++result;
      v8 = *result;
      if ( *result == 0 )
        goto LABEL_20;
      do
      {
        if ( v8 == 34 )
          break;
        v8 = *++result;
      }
      while ( *result != 0 );
    }
    else
    {
      if ( v7 == 0 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      v3 = result;
      do
      {
        if ( v7 == 32 )
          break;
        if ( *++result == 34 )
        {
          v9 = *++result;
          if ( *result == 0 )
            goto LABEL_20;
          do
          {
            if ( v9 == 34 )
              break;
            v9 = *++result;
          }
          while ( *result != 0 );
        }
        v7 = *result;
      }
      while ( *result != 0 );
    }
    if ( *result == 0 )
    {
LABEL_20:
      v6 = result;
      goto LABEL_21;
    }
    v6 = result++;
LABEL_21:
    v10 = 1;
LABEL_23:
    if ( *v1 == v2 && a1 != nullptr )
      break;
    if ( v10 != 0 )
      ++v2;
    v3 = nullptr;
    v5 = *result;
    if ( *result == 0 )
      goto LABEL_28;
  }
  if ( v3 != nullptr )
  {
    *a1 = v6 - v3;
    ++*v1;
    return v3;
  }
LABEL_32:
  *a1 = 0;
  return result;
}

