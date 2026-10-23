// busybox.exe @ 0x436db4 size=908

int __cdecl sub_436DB4(char a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *i; // esi
  const char *v5; // esi
  HANDLE **v6; // ebx
  int v7; // edi
  FILE *v8; // esi
  int v9; // edx
  int result; // eax
  char *v11; // [esp+30h] [ebp-78h]
  int v12; // [esp+34h] [ebp-74h] BYREF
  DWORD v13[4]; // [esp+38h] [ebp-70h] BYREF
  int v14; // [esp+48h] [ebp-60h]
  char *v15; // [esp+98h] [ebp-10h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  v15 = &a1;
  v2 = a2;
  byte_4735D4 = 2;
  v3 = sub_435D60(a2, (int)"^lnqvscFiHhe:*f:*LorRm:+wxA:+B:+C:+EaI", (int)"color");
  if ( (v3 & 0x200000) != 0 )
  {
    if ( (v3 & 0x80000) == 0 )
      qword_485BF0 = v11;
    if ( (v3 & 0x100000) == 0 )
      *(&NumOfElements + 1) = (__time32_t)v11;
  }
  if ( (v3 & 0x1025) != 0 )
  {
    dword_486008 &= ~2u;
    *(&NumOfElements + 1) = 0;
    qword_485BF0 = nullptr;
  }
  else if ( *(&NumOfElements + 1) > 0 )
  {
    if ( *(&NumOfElements + 1) > 0xFFFFFFF )
      *(&NumOfElements + 1) = 0xFFFFFFF;
    *(&qword_485BF0 + 1) = (char *)sub_4728CC();
  }
  LOBYTE(NumOfElements) = (dword_486008 & 8) != 0;
  v13[0] = 0;
  for ( i = (_DWORD *)*(&qword_485BF8 + 1); i != nullptr; i = (_DWORD *)*i )
    sub_43E868();
  sub_43E3D4();
  *(&qword_485BF8 + 1) = v13[0];
  if ( (dword_486008 & 0x800) != 0 && *(&qword_485BF8 + 1) == 0 )
  {
    v5 = ".*";
    if ( (dword_486008 & 0x40000) == 0 )
      v5 = (const char *)&unk_47BC6E;
    *(_DWORD *)sub_4728CC() = v5;
    sub_43E368();
    LOBYTE(NumOfElements) = NumOfElements ^ 1;
  }
  if ( *dword_485AD0 == 102 )
    dword_486008 |= 0x40u;
  if ( (dword_486008 & 0x62000) == 0 )
    *(&MultiByteStr + 1) = 8;
  if ( *dword_485AD0 == 101 || (dword_486008 & 0x400000) != 0 )
    *(&MultiByteStr + 1) |= 1u;
  if ( (dword_486008 & 0x80u) != 0 )
    *(&MultiByteStr + 1) |= 2u;
  v6 = (HANDLE **)(v2 + 4 * dword_473090);
  if ( *(&qword_485BF8 + 1) == 0 )
  {
    if ( *v6 == nullptr )
      sub_418164();
    ++v6;
    sub_43E868();
  }
  if ( *v6 != nullptr && v6[1] != nullptr )
    BYTE1(NumOfElements) = 1;
  if ( (dword_486008 & 0x100) != 0 )
    BYTE1(NumOfElements) = 1;
  if ( (dword_486008 & 0x200) != 0 )
    BYTE1(NumOfElements) = 0;
  v7 = 0;
  do
  {
    lpHandles = *v6;
    v8 = off_4730E8(0);
    if ( lpHandles == nullptr || *(_BYTE *)lpHandles == 45 && *((_BYTE *)lpHandles + 1) == 0 )
    {
      lpHandles = (HANDLE *)"(standard input)";
LABEL_55:
      v7 |= sub_4368E0(&savedregs);
      sub_42EE00(v8);
      goto LABEL_56;
    }
    if ( (dword_486008 & 0xC000) != 0 && sub_444C28(lpHandles, v13) == 0 && (v14 & 0xF000) == 0x4000 )
    {
      if ( (dword_486008 & 0x200) == 0 )
        BYTE1(NumOfElements) = 1;
      v12 = 0;
      sub_45927C(0, (char)&v12, 0);
      v7 |= v12;
    }
    else
    {
      v8 = (FILE *)sub_4314C0((char *)lpHandles);
      if ( v8 != nullptr )
        goto LABEL_55;
      if ( (dword_486008 & 0x10) == 0 )
        sub_418224((const char *)lpHandles, v9);
      BYTE2(NumOfElements) = 1;
    }
LABEL_56:
    if ( *v6 == nullptr )
      break;
    ++v6;
  }
  while ( *v6 != nullptr );
  result = 2;
  if ( BYTE2(NumOfElements) == 0 )
    return v7 == 0;
  return result;
}

