// gettime.exe @ 0x40b455 size=465

int __cdecl __isa_available_init()
{
  int v5; // edi
  int v11; // eax
  int v12; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [esp+0h] [ebp-24h]
  char v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+20h] [ebp-4h]
  int v27; // [esp+20h] [ebp-4h]

  dword_4386A4 = 0;
  dword_437040 |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    _EAX = 0;
    __asm { cpuid }
    v24 = _EAX;
    v5 = _ECX ^ 0x6C65746E;
    v25 = _EDX ^ 0x49656E69;
    v26 = _EBX ^ 0x756E6547;
    _EAX = 1;
    __asm { cpuid }
    v22 = _EAX;
    if ( (v25 | v5 | v26) == 0
      && ((v11 = _EAX & 0xFFF3FF0, (v22 & 0xFFF3FF0) == 0x106C0)
       || v11 == 132704
       || v11 == 132720
       || v11 == 198224
       || v11 == 198240
       || v11 == 198256) )
    {
      v12 = dword_4386A8 | 1;
      dword_4386A8 |= 1u;
    }
    else
    {
      v12 = dword_4386A8;
    }
    _EAX = 7;
    v27 = _ECX;
    if ( v24 < 7 )
    {
      _EBX = 0;
    }
    else
    {
      __asm { cpuid }
      _ECX = v27;
      if ( (_EBX & 0x200) != 0 )
        dword_4386A8 = v12 | 2;
    }
    v18 = dword_437040 | 2;
    dword_4386A4 = 1;
    dword_437040 |= 2u;
    if ( (_ECX & 0x100000) != 0 )
    {
      v19 = v18 | 4;
      dword_4386A4 = 2;
      dword_437040 = v19;
      if ( (_ECX & 0x8000000) != 0 && (_ECX & 0x10000000) != 0 )
      {
        __asm { xgetbv }
        v23 = v19;
        if ( (v19 & 6) == 6 )
        {
          v20 = dword_437040 | 8;
          dword_4386A4 = 3;
          dword_437040 |= 8u;
          if ( (_EBX & 0x20) != 0 )
          {
            dword_4386A4 = 5;
            dword_437040 = v20 | 0x20;
            if ( (_EBX & 0xD0030000) == 0xD0030000 && (v23 & 0xE0) == 0xE0 )
            {
              dword_437040 |= 0x40u;
              dword_4386A4 = 6;
            }
          }
        }
      }
    }
  }
  return 0;
}

