// gettime.exe @ 0x409601 size=175

bool __thiscall std::filebuf::_Endwrite(void *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // esi
  _BYTE *v6; // [esp+8h] [ebp-28h] BYREF
  _BYTE Buffer[32]; // [esp+Ch] [ebp-24h] BYREF
  int v8; // [esp+2Ch] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 14) == 0 || *((_BYTE *)this + 61) == 0 )
    return true;
  if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 12))(this, -1) == -1 )
    return false;
  v2 = (*(int (__thiscall **)(_DWORD, int, _BYTE *, int *, _BYTE **))(**((_DWORD **)this + 14) + 32))(
         *((_DWORD *)this + 14),
         (int)this + 64,
         Buffer,
         &v8,
         &v6);
  if ( v2 != 0 )
  {
    v3 = v2 - 1;
    if ( v3 != 0 )
    {
      if ( v3 == 2 )
      {
        *((_BYTE *)this + 61) = 0;
        return true;
      }
      return false;
    }
  }
  else
  {
    *((_BYTE *)this + 61) = 0;
  }
  if ( v6 == Buffer )
    return *((_BYTE *)this + 61) == 0;
  v5 = v6 - Buffer;
  if ( v5 == fwrite(Buffer, 1u, v6 - Buffer, *((FILE **)this + 19)) )
    return *((_BYTE *)this + 61) == 0;
  return false;
}

