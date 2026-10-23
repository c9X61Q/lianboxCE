// gettime.exe @ 0x40912a size=254

int __cdecl _Toupper(int C, const _Ctypevec *a2)
{
  wchar_t *LocaleName; // edi
  unsigned int Page; // eax
  int result; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  const unsigned __int16 *v8; // eax
  int v9; // eax
  bool v10; // zf
  UINT CodePage; // [esp+Ch] [ebp-Ch]
  WCHAR DestStr; // [esp+10h] [ebp-8h] BYREF
  CHAR MultiByteStr; // [esp+14h] [ebp-4h] BYREF
  char v14; // [esp+15h] [ebp-3h]
  char v15; // [esp+16h] [ebp-2h]

  if ( a2 != nullptr )
  {
    LocaleName = a2->_LocaleName;
    Page = a2->_Page;
  }
  else
  {
    LocaleName = ___lc_locale_name_func()[2];
    Page = ___lc_codepage_func();
  }
  CodePage = Page;
  if ( LocaleName == nullptr )
  {
    result = C;
    if ( C >= 97 && C <= 122 )
      return C - 32;
    return result;
  }
  if ( (unsigned int)C < 0x100 )
  {
    if ( a2 == nullptr )
    {
      if ( islower(C) == 0 )
        return C;
      goto LABEL_17;
    }
    if ( (a2->_Table[C] & 2) == 0 )
      return C;
LABEL_13:
    v5 = C >> 8;
    v6 = a2->_Table[BYTE1(C)] < 0;
    goto LABEL_14;
  }
  if ( a2 != nullptr )
    goto LABEL_13;
LABEL_17:
  v8 = __pctype_func();
  v5 = C >> 8;
  v6 = v8[BYTE1(C)] & 0x8000;
LABEL_14:
  if ( v6 != 0 )
  {
    MultiByteStr = v5;
    v14 = C;
    v15 = 0;
    v7 = 2;
  }
  else
  {
    MultiByteStr = C;
    v14 = 0;
    v7 = 1;
  }
  v9 = __crtLCMapStringA(LocaleName, 0x200u, &MultiByteStr, v7, &DestStr, 3, CodePage, 1);
  if ( v9 == 0 )
    return C;
  v10 = v9 == 1;
  result = (unsigned __int8)DestStr;
  if ( !v10 )
    return HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
  return result;
}

