// gettime.exe @ 0x41d9f3 size=105

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  WCHAR SrcStr; // [esp+4h] [ebp-8h] BYREF
  WORD CharType; // [esp+8h] [ebp-4h] BYREF

  if ( C == 0xFFFF )
    return 0;
  if ( C < 0x100u )
    return Type & *((_WORD *)off_4370D0 + C);
  SrcStr = C;
  CharType = 0;
  if ( __acrt_GetStringTypeW(1u, &SrcStr, 1, &CharType) == 0 )
    return 0;
  else
    return Type & CharType;
}

