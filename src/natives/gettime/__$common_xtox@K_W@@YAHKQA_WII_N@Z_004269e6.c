// gettime.exe @ 0x4269e6 size=188

int __cdecl common_xtox<unsigned long,wchar_t>(unsigned int a1, __int16 *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebx
  __int16 *v6; // esi
  __int16 *v7; // esi
  __int16 *v8; // edi
  unsigned int v9; // ecx
  _WORD *v10; // edx
  unsigned int v11; // eax
  __int16 *v12; // esi
  __int16 v14; // cx
  __int16 *v15; // [esp+Ch] [ebp-Ch]
  __int16 *v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v5 = a1;
  v6 = a2;
  v16 = a2;
  v17 = 0;
  if ( a5 != 0 )
  {
    *a2 = 45;
    v6 = a2 + 1;
    v16 = a2 + 1;
    v5 = -a1;
    v17 = 1;
  }
  v15 = v6;
  v7 = v16;
  do
  {
    v8 = v7;
    v9 = v5 % a4;
    v5 /= a4;
    v10 = v7 + 1;
    *v7 = v9 + (v9 > 9 ? 87 : 48);
    v11 = ++v17;
    if ( v5 == 0 )
      break;
    ++v7;
  }
  while ( v11 < a3 );
  v12 = v15;
  if ( v11 < a3 )
  {
    *v10 = 0;
    do
    {
      v14 = *v8;
      *v8-- = *v12;
      *v12++ = v14;
    }
    while ( v12 < v8 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *_errno() = 34;
    _invalid_parameter_noinfo();
    return 34;
  }
}

