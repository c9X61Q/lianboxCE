// gettime.exe @ 0x42809b size=199

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  __m128i *v2; // ecx
  wchar_t v3; // dx
  wchar_t v4; // si
  int v5; // eax
  bool v6; // zf
  __m128i v8; // xmm2
  unsigned int v9; // eax
  int v10; // [esp-24h] [ebp-30h]

  v2 = (__m128i *)Str;
  if ( dword_4386A4 >= 1 )
  {
    v8 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)v2 & 0xFFFu) > 0xFF0 )
      {
        if ( v2->m128i_i16[0] == Ch )
          return (wchar_t *)v2;
        if ( v2->m128i_i16[0] == 0 )
          return nullptr;
        v10 = 2;
      }
      else
      {
        v9 = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi16((__m128i)0LL, *v2), _mm_cmpeq_epi16(*v2, v8)));
        if ( v9 != 0 )
        {
          _BitScanForward(&v9, v9);
          v2 = (__m128i *)((char *)v2 + v9);
          v5 = 0;
          v6 = v2->m128i_i16[0] == Ch;
          goto LABEL_7;
        }
        v10 = 16;
      }
      v2 = (__m128i *)((char *)v2 + v10);
    }
  }
  v3 = *Str;
  if ( *Str != 0 )
  {
    v4 = *Str;
    do
    {
      v3 = v4;
      if ( v4 == Ch )
        break;
      v2 = (__m128i *)((char *)v2 + 2);
      v4 = v2->m128i_i16[0];
      v3 = v2->m128i_i16[0];
    }
    while ( v2->m128i_i16[0] != 0 );
  }
  v5 = 0;
  v6 = v3 == Ch;
LABEL_7:
  LOBYTE(v5) = !v6;
  return (wchar_t *)((unsigned int)v2 & (v5 - 1));
}

