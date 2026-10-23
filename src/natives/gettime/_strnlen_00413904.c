// gettime.exe @ 0x413904 size=290

size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  unsigned int v3; // edx
  const char *k; // eax
  size_t v5; // ecx
  const char *v6; // ecx
  const char *v7; // edi
  unsigned int v11; // edx
  const char *j; // eax
  __m128i *v13; // ecx
  __m128i *v14; // edi
  const char *i; // ecx

  if ( dword_4386A4 < 5 )
  {
    if ( dword_4386A4 < 1 )
    {
      for ( i = String; i != &String[MaxCount]; ++i )
      {
        if ( *i == 0 )
          break;
      }
      return i - String;
    }
    else
    {
      v11 = ((unsigned __int8)String & 0xF) != 0 ? 16 - ((unsigned __int8)String & 0xF) : 0;
      if ( MaxCount < v11 )
        v11 = MaxCount;
      for ( j = String; j != &String[v11]; ++j )
      {
        if ( *j == 0 )
          break;
      }
      v5 = j - String;
      if ( j - String == v11 )
      {
        v13 = (__m128i *)j;
        v14 = (__m128i *)&j[(MaxCount - v11) & 0xFFFFFFF0];
        if ( j != (const char *)v14 )
        {
          do
          {
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v13)) != 0 )
              break;
            ++v13;
          }
          while ( v13 != v14 );
        }
        while ( v13 != (__m128i *)&String[MaxCount] && v13->m128i_i8[0] != 0 )
          v13 = (__m128i *)((char *)v13 + 1);
        return (char *)v13 - String;
      }
    }
  }
  else
  {
    v3 = ((unsigned __int8)String & 0x1F) != 0 ? 32 - ((unsigned __int8)String & 0x1F) : 0;
    if ( MaxCount < v3 )
      v3 = MaxCount;
    for ( k = String; k != &String[v3]; ++k )
    {
      if ( *k == 0 )
        break;
    }
    v5 = k - String;
    if ( k - String == v3 )
    {
      v6 = k;
      v7 = &k[(MaxCount - v3) & 0xFFFFFFE0];
      __asm { vpxor   xmm1, xmm1, xmm1 }
      if ( k != v7 )
      {
        do
        {
          __asm
          {
            vpcmpeqb ymm0, ymm1, ymmword ptr [ecx]
            vpmovmskb eax, ymm0
          }
          if ( _EAX != 0 )
            break;
          v6 += 32;
        }
        while ( v6 != v7 );
      }
      while ( v6 != &String[MaxCount] && *v6 != 0 )
        ++v6;
      v5 = v6 - String;
      __asm { vzeroupper }
    }
  }
  return v5;
}

