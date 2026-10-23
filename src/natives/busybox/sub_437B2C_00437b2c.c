// busybox.exe @ 0x437b2c size=501

signed __int32 *__usercall sub_437B2C@<eax>(signed __int32 *result@<eax>, int a2@<ecx>)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  const char *v8; // [esp+Ch] [ebp-3Ch]
  const char *Str; // [esp+10h] [ebp-38h]
  size_t v10; // [esp+18h] [ebp-30h]
  int v11; // [esp+1Ch] [ebp-2Ch]
  int v12; // [esp+20h] [ebp-28h]
  size_t v13; // [esp+24h] [ebp-24h]
  int v14; // [esp+28h] [ebp-20h]
  int v15; // [esp+2Ch] [ebp-1Ch]
  int v16; // [esp+2Ch] [ebp-1Ch]
  _BYTE v17[20]; // [esp+34h] [ebp-14h] BYREF

  if ( !_bittest(result, 0xAu) )
    return result;
  v2 = (int)result;
  v3 = dword_486010;
  result = *(signed __int32 **)(dword_486010 + 80);
  if ( result == (signed __int32 *)v2 )
  {
    v11 = (int)sub_436630(result);
    if ( v11 < 0 )
      sub_4645B8();
    sub_431F88(v11, v4);
    Str = (const char *)sub_436704(*(_DWORD *)(v3 + 28), v5);
    v13 = strlen(Str);
    v12 = 0;
    v14 = 0;
    v15 = 0;
    while ( v12 != v11 )
    {
      v8 = (const char *)sub_436704(*(_DWORD *)(v3 - 28) + 24 * v12, v11);
      v10 = strlen(v8);
      if ( v15 != 0 )
      {
        qmemcpy((void *)(v14 + v15), Str, v13);
        v14 += v13;
      }
      v15 = sub_452C80(v17, v14 + v10 + v13);
      qmemcpy((void *)(v15 + v14), v8, v10);
      ++v12;
      v14 += v10;
    }
    if ( v15 != 0 )
      *(_BYTE *)(v15 + v14) = 0;
    result = (signed __int32 *)sub_45EC5C();
    *(_BYTE *)(v3 - 8) = 1;
    return result;
  }
  if ( *(_DWORD *)(dword_486010 + 52) == v2 )
  {
    *(_BYTE *)(dword_486010 - 8) = 0;
    return result;
  }
  if ( *(_DWORD *)(dword_486010 + 24) == v2 )
  {
    sub_462320();
    sub_436704(v2, v6);
    return (signed __int32 *)sub_445100();
  }
  if ( *(_DWORD *)(dword_486010 + 36) == v2 )
  {
    sub_436704(v2, a2);
    return (signed __int32 *)sub_445100();
  }
  if ( *(_DWORD *)(dword_486010 + 84) == v2 )
  {
    result = (signed __int32 *)sub_43CB2C(a2);
    *(_BYTE *)(v3 - 12) = (_BYTE)result;
  }
  else
  {
    v16 = (int)sub_436630(result);
    v7 = -1431655765 * ((v2 - *(_DWORD *)(v3 - 28)) >> 3);
    if ( v7 >= v16 )
      v16 = v7 + 1;
    return (signed __int32 *)sub_45EC34((double)v16);
  }
  return result;
}

