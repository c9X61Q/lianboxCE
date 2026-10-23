// gettime.exe @ 0x40f5b9 size=397

char __thiscall sub_40F5B9(int this, char a2)
{
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  unsigned __int16 *v11; // ecx
  unsigned __int8 *v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // [esp-8h] [ebp-20h]
  int v16; // [esp-4h] [ebp-1Ch]
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  unsigned int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v3 = __crt_stdio_output::to_integer_size(*(_DWORD *)(this + 40));
  v17 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = *(_DWORD *)(this + 28);
      v12 = *(unsigned __int8 **)(this + 16);
      *(_DWORD *)(this + 16) = v12 + 4;
      if ( (v7 & 0x10) != 0 )
        LODWORD(v8) = (char)*v12;
      else
        LODWORD(v8) = *v12;
      break;
    case 2:
      v7 = *(_DWORD *)(this + 28);
      v11 = *(unsigned __int16 **)(this + 16);
      *(_DWORD *)(this + 16) = v11 + 2;
      if ( (v7 & 0x10) != 0 )
        LODWORD(v8) = (__int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = *(_DWORD *)(this + 28);
      if ( (v7 & 0x10) == 0 )
      {
        v10 = *(_DWORD **)(this + 16);
        v18 = 0;
        *(_DWORD *)(this + 16) = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = *(_DWORD **)(this + 16);
      *(_DWORD *)(this + 16) = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = *(__int64 **)(this + 16);
      v7 = *(_DWORD *)(this + 28);
      *(_DWORD *)(this + 16) = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = *(_DWORD *)(this + 8) + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, *(struct __acrt_ptd ***)(this + 8));
      return 0;
  }
  v8 = (int)v8;
LABEL_17:
  v18 = HIDWORD(v8);
LABEL_18:
  v13 = v18;
  v14 = v8;
  if ( (v7 & 0x10) != 0 && v18 < 0 )
  {
    v14 = -(int)v8;
    v13 = (unsigned __int64)-__SPAIR64__(v18, v8) >> 32;
    v7 |= 0x40u;
    *(_DWORD *)(this + 28) = v7;
  }
  v19 = v13;
  v20 = v14;
  if ( *(int *)(this + 36) >= 0 )
  {
    v16 = *(_DWORD *)(this + 8);
    v15 = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 28) = v7 & 0xFFFFFFF7;
    __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>((_DWORD *)(this + 60), v15, v16);
    v14 = v20;
    v13 = v19;
  }
  else
  {
    *(_DWORD *)(this + 36) = 1;
  }
  if ( __PAIR64__(v14, v13) == 0 )
    *(_DWORD *)(this + 28) &= ~0x20u;
  *(_BYTE *)(this + 56) = 0;
  if ( v17 == 8 )
    unknown_libname_68(v14, v13, a2);
  else
    unknown_libname_65(v14, a2);
  if ( (*(_DWORD *)(this + 28) & 0x80) != 0 && (*(_DWORD *)(this + 52) == 0 || **(_BYTE **)(this + 48) != 48) )
  {
    *(_BYTE *)--*(_DWORD *)(this + 48) = 48;
    ++*(_DWORD *)(this + 52);
  }
  return 1;
}

