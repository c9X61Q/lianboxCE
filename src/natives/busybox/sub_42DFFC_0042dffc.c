// busybox.exe @ 0x42dffc size=750

int __usercall sub_42DFFC@<eax>(_DWORD *a1@<eax>, char *a2@<edx>, int a3@<ecx>, int a4)
{
  char *v5; // edi
  char *v6; // ebx
  int result; // eax
  char v8; // dl
  _BYTE *v9; // edx
  _BYTE *v10; // ecx
  char v11; // al
  char *v12; // eax
  const CHAR *v13; // eax
  char *v14; // eax
  int v15; // edi
  int v16; // eax
  _BYTE *v17; // eax
  int v18; // edi
  int v19; // edx
  unsigned int v20; // ecx
  char *Source; // [esp+10h] [ebp-90h]
  char *v22; // [esp+14h] [ebp-8Ch]
  char v23; // [esp+1Bh] [ebp-85h]
  int v25; // [esp+1Ch] [ebp-84h]
  _DWORD *Block; // [esp+20h] [ebp-80h]
  int v27; // [esp+24h] [ebp-7Ch]
  char *Destination; // [esp+28h] [ebp-78h]
  char *v29; // [esp+28h] [ebp-78h]
  int v30; // [esp+2Ch] [ebp-74h]
  char *v31; // [esp+30h] [ebp-70h]
  char v32[108]; // [esp+34h] [ebp-6Ch] BYREF

  v5 = a2;
  v31 = a2;
  if ( a4 == 0 && (unsigned __int8)((*a2 | 0x20) - 97) <= 0x19u && a2[1] == 58 && a2[2] != 47 )
    v31 = a2 + 2;
  Destination = (char *)(a4 + *a1);
  v6 = a2;
  result = 0;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 == 0 )
      break;
    if ( v8 == 42 || v8 == 63 )
    {
LABEL_25:
      v30 = 0;
      result = 1;
    }
    else if ( v8 == 91 )
    {
      v9 = v6 + 2;
      if ( v6[1] != 33 )
        v9 = v6 + 1;
      while ( 1 )
      {
        v10 = v9;
        if ( *v9 == 92 )
          v10 = v9 + 1;
        if ( *v10 == 47 || *v10 == 0 )
          break;
        v9 = v10 + 1;
        if ( v10[1] == 93 )
          goto LABEL_25;
      }
      v30 = 0;
    }
    else
    {
      v30 = 0;
      if ( v8 == 92 )
        v30 = v6[1] != 0;
      if ( v6[v30] == 47 )
      {
        if ( result != 0 )
          goto LABEL_36;
        v31 = &v6[v30 + 1];
      }
    }
    v6 += v30 + 1;
  }
  if ( result != 0 )
  {
    v30 = 0;
LABEL_36:
    v12 = v5;
    if ( v31 > v5 )
    {
      while ( 1 )
      {
        if ( *v12 == 92 && v12[1] != 0 )
          ++v12;
        *Destination++ = *v12;
        if ( v31 <= v12 + 1 )
          break;
        ++v12;
      }
    }
    *Destination = 0;
    v13 = (const CHAR *)*a1;
    v22 = &Destination[-*a1];
    if ( Destination == (char *)*a1 )
      v13 = ".";
    result = (int)sub_402D50(v13);
    Block = (_DWORD *)result;
    if ( result != 0 )
    {
      v27 = 1;
      if ( *v6 != 0 )
      {
        *v6 = 0;
        v6 += v30 + 1;
        v27 = 0;
      }
      v14 = v31;
      if ( *v31 == 92 )
        v14 = v31 + 1;
      v25 = a3 - (v6 - v5);
      v23 = *v14;
      while ( 1 )
      {
        v15 = dword_485FF0;
        if ( *(_BYTE *)(dword_485FF0 + 60) != 0 )
          break;
        v16 = sub_402F30((int)Block);
        if ( v16 == 0 )
          break;
        if ( *(_BYTE *)(v16 + 8) != 46 || v23 == 46 )
        {
          Source = (char *)(v16 + 8);
          if ( sub_4312E8(v31, v16 + 8, *(_BYTE *)(v15 + 81) != 0 ? 0x10 : 0) == 0 )
          {
            if ( v27 != 0 )
            {
              strcpy(Destination, Source);
              sub_4138B0();
            }
            else
            {
              v17 = (_BYTE *)sub_463250();
              *v17 = 47;
              v18 = (int)&v17[-*a1 + 1];
              v19 = v18 + v25;
              v20 = v18 + v25 + 255;
              if ( a1[1] < v20 )
              {
                v29 = (char *)(v19 + 515);
                *a1 = sub_471600(v20, v19 + 515);
                a1[1] = v29;
              }
              sub_42DFFC(v18);
              Destination = &v22[*a1];
            }
          }
        }
      }
      result = sub_403050(Block);
      if ( v27 == 0 )
      {
        result = v30 == 0 ? 47 : 92;
        v6[~v30] = result;
      }
    }
    return result;
  }
  if ( a4 != 0 )
  {
    do
    {
      if ( *v5 == 92 && v5[1] != 0 )
        ++v5;
      ++Destination;
      v11 = *v5;
      *(Destination - 1) = *v5++;
    }
    while ( v11 != 0 );
    result = sub_443484(*a1, v32);
    if ( result == 0 )
      return sub_4138B0();
  }
  return result;
}

