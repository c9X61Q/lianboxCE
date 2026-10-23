// busybox.exe @ 0x457958 size=823

int sub_457958()
{
  int v0; // ebp
  int result; // eax
  char v2; // bl
  int v3; // ecx
  int v4; // ebx
  char *v5; // esi
  int v6; // edi
  char v7; // al
  int v8; // edx
  int v9; // ebx
  int v10; // eax
  size_t v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  __time32_t v14; // eax
  int v15; // ecx
  signed int v16; // edx
  char *Str; // [esp+Ch] [ebp-2Ch]
  int v18; // [esp+10h] [ebp-28h]
  signed int v19; // [esp+14h] [ebp-24h]
  __time32_t v20; // [esp+18h] [ebp-20h]
  int v21; // [esp+1Ch] [ebp-1Ch]
  int v22; // [esp+24h] [ebp-14h]

  v0 = dword_486010;
  v18 = *(_DWORD *)(dword_486010 + 20);
  result = v18 + 1;
  if ( (unsigned int)(v18 + 1) > 0x98967F )
    return result;
  v19 = *(_DWORD *)(dword_486010 + 32);
  if ( (dword_486008 & 8) != 0 )
    v19 -= 8;
  v2 = *(_BYTE *)(dword_486010 + 254);
  Str = (char *)(sub_470E78() + 4);
  if ( v2 != 0 )
  {
    ++*(_DWORD *)(v0 + 20);
    *(_DWORD *)(v0 + 16) = 0;
    v5 = Str;
  }
  else
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v0 + 52) + 4 * *(_DWORD *)(v0 + 20));
    v5 = (char *)sub_463250(v3, v4);
    free((void *)(v4 - 4));
  }
  v21 = 2;
  v20 = 0;
  while ( 2 )
  {
    *v5 = 0;
    *(_BYTE *)(v0 + 254) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = dword_486010;
          if ( *(_DWORD *)(dword_486010 + 40) >= *(_DWORD *)(dword_486010 + 44) )
          {
            v22 = sub_44607C(0);
            while ( 1 )
            {
              *_errno() = 0;
              *(_DWORD *)(v9 + 36) = sub_45C560(1024, (LPSTR)&MultiByteStr);
              if ( *_errno() != 11 )
                break;
              v14 = time(nullptr);
              if ( v20 != v14 && --v21 < 0 )
              {
                v20 = v14;
                break;
              }
              v20 = v14;
            }
            sub_42EE40(0, 3, v22);
            *(_DWORD *)(v9 + 40) = 0;
            v10 = *(_DWORD *)(v9 + 36);
            *(_DWORD *)(v9 + 44) = v10;
            if ( v10 <= 0 )
              goto LABEL_17;
            v21 = 1;
          }
          v6 = *(_DWORD *)(v9 + 40);
          v7 = *((_BYTE *)&MultiByteStr + v6);
          if ( v7 != 8 )
            break;
          v8 = *(_DWORD *)(v9 + 16);
          if ( v8 == 0 || *(v5 - 1) == 9 )
            break;
          *(_DWORD *)(v9 + 40) = v6 + 1;
          *(_DWORD *)(v9 + 16) = v8 - 1;
          *--v5 = 0;
        }
        if ( (dword_486008 & 0x100) == 0 )
          break;
        if ( v7 != 27 )
        {
          if ( *(_BYTE *)(v9 + 253) == 0 )
            break;
          if ( v7 != 109 && (unsigned __int8)(v7 - 48) > 9u && ((v7 - 59) & 0xDF) != 0 )
          {
            *(_BYTE *)(v9 + 253) = 0;
            break;
          }
        }
        *(_BYTE *)(v9 + 253) = v7 != 109;
        *(_DWORD *)(v9 + 40) = v6 + 1;
      }
      v15 = *(_DWORD *)(v9 + 16);
      v16 = (v15 + 8) & 0xFFFFFFF8;
      if ( v7 != 9 )
        v16 = v15 + 1;
      if ( v16 > v19 )
        goto LABEL_17;
      *(_DWORD *)(v9 + 16) = v16;
      *(_DWORD *)(v9 + 40) = v6 + 1;
      if ( v7 == 10 )
        break;
      if ( v7 != 13 )
      {
        if ( v7 == 0 )
          v7 = 10;
        *v5 = v7;
        *++v5 = 0;
      }
    }
    *(_BYTE *)(v9 + 254) = 1;
    *(_DWORD *)(v9 + 16) = 0;
LABEL_17:
    *(_DWORD *)(v9 + 52) = sub_47168C(*(_DWORD *)(v9 + 20), 1032);
    v11 = strlen(Str);
    v13 = (_DWORD *)sub_471600(v12, v11 + 5);
    *(_DWORD *)(*(_DWORD *)(v9 + 52) + 4 * *(_DWORD *)(v9 + 20)) = v13 + 1;
    *v13 = *(_DWORD *)(v9 + 24);
    if ( *(_BYTE *)(v9 + 254) != 0 )
      ++*(_DWORD *)(v9 + 24);
    if ( *(_DWORD *)(v9 + 20) > 0x98967Eu )
    {
      *(_DWORD *)(v9 + 36) = 0;
    }
    else if ( sub_415CF4() != 0
           || *(_DWORD *)(v9 + 212) >= *(_DWORD *)(v9 + 216)
           && (sub_42F994(v18), v18 = *(_DWORD *)(v9 + 20), *(_DWORD *)(v9 + 212) >= *(_DWORD *)(v9 + 216)) )
    {
      if ( *(int *)(v9 + 36) > 0 )
      {
        ++*(_DWORD *)(v9 + 20);
        v5 = (char *)(sub_470E78() + 4);
        *(_DWORD *)(v9 + 16) = 0;
        Str = v5;
        continue;
      }
    }
    break;
  }
  if ( *(int *)(v9 + 36) >= 0 )
  {
    if ( *(_DWORD *)(v9 + 36) == 0 )
      *(_DWORD *)(v9 + 76) = *(_DWORD *)(v9 + 24);
  }
  else if ( *_errno() == 11 )
  {
    *(_DWORD *)(v9 + 36) = 1;
  }
  else
  {
    sub_44F07C("read error");
  }
  result = sub_42F994(v18);
  *(_DWORD *)(v9 + 212) = -1;
  return result;
}

