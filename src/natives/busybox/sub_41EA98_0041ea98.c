// busybox.exe @ 0x41ea98 size=647

int __userpurge sub_41EA98@<eax>(_DWORD *a1@<eax>, void *a2@<edx>, signed __int32 a3@<ecx>, char *a4)
{
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // ebp
  int v7; // esi
  int v8; // eax
  unsigned int v9; // edx
  const char *v10; // ebp
  const char *v11; // eax
  char v12; // al
  int v13; // ebx
  signed __int32 v14; // esi
  const char *Control; // eax
  int v16; // edx
  char v17; // al
  char *Str; // [esp+0h] [ebp-40h]
  signed __int32 v21; // [esp+14h] [ebp-2Ch] BYREF
  int v22; // [esp+18h] [ebp-28h]
  char v23; // [esp+1Fh] [ebp-21h]
  int v24; // [esp+20h] [ebp-20h]
  void *v25; // [esp+24h] [ebp-1Ch]
  unsigned int v26; // [esp+28h] [ebp-18h]
  signed __int32 v27; // [esp+2Ch] [ebp-14h]

  v25 = a2;
  v21 = a3;
  if ( a1 != nullptr )
  {
    v23 = 0;
    if ( (a3 & 0x800000) != 0 )
      v23 = *a4++;
    v22 = (unsigned __int8)v21;
    v24 = BYTE1(v21);
    v26 = 4 * (unsigned __int8)v21;
    while ( 1 )
    {
      memset(v25, 0, v26);
      v5 = sub_435AC0(*a1, a1 + 4);
      if ( v5 > 0 )
      {
        v6 = a1[2];
        while ( 1 )
        {
          ++a1[6];
          if ( *(_BYTE *)(v6 + v5 - 1) == 10 )
            --v5;
          if ( *(_BYTE *)(v6 + v5 - 1) == 13 )
            --v5;
          if ( v5 == 0 )
            break;
          v7 = v5 - 1;
          if ( *(_BYTE *)(v6 + v5 - 1) != 92 )
            break;
          --v5;
          v8 = sub_435AC0(*a1, a1 + 5);
          v4 = v8;
          if ( v8 <= 0 )
            break;
          v5 = v8 + v7;
          v9 = v8 + v7 + 1;
          if ( a1[4] < v9 )
          {
            v27 = v8;
            a1[4] = v9;
            v6 = sub_471600(v8, v9);
            a1[2] = v6;
            v4 = v27;
          }
          qmemcpy((void *)(v6 + v7), (const void *)a1[3], v4);
          v4 = 0;
        }
        *(_BYTE *)(v6 + v5) = 0;
      }
      if ( v5 < 0 )
        break;
      v10 = (const char *)a1[2];
      v27 = v21 & 0x20000;
      if ( (v21 & 0x20000) != 0 )
        v10 += strspn(v10, a4 + 1);
      v11 = v10;
      if ( _bittest(&v21, 0x18u) )
        v11 = (const char *)sub_460FB8();
      v12 = *v11;
      if ( v12 != 0 && *a4 != v12 && v12 != v23 )
      {
        v13 = 0;
        do
        {
          *((_DWORD *)v25 + v13) = v10;
          v14 = v21 & 0x400000;
          if ( v22 - 1 == v13 && _bittest(&v21, 0x12u) )
          {
            v16 = 0;
            if ( v14 != 0 )
              v16 = (unsigned __int8)*a4;
            v10 = (const char *)sub_4635B0(v4, v16);
            if ( v27 != 0 )
            {
              while ( strchr(a4 + 1, *((unsigned __int8 *)v10 - 1)) != nullptr )
                --v10;
            }
          }
          else
          {
            Control = a4;
            if ( *a4 == 0 || v14 == 0 )
              Control = a4 + 1;
            v10 += strcspn(v10, Control);
          }
          v17 = *v10;
          if ( v14 != 0 && *a4 == v17 )
          {
            *v10 = 0;
          }
          else if ( v17 != 0 )
          {
            *v10++ = 0;
          }
          if ( _bittest(&v21, 0x10u) )
            v10 += strspn(v10, a4 + 1);
          ++v13;
        }
        while ( *v10 != 0 && *a4 != *v10 && v22 > v13 );
        if ( v24 <= v13 )
          return v13;
        sub_41783C("bad line %u: %d tokens found, %d needed", a1[6], v13, v24);
        if ( _bittest(&v21, 0x14u) )
          sub_470D44(Str);
      }
    }
  }
  return 0;
}

