// gettime.exe @ 0x413a26 size=432

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  const wchar_t *v3; // ecx
  const wchar_t *v4; // esi
  const wchar_t *v5; // edx
  int v6; // ecx
  size_t v7; // edx
  const wchar_t *v8; // edi
  size_t v9; // ecx
  const wchar_t *v10; // edi
  const wchar_t *v12; // ecx
  const wchar_t *j; // ecx
  const wchar_t *v16; // edx
  size_t v17; // edx
  const wchar_t *v18; // edi
  __m128i *v19; // edi
  const wchar_t *v20; // ecx
  const wchar_t *i; // ecx
  const wchar_t *v22; // ecx
  const wchar_t *v23; // esi

  if ( dword_4386A4 < 5 )
  {
    if ( dword_4386A4 < 1 )
    {
      v22 = Source;
      v23 = &Source[MaxCount];
      if ( Source != v23 )
      {
        do
        {
          if ( *v22 == 0 )
            break;
          ++v22;
        }
        while ( v22 != v23 );
      }
      v6 = (char *)v22 - (char *)Source;
      return v6 >> 1;
    }
    v3 = Source;
    if ( ((unsigned __int8)Source & 1) != 0 )
    {
      v4 = Source;
      v16 = &Source[MaxCount];
      if ( Source != v16 )
      {
        do
        {
          if ( *v3 == 0 )
            break;
          ++v3;
        }
        while ( v3 != v16 );
      }
      goto LABEL_6;
    }
    v17 = ((16 - ((unsigned __int8)Source & 0xF)) & (unsigned int)-(((unsigned __int8)Source & 0xF) != 0)) >> 1;
    if ( MaxCount < v17 )
      v17 = MaxCount;
    v4 = Source;
    v18 = &Source[v17];
    if ( Source != v18 )
    {
      do
      {
        if ( *v3 == 0 )
          break;
        ++v3;
      }
      while ( v3 != v18 );
    }
    v9 = v3 - Source;
    if ( v9 == v17 )
    {
      v19 = (__m128i *)&Source[v9];
      v20 = &Source[v9 + ((MaxCount - v17) & 0xFFFFFFF0)];
      while ( v19 != (__m128i *)v20 && _mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *v19)) == 0 )
        ++v19;
      for ( i = &Source[MaxCount]; v19 != (__m128i *)i; v19 = (__m128i *)((char *)v19 + 2) )
      {
        if ( v19->m128i_i16[0] == 0 )
          break;
      }
      v3 = (const wchar_t *)v19;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = Source;
    if ( ((unsigned __int8)Source & 1) != 0 )
    {
      v4 = Source;
      v5 = &Source[MaxCount];
      if ( Source != v5 )
      {
        do
        {
          if ( *v3 == 0 )
            break;
          ++v3;
        }
        while ( v3 != v5 );
      }
LABEL_6:
      v6 = (char *)v3 - (char *)v4;
      return v6 >> 1;
    }
    v7 = ((32 - ((unsigned __int8)Source & 0x1F)) & (unsigned int)-(((unsigned __int8)Source & 0x1F) != 0)) >> 1;
    if ( MaxCount < v7 )
      v7 = MaxCount;
    v8 = &Source[v7];
    if ( Source != v8 )
    {
      do
      {
        if ( *v3 == 0 )
          break;
        ++v3;
      }
      while ( v3 != v8 );
    }
    v9 = v3 - Source;
    if ( v9 == v7 )
    {
      v10 = &Source[v9];
      __asm { vpxor   xmm1, xmm1, xmm1 }
      v12 = &Source[v9 + ((MaxCount - v7) & 0xFFFFFFE0)];
      while ( v10 != v12 )
      {
        __asm
        {
          vpcmpeqw ymm0, ymm1, ymmword ptr [edi]
          vpmovmskb eax, ymm0
        }
        if ( _EAX != 0 )
          break;
        v10 += 16;
      }
      for ( j = &Source[MaxCount]; v10 != j; ++v10 )
      {
        if ( *v10 == 0 )
          break;
      }
      v9 = v10 - Source;
      __asm { vzeroupper }
    }
  }
  return v9;
}

