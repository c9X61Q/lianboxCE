// lian86.exe @ 0x0040a330  size=273  name=sub_40A330
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A330(LPCCH lpMultiByteStr, int a2, UINT CodePage, int a4)
{
  char v4; // dl
  UINT v5; // ecx
  int v6; // ebx
  _WORD *v7; // eax
  _WORD *v8; // esi
  const CHAR *v9; // edi
  __int16 v10; // ax
  int result; // eax
  UINT v12; // ecx
  int v13; // ebp
  int v14; // esi
  WCHAR *v15; // edi
  UINT CodePagea; // [esp+18h] [ebp+Ch]

  v4 = CodePage;
  v5 = CodePage & 0x1F;
  v6 = a2 < -1 ? 0 : a2;
  if ( v5 != 25 )
  {
    if ( v5 == 2 )
    {
      v12 = 65001;
      CodePagea = 65001;
      if ( v6 == -1 )
        goto LABEL_16;
      if ( (v4 & 0x40) == 0 )
      {
        v6 = sub_40EAC0(lpMultiByteStr, a2 < -1 ? 0 : a2);
        v12 = 65001;
      }
    }
    else
    {
      v12 = 0;
      CodePagea = 0;
    }
    if ( v6 != -1 )
    {
      v13 = 0;
      if ( *lpMultiByteStr != 0 )
      {
        do
        {
          if ( v13 >= v6 )
            break;
          ++v13;
        }
        while ( lpMultiByteStr[v13] != 0 );
      }
      goto LABEL_20;
    }
LABEL_16:
    v13 = strlen(lpMultiByteStr);
LABEL_20:
    v14 = MultiByteToWideChar(v12, 0, lpMultiByteStr, v13, nullptr, 0);
    v15 = (WCHAR *)sub_40E900(v14, a4);
    result = MultiByteToWideChar(CodePagea, 0, lpMultiByteStr, v13, v15, v14 + 1);
    v15[result] = 0;
    return result;
  }
  if ( v6 == -1 )
    v6 = wcslen((const unsigned __int16 *)lpMultiByteStr);
  v7 = (_WORD *)sub_40E900(v6, a4);
  v8 = v7;
  if ( lpMultiByteStr != nullptr && v6 != 0 )
  {
    v9 = (const CHAR *)(lpMultiByteStr - (LPCCH)v7);
    do
    {
      v10 = *(_WORD *)((char *)v8 + (_DWORD)v9);
      if ( v10 == 0 )
        break;
      *v8++ = v10;
      --v6;
    }
    while ( v6 != 0 );
  }
  sub_40EA90(v6);
  *v8 = 0;
  return 0;
}

