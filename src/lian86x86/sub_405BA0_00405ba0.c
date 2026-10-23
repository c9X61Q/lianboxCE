// lian86.exe @ 0x00405ba0  size=500  name=sub_405BA0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405BA0(wchar_t *Source, const unsigned __int16 *a2, char a3, int a4, int a5, int a6)
{
  const wchar_t *v6; // edi
  unsigned int v7; // ebx
  const unsigned __int16 *v8; // esi
  wchar_t *v9; // ebp
  unsigned int v10; // ecx
  LPVOID v11; // eax
  int v12; // edx
  unsigned __int16 v13; // cx
  wchar_t *v14; // eax
  int v15; // ecx
  wchar_t v16; // ax
  void *lpMem; // [esp+10h] [ebp-Ch]
  const wchar_t *v19; // [esp+14h] [ebp-8h]
  wchar_t *v20; // [esp+18h] [ebp-4h]
  wchar_t *Sourcea; // [esp+20h] [ebp+4h]
  signed int Sourceb; // [esp+20h] [ebp+4h]
  int v23; // [esp+24h] [ebp+8h]
  int (__cdecl *v24)(const wchar_t *, const wchar_t *, size_t); // [esp+34h] [ebp+18h]

  v6 = Source;
  if ( Source != nullptr )
    v7 = wcslen(Source);
  else
    v7 = 0;
  v8 = a2;
  Sourcea = (wchar_t *)sub_40E880(Source);
  v23 = sub_40E880(a2);
  v9 = (wchar_t *)sub_40E900(v7, a6);
  if ( Sourcea != nullptr )
    v6 = (const wchar_t *)sub_40EA10(Sourcea);
  if ( v23 != 0 )
    v8 = (const unsigned __int16 *)sub_40EA10(v23);
  v20 = v9;
  if ( v6 != nullptr && *v6 != 0 )
  {
    if ( v8 != nullptr && *v8 != 0 )
    {
      v19 = v6;
      v10 = wcslen(v8);
      Sourceb = v10;
      if ( v23 != 0 )
      {
        v11 = HeapAlloc(hHeap, 0, 2 * v10 + 2);
        lpMem = v11;
        v12 = (_BYTE *)v11 - (_BYTE *)v8;
        do
        {
          v13 = *v8++;
          *(const unsigned __int16 *)((char *)v8 + v12 - 2) = v13;
        }
        while ( v13 != 0 );
        v8 = (const unsigned __int16 *)v11;
      }
      else
      {
        lpMem = (void *)a4;
      }
      v24 = wcsnicmp;
      if ( (a3 & 1) == 0 )
        v24 = wcsncmp;
      if ( a4 > 1 )
      {
        wcsncpy(v9, v6, a4 - 1);
        v9 = &v9[a4 - 1];
        v6 = &v6[a4 - 1];
      }
      if ( *v6 != 0 )
      {
        v14 = (wchar_t *)Sourceb;
        do
        {
          if ( v24(v6, v8, (size_t)v14) != 0 )
          {
            *v9++ = *v6;
            v14 = (wchar_t *)Sourceb;
            ++v6;
          }
          else
          {
            v14 = (wchar_t *)Sourceb;
            v6 += Sourceb;
            if ( a5 != -1 && --a5 <= 0 )
            {
              wcsncpy(v9, v6, v7 - (v6 - v19));
              v9 += v7 - (v6 - v19);
              break;
            }
          }
        }
        while ( *v6 != 0 );
      }
      if ( v23 != 0 )
        HeapFree(hHeap, 0, lpMem);
    }
    else
    {
      v15 = (char *)v9 - (char *)v6;
      do
      {
        v16 = *v6++;
        *(const wchar_t *)((char *)v6 + v15 - 2) = v16;
      }
      while ( v16 != 0 );
      v9 += v7;
    }
  }
  sub_40EA90(v7 - (v9 - v20));
  *v9 = 0;
  return 0;
}

