// busybox.exe @ 0x45bc64 size=273

int __usercall sub_45BC64@<eax>(_BYTE *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  CHAR *v5; // ebx
  int result; // eax
  unsigned int v7; // ecx
  int v8; // edx
  const char *v9; // esi
  FILE *v10; // eax
  UINT CodePage; // [esp+0h] [ebp-150h]
  _BYTE v13[2]; // [esp+26h] [ebp-12Ah] BYREF
  _BYTE *v14; // [esp+28h] [ebp-128h]
  _BYTE *v15; // [esp+2Ch] [ebp-124h]
  int v16; // [esp+30h] [ebp-120h]
  CHAR *v17; // [esp+34h] [ebp-11Ch]
  int v18; // [esp+38h] [ebp-118h]
  CHAR MultiByteStr[276]; // [esp+3Ch] [ebp-114h] BYREF

  v5 = MultiByteStr;
  memset(MultiByteStr, 0, 0x104u);
  result = WideCharToMultiByte(0, 0, (LPCWCH)(a2 + 12), *(_DWORD *)(a2 + 8) >> 1, MultiByteStr, 260, nullptr, nullptr);
  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 <= 5 && ((1 << v7) & *(_DWORD *)(a3 + 12)) != 0 )
  {
    v13[0] = aXndcmy[v7];
    v13[1] = 0;
    v8 = *(_DWORD *)(a3 + 36);
    if ( *a1 != 45 || a1[1] != 0 )
    {
      v14 = a1;
      v15 = v13;
      v16 = v8;
      if ( result == 0 )
        v5 = nullptr;
      v17 = v5;
      v18 = 0;
      return sub_461710(CodePage);
    }
    else
    {
      v9 = "%s\t%s\t%s\n";
      if ( result == 0 )
        v9 = "%s\t%s\n";
      sub_46F088(v9, v13, v8, MultiByteStr);
      v10 = off_4730E8(1);
      return fflush(v10);
    }
  }
  return result;
}

