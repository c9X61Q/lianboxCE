// gettime.exe @ 0x4159b7 size=959

UINT __cdecl _wsetlocale_set_cat(UINT *a1, int a2, wchar_t *a3)
{
  int v3; // ebx
  wchar_t *p_Source; // eax
  wchar_t *v5; // edx
  wchar_t *v6; // ecx
  wchar_t v7; // si
  bool v8; // cf
  bool v9; // zf
  int v10; // esi
  wchar_t v11; // si
  wchar_t *v12; // eax
  UINT result; // eax
  wchar_t *v14; // ecx
  __int16 v15; // ax
  char *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // edx
  int v19; // ecx
  rsize_t v20; // eax
  int v21; // ecx
  int v22; // ecx
  rsize_t v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // edx
  UINT *v26; // ecx
  int v27; // eax
  wchar_t *v28; // ecx
  UINT v29; // [esp+Ch] [ebp-2E8h]
  UINT v30; // [esp+10h] [ebp-2E4h]
  _DWORD *v31; // [esp+18h] [ebp-2DCh]
  char *v32; // [esp+1Ch] [ebp-2D8h]
  _DWORD *Block; // [esp+20h] [ebp-2D4h]
  unsigned __int16 *v34; // [esp+24h] [ebp-2D0h]
  int v35; // [esp+2Ch] [ebp-2C8h]
  int v36; // [esp+30h] [ebp-2C4h] BYREF
  int v37; // [esp+34h] [ebp-2C0h]
  wchar_t *Expression; // [esp+38h] [ebp-2BCh]
  wchar_t v39[86]; // [esp+3Ch] [ebp-2B8h] BYREF
  WORD Buf1[128]; // [esp+E8h] [ebp-20Ch] BYREF
  wchar_t Source; // [esp+1E8h] [ebp-10Ch] BYREF
  __int16 v42; // [esp+1EAh] [ebp-10Ah] BYREF

  v3 = a2;
  v31 = (_DWORD *)(__acrt_getptd() + 632);
  if ( _expandlocale(a3, &Source, 0x83u, v39, 0x55u, &v36) == nullptr )
    return 0;
  p_Source = &Source;
  v35 = 4 * (a2 + 2);
  v5 = (wchar_t *)a1[v35];
  v6 = v5;
  while ( 1 )
  {
    v7 = *p_Source;
    Expression = nullptr;
    v8 = v7 < *v6;
    v9 = v7 == *v6;
    v10 = 4 * (a2 + 2);
    if ( !v9 )
      break;
    if ( *p_Source == 0 )
      goto LABEL_7;
    v11 = p_Source[1];
    v8 = v11 < v6[1];
    v9 = v11 == v6[1];
    HIWORD(v37) = v11;
    v10 = 4 * (a2 + 2);
    if ( !v9 )
      break;
    p_Source += 2;
    v6 += 2;
    if ( HIWORD(v37) == 0 )
    {
LABEL_7:
      v12 = Expression;
      goto LABEL_9;
    }
  }
  v12 = (wchar_t *)(v8 ? -1 : 1);
LABEL_9:
  if ( v12 == nullptr )
    return (UINT)v5;
  v14 = &Source;
  do
    v15 = *v14++;
  while ( v15 != (_WORD)Expression );
  v37 = (((char *)v14 - (char *)&v42) >> 1) + 1;
  v16 = (char *)_malloc_base(2 * v37 + 4);
  Block = v16;
  if ( v16 == nullptr )
    return 0;
  v34 = (unsigned __int16 *)a1[v10];
  v30 = a1[a2 + 40];
  v29 = a1[2];
  v32 = v16 + 4;
  if ( wcscpy_s((wchar_t *)v16 + 2, v37, &Source) != 0 )
    _invoke_watson(Expression, Expression, Expression, (unsigned int)Expression, (uintptr_t)Expression);
  v9 = Source == 67;
  a1[v10] = (UINT)v32;
  if ( !v9 || v42 != 0 )
    v17 = __acrt_copy_locale_name(v39);
  else
    v17 = Expression;
  a1[a2 + 40] = (UINT)v17;
  switch ( a2 )
  {
    case 2:
      v18 = Expression;
      a1[2] = v36;
      v19 = v31[9];
      v37 = v31[8];
      v36 = v19;
      while ( a1[2] != v31[2 * (_DWORD)v18] )
      {
        v20 = v31[2 * (_DWORD)v18];
        v21 = v31[2 * (_DWORD)v18 + 1];
        v31[2 * (_DWORD)v18] = v37;
        v31[2 * (_DWORD)v18 + 1] = v36;
        v18 = (wchar_t *)((char *)v18 + 1);
        v3 = a2;
        v37 = v20;
        v36 = v21;
        if ( (int)v18 >= 5 )
          goto LABEL_26;
      }
      if ( v18 != nullptr )
      {
        v22 = v31[2 * (_DWORD)v18 + 1];
        *v31 = v31[2 * (_DWORD)v18];
        v23 = v37;
        v31[1] = v22;
        v31[2 * (_DWORD)v18] = v23;
        v31[2 * (_DWORD)v18 + 1] = v36;
      }
LABEL_26:
      if ( v18 == (wchar_t *)5 )
      {
        if ( __acrt_GetStringTypeA((struct __crt_locale_pointers *)Expression, 1u, &MultiByteStr, 127, Buf1, a1[2], 1) != 0 )
        {
          v24 = Expression;
          do
          {
            Buf1[(_DWORD)v24] &= 0x1FFu;
            v24 = (wchar_t *)((char *)v24 + 1);
          }
          while ( (unsigned int)v24 < 0x7F );
          v25 = (wchar_t *)(memcmp(Buf1, Buf2, 0xFEu) == 0);
        }
        else
        {
          v25 = Expression;
        }
        v26 = v31 + 1;
        v31[1] = v25;
        *v31 = a1[2];
      }
      else
      {
        v26 = v31 + 1;
      }
      a1[6] = *v26;
      break;
    case 1:
      a1[4] = v36;
      break;
    case 5:
      a1[5] = v36;
      break;
    default:
      break;
  }
  if ( ((int (__cdecl *)(UINT *))*(&off_42C660 + 3 * v3))(a1) != 0 )
  {
    a1[v35] = (UINT)v34;
    _free_base((void *)a1[v3 + 40]);
    a1[v3 + 40] = v30;
    _free_base(Block);
    a1[2] = v29;
    return 0;
  }
  if ( v34 == word_437268 || _InterlockedExchangeAdd((volatile signed __int32 *)a1[4 * v3 + 10], 0xFFFFFFFF) != 0 )
  {
    v27 = 4 * (a2 + 2);
  }
  else
  {
    _free_base((void *)a1[4 * v3 + 10]);
    _free_base((void *)a1[4 * v3 + 9]);
    _free_base((void *)a1[v3 + 40]);
    v27 = 4 * (a2 + 2);
    v28 = Expression;
    a1[v35] = (UINT)Expression;
    a1[v3 + 40] = (UINT)v28;
  }
  *Block = 1;
  result = a1[v27];
  a1[4 * v3 + 10] = (UINT)Block;
  return result;
}

