// busybox.exe @ 0x418b04 size=412

int sub_418B04()
{
  const char ***v0; // ebx
  const char *Str1; // edi
  const char **v2; // esi
  const char **v3; // edx
  __int64 v4; // kr00_8
  __int64 v5; // rax
  char v6; // cl
  bool v7; // zf
  bool v8; // zf
  int result; // eax
  bool v10; // sf
  bool v11; // of
  bool v12; // sf
  bool v13; // of
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  char v17; // [esp+Ch] [ebp-D0h]
  const char *v18; // [esp+Ch] [ebp-D0h]
  _DWORD v19[14]; // [esp+10h] [ebp-CCh] BYREF
  int v20; // [esp+48h] [ebp-94h]
  _DWORD v21[14]; // [esp+70h] [ebp-6Ch] BYREF
  int v22; // [esp+A8h] [ebp-34h]

  v0 = (const char ***)dword_486000;
  Str1 = **(const char ***)dword_486000;
  *(_DWORD *)dword_486000 += 4;
  sub_41C3EC();
  v2 = v0[1];
  v3 = *v0 + 1;
  *v0 = v3;
  if ( *v3 == nullptr )
    sub_46456C(0, "argument expected");
  if ( (unsigned __int8)(*(_BYTE *)v2 - 28) <= 5u )
  {
    v4 = ((__int64 (*)(void))sub_435CD0)();
    LODWORD(v5) = sub_435CD0();
    v6 = *(_BYTE *)v2;
    if ( *(_BYTE *)v2 == 28 )
    {
      HIDWORD(v5) ^= HIDWORD(v4);
      v7 = v5 == (unsigned int)v4;
LABEL_22:
      LOBYTE(result) = v7;
      return (unsigned __int8)result;
    }
    switch ( v6 )
    {
      case 29:
        HIDWORD(v5) ^= HIDWORD(v4);
        v8 = v5 == (unsigned int)v4;
LABEL_8:
        LOBYTE(result) = !v8;
        return (unsigned __int8)result;
      case 30:
        v11 = __OFSUB__(v4, v5);
        v10 = (((unsigned __int64)(v4 - v5) >> 32) & 0x80000000) != 0LL;
LABEL_16:
        LOBYTE(result) = v10 == v11;
        return (unsigned __int8)result;
      case 31:
        v13 = __OFSUB__(v5, v4);
        v12 = (((unsigned __int64)(v5 - v4) >> 32) & 0x80000000) != 0LL;
        break;
      case 32:
        v11 = __OFSUB__(v5, v4);
        v10 = (((unsigned __int64)(v5 - v4) >> 32) & 0x80000000) != 0LL;
        goto LABEL_16;
      default:
        v13 = __OFSUB__(v4, v5);
        v12 = (((unsigned __int64)(v4 - v5) >> 32) & 0x80000000) != 0LL;
        break;
    }
    LOBYTE(result) = v12 ^ v13;
    return (unsigned __int8)result;
  }
  v17 = *(_BYTE *)v2;
  if ( (unsigned __int8)(*(_BYTE *)v2 - 22) > 5u )
  {
    v18 = *v3;
    if ( sub_444C28(Str1, v19) != 0 || sub_444C28(v18, v21) != 0 )
      return 0;
    if ( *(_BYTE *)v2 == 17 )
    {
      LOBYTE(result) = v20 > v22;
      return (unsigned __int8)result;
    }
    if ( *(_BYTE *)v2 == 18 )
    {
      LOBYTE(result) = v20 < v22;
      return (unsigned __int8)result;
    }
    if ( v19[0] != v21[0] )
      return 0;
    if ( v19[3] != v21[3] )
      return 0;
    result = 1;
    if ( v19[2] != v21[2] )
      return 0;
  }
  else
  {
    v14 = strcmp(Str1, *v3);
    v15 = v14;
    if ( v17 == 24 )
    {
      v7 = v14 == 0;
      goto LABEL_22;
    }
    if ( v17 == 25 )
    {
      v8 = v14 == 0;
      goto LABEL_8;
    }
    v16 = v14 >> 31;
    if ( v17 != 26 )
      v16 = (__PAIR64__(SHIDWORD(v15) >> 31, SHIDWORD(v15) >> 31) - v15) >> 32;
    return v16 >> 31;
  }
  return result;
}

