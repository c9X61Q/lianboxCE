// lian86.exe @ 0x00406670  size=239  name=sub_406670
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned __int16 *__cdecl sub_406670(char *a1, unsigned __int16 *a2)
{
  WCHAR *v2; // eax
  __int16 *v3; // ebp
  LPWSTR (__stdcall *v4)(LPWSTR); // edi
  unsigned __int16 v5; // bx
  _WORD *v6; // ecx
  __int16 v7; // ax
  char *v8; // esi
  int v9; // ebp
  WCHAR *v10; // eax
  int v11; // ebx
  unsigned __int16 *v12; // ecx
  char *i; // eax
  WCHAR *v14; // ebp
  int v15; // edi
  unsigned __int16 *v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+18h] [ebp-Ch]
  unsigned __int16 v19; // [esp+1Ch] [ebp-8h]
  unsigned __int16 *v20; // [esp+2Ch] [ebp+8h]

  v2 = (WCHAR *)*a2;
  v3 = (__int16 *)(a2 + 1);
  v20 = a2 + 1;
  if ( (_WORD)v2 == 0 )
    return (unsigned __int16 *)a1;
  v4 = CharLowerW;
  v5 = (unsigned __int16)CharLowerW(v2);
  v6 = v3 + 1;
  v19 = v5;
  do
    v7 = *v3++;
  while ( v7 != 0 );
  v8 = a1;
  v9 = v3 - v6;
  v18 = v9;
  while ( 1 )
  {
    v10 = (WCHAR *)*(unsigned __int16 *)v8;
    v8 += 2;
    if ( (_WORD)v10 == 0 )
      break;
    if ( (unsigned __int16)v4(v10) == v5 )
    {
      v11 = v9;
      v12 = v20;
      if ( v9 == 0 )
        return (unsigned __int16 *)(v8 - 2);
      for ( i = (char *)(v8 - (char *)v20); ; i = (char *)(v8 - (char *)v20) )
      {
        v14 = (WCHAR *)*(unsigned __int16 *)((char *)v12 + (_DWORD)i);
        v17 = v12 + 1;
        v15 = (unsigned __int16)v4((LPWSTR)*v12);
        if ( (unsigned __int16)CharLowerW(v14) != v15 )
          break;
        if ( (_WORD)v14 == 0 )
          return (unsigned __int16 *)(v8 - 2);
        if ( --v11 == 0 )
          return (unsigned __int16 *)(v8 - 2);
        v4 = CharLowerW;
        v12 = v17;
      }
      v4 = CharLowerW;
      v9 = v18;
      v5 = v19;
    }
  }
  return nullptr;
}

