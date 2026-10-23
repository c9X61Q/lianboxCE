// gettime.exe @ 0x409f0d size=240

int __thiscall std::filebuf::xsgetn(int this, char *a2, __int64 a3)
{
  size_t v5; // ebx
  const void *v6; // ecx
  size_t v7; // eax
  size_t v8; // ecx
  size_t v9; // ecx
  char *v10; // edx
  size_t v11; // eax
  size_t Buffer; // [esp+8h] [ebp-4h]
  char *Buffera; // [esp+8h] [ebp-4h]

  if ( a3 <= 0 )
    return 0;
  if ( *(_DWORD *)(this + 56) != 0 )
    return sub_408640((_DWORD **)this, a2, a3);
  v5 = a3;
  v6 = **(const void ***)(this + 28);
  if ( v6 != nullptr && (v7 = **(_DWORD **)(this + 44), Buffer = v7, v7 != 0) )
  {
    if ( v7 >= (unsigned int)a3 )
    {
      v7 = a3;
      Buffer = a3;
    }
    memmove(a2, v6, v7);
    v8 = Buffer;
    v5 = a3 - Buffer;
    Buffera = &a2[Buffer];
    **(_DWORD **)(this + 44) -= v8;
    **(_DWORD **)(this + 28) += v8;
  }
  else
  {
    Buffera = a2;
  }
  v9 = v5;
  if ( *(_DWORD *)(this + 76) != 0 )
  {
    std::filebuf::_Reset_back(this);
    v10 = Buffera;
    v9 = v5;
    while ( v5 > 0xFFF )
    {
      v11 = fread(v10, 1u, 0xFFFu, *(FILE **)(this + 76));
      v5 -= v11;
      v10 = &Buffera[v11];
      Buffera += v11;
      v9 = v5;
      if ( v11 != 4095 )
        return a3 - v5;
    }
    if ( v9 != 0 )
      v9 = v5 - fread(v10, 1u, v5, *(FILE **)(this + 76));
  }
  return a3 - v9;
}

