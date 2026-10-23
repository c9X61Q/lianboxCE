// busybox.exe @ 0x410a00 size=232

int *__cdecl sub_410A00(double a1, _DWORD *a2, _DWORD *a3)
{
  int *result; // eax
  int v6; // edx
  int v8; // esi
  int v9; // ebx
  unsigned int v10; // edx

  result = sub_40FFB0(1);
  if ( result != nullptr )
  {
    _ESI = LODWORD(a1);
    _EBX = HIDWORD(a1) & 0xFFFFF;
    v6 = (HIDWORD(a1) >> 20) & 0x7FF;
    if ( v6 != 0 )
      _EBX = HIDWORD(a1) & 0xFFFFF | 0x100000;
    if ( LODWORD(a1) != 0 )
    {
      __asm { tzcnt   edi, esi }
      v8 = LODWORD(a1) >> _EDI;
      if ( _EDI != 0 )
      {
        v8 |= _EBX << (32 - _EDI);
        _EBX >>= _EDI;
      }
      result[6] = _EBX;
      result[5] = v8;
      v9 = (_EBX != 0) + 1;
      result[4] = v9;
      if ( v6 == 0 )
        goto LABEL_8;
    }
    else
    {
      result[4] = 1;
      __asm { tzcnt   ecx, ebx }
      _EDI = _ECX + 32;
      result[5] = _EBX >> _ECX;
      v9 = 1;
      if ( v6 == 0 )
      {
LABEL_8:
        _BitScanReverse(&v10, result[v9 + 4]);
        *a2 = _EDI - 1074;
        *a3 = 32 * v9 - (v10 ^ 0x1F);
        return result;
      }
    }
    *a2 = v6 + _EDI - 1075;
    *a3 = 53 - _EDI;
  }
  return result;
}

