// gettime.exe @ 0x4096f0 size=104

int __cdecl std::codecvt<char,char,_Mbstatet>::_Getcat(_DWORD *a1, _DWORD *a2)
{
  char v2; // bl
  _DWORD *v3; // esi
  char *v4; // eax
  _BYTE v6[52]; // [esp+10h] [ebp-44h] BYREF
  void *Block; // [esp+44h] [ebp-10h]
  int v8; // [esp+50h] [ebp-4h]

  v2 = 0;
  Block = nullptr;
  if ( a1 != nullptr && *a1 == 0 )
  {
    v3 = operator new(8u);
    Block = v3;
    v8 = 0;
    if ( v3 != nullptr )
    {
      v4 = unknown_libname_23(a2);
      sub_402DF0((int)v6, v4);
      v2 = 1;
      *v3 = &std::codecvt<char,char,_Mbstatet>::`vftable';
      v3[1] = 0;
    }
    else
    {
      v3 = nullptr;
    }
    *a1 = v3;
    if ( (v2 & 1) != 0 )
      sub_403730((int)v6);
  }
  return 2;
}

