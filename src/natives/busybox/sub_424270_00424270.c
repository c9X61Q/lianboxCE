// busybox.exe @ 0x424270 size=381

u_long __usercall sub_424270@<eax>(u_long result@<eax>, unsigned int a2@<edx>, int a3@<ecx>)
{
  unsigned int v3; // ebx
  _DWORD **v4; // esi
  _BYTE *v5; // eax
  unsigned int v6; // edx
  u_long v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned int v10; // edi
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // [esp+0h] [ebp-44h]
  char v14; // [esp+4h] [ebp-40h]
  unsigned int i; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  unsigned int v18; // [esp+18h] [ebp-2Ch]
  unsigned int v19; // [esp+1Ch] [ebp-28h]
  unsigned int v20; // [esp+30h] [ebp-14h]

  v3 = dword_486008 & 0x30;
  v4 = (_DWORD **)result;
  if ( (dword_486008 & 0x30) != 0 )
  {
    v8 = a2;
    v18 = 0;
LABEL_17:
    v7 = 1;
    goto LABEL_18;
  }
  while ( *v4 != nullptr )
  {
    v5 = (_BYTE *)sub_44F0D4(a3, **v4);
    v6 = v20;
    if ( (dword_486008 & 0x8000) != 0 )
    {
      v6 = v20 + 2;
      while ( 1 )
      {
        LOBYTE(a3) = *v5;
        if ( *v5 == 0 )
          break;
        if ( (_BYTE)a3 == 92 || (_BYTE)a3 == 34 )
          ++v6;
        ++v5;
      }
    }
    if ( v3 < v6 )
      v3 = v6;
    ++v4;
  }
  v18 = v3 + ((dword_486008 & 8) == 0 ? 0xFFFFFFEC : 0) + ((dword_486008 << 23 >> 31) & 5) + 22;
  result = *(&MultiByteStr + 1) / v18;
  v7 = *(&MultiByteStr + 1) / v18;
  if ( *(&MultiByteStr + 1) / v18 <= 1 )
  {
    v8 = a2;
    goto LABEL_17;
  }
  result = (a2 / v7 * v7 < a2) + a2 / v7;
  v8 = result;
LABEL_18:
  v9 = 0;
  v17 = 0;
  for ( i = 0; v8 != i; ++i )
  {
    v19 = i;
    v10 = v9;
    v11 = 0;
    do
    {
      v12 = v19;
      if ( (dword_486008 & 0x200) != 0 )
        v12 = v10;
      if ( v12 < a2 )
      {
        if ( v11 != 0 )
        {
          v14 = v17 - v11;
          sub_46F088("%*s");
          v11 = v17;
        }
        v17 = v11 + v18;
        v11 += sub_4243F0(v13, v14);
      }
      ++v10;
      v19 += v8;
    }
    while ( v10 != v9 + v7 );
    result = sub_46F0B8(10);
    v9 = v10;
  }
  return result;
}

