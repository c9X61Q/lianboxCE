// gettime.exe @ 0x40994d size=266

int __thiscall std::filebuf::overflow(int this, int a2)
{
  int v2; // ebx
  unsigned int v5; // ecx
  _DWORD *v6; // edx
  _DWORD *v7; // edx
  _BYTE *v8; // esi
  int v9; // eax
  bool v10; // al
  int v11; // eax
  int v12; // eax
  int v13; // esi
  char *v14; // [esp+8h] [ebp-34h] BYREF
  _BYTE *v15; // [esp+Ch] [ebp-30h] BYREF
  int v16; // [esp+10h] [ebp-2Ch]
  char v17[4]; // [esp+14h] [ebp-28h] BYREF
  _BYTE Buffer[32]; // [esp+18h] [ebp-24h] BYREF
  int v19; // [esp+38h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 == -1 )
    return 0;
  v5 = **(_DWORD **)(this + 32);
  if ( v5 != 0 )
  {
    v6 = *(_DWORD **)(this + 48);
    if ( v5 < *v6 + v5 )
    {
      --*v6;
      v7 = *(_DWORD **)(this + 32);
      v8 = (_BYTE *)(*v7)++;
      *v8 = a2;
      return v2;
    }
  }
  if ( *(_DWORD *)(this + 76) != 0 )
  {
    std::filebuf::_Reset_back(this);
    v9 = *(_DWORD *)(this + 56);
    v16 = v9;
    if ( v9 == 0 )
    {
      v10 = std::_Fputc<char>(a2, *(FILE **)(this + 76));
      goto LABEL_13;
    }
    v17[0] = a2;
    v11 = (*(int (__thiscall **)(int, int, char *, char *, char **, _BYTE *, int *, _BYTE **))(*(_DWORD *)v9 + 28))(
            v16,
            this + 64,
            v17,
            &v17[1],
            &v14,
            Buffer,
            &v19,
            &v15);
    if ( v11 != 0 && (v12 = v11 - 1) != 0 )
    {
      if ( v12 == 2 )
      {
        v10 = std::_Fputc<char>(v17[0], *(FILE **)(this + 76));
LABEL_13:
        if ( !v10 )
          return -1;
        return v2;
      }
    }
    else if ( v15 == Buffer || (v13 = v15 - Buffer) == fwrite(Buffer, 1u, v15 - Buffer, *(FILE **)(this + 76)) )
    {
      *(_BYTE *)(this + 61) = 1;
      if ( v14 != v17 )
        return v2;
    }
  }
  return -1;
}

