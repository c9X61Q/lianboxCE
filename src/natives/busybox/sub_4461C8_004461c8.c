// busybox.exe @ 0x4461c8 size=769

unsigned int __usercall sub_4461C8@<eax>(int a1@<eax>)
{
  void *v1; // ecx
  int *v2; // edx
  int v3; // esi
  int v5; // ebx
  const char *v6; // edx
  int v7; // eax
  void *v8; // ecx
  int *v9; // edx
  int v10; // esi
  int v11; // eax
  char *v12; // eax
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // ecx
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  int v22; // ebx
  __int16 v24; // [esp+Ch] [ebp-70h]
  _BYTE v25[16]; // [esp+10h] [ebp-6Ch] BYREF
  int v26; // [esp+20h] [ebp-5Ch]
  int v27; // [esp+28h] [ebp-54h]
  int v28; // [esp+2Ch] [ebp-50h]
  __int64 v29; // [esp+38h] [ebp-44h]

  v1 = dword_486000;
  if ( a1 != 34 )
  {
    v5 = a1;
    v6 = "argument expected";
    if ( a1 == 0 )
      goto LABEL_9;
    v7 = *(_DWORD *)(*(_DWORD *)dword_486000 + 4);
    if ( v5 == 37 )
    {
      *(_DWORD *)dword_486000 += 4;
      sub_41C3EC(v7, (int)v1);
      v3 = sub_44796C();
      v8 = dword_486000;
      v9 = (int *)(*(_DWORD *)dword_486000 + 4);
      *(_DWORD *)dword_486000 = v9;
      if ( sub_41C3EC(*v9, (int)v8) == 38 )
        return v3;
      v6 = "closing paren expected";
LABEL_9:
      sub_46456C(v1, v6);
    }
    v10 = *((_DWORD *)dword_486000 + 1);
    if ( sub_41C3EC(v7, (int)dword_486000) != 0
      && *(_DWORD *)(*(_DWORD *)dword_486000 + 8) != 0
      && *(_BYTE *)(*((_DWORD *)dword_486000 + 1) + 1) == 1 )
    {
      return sub_418B04();
    }
    if ( *(_BYTE *)(v10 + 1) != 0 )
    {
      if ( *(_BYTE *)(*((_DWORD *)dword_486000 + 1) + 1) == 1 )
        return sub_418B04();
    }
    else
    {
      v12 = *(char **)(*(_DWORD *)dword_486000 + 4);
      if ( v12 != nullptr )
      {
        *(_DWORD *)dword_486000 += 4;
        if ( v5 == 22 )
          return *v12 == 0;
        if ( v5 != 23 )
        {
          if ( v5 == 13 )
          {
            v14 = sub_435CD0(v12);
            return sub_443380(v14);
          }
          if ( v5 == 11 )
          {
            if ( sub_443484(v12, (int)v25) != 0 )
              return 0;
            v21 = 40960;
          }
          else
          {
            v15 = sub_444C28(v12, (int)v25);
            if ( v15 != 0 )
              return 0;
            v11 = 1;
            if ( v5 == 4 )
              return v11;
            if ( (unsigned __int8)(v5 - 1) <= 2u )
            {
              if ( v5 != 2 )
              {
                if ( v5 == 3 )
                  v5 = 1;
                else
                  v5 = 4;
              }
              v16 = sub_4365A0();
              if ( v16 != 0 || v5 == 1 && (v26 & 0x49) == 0 )
              {
                v24 = v5;
                if ( v16 == v27 )
                {
                  v24 = (_WORD)v5 << 6;
                }
                else
                {
                  v17 = v28;
                  if ( v17 == sub_4365A0() || v17 == sub_4365A0() )
                  {
LABEL_44:
                    v24 = 8 * v5;
                  }
                  else
                  {
                    v18 = dword_486000;
                    if ( *((_DWORD *)dword_486000 + 3) == 0 )
                    {
                      v19 = sub_417AC4((int *)dword_486000 + 3, (int)dword_486000);
                      v18 = dword_486000;
                      *((_DWORD *)dword_486000 + 2) = v19;
                    }
                    while ( v15 < v18[3] )
                    {
                      if ( v17 == *(_DWORD *)(v18[2] + 4 * v15) )
                        goto LABEL_44;
                      ++v15;
                    }
                  }
                }
                v16 = -((unsigned __int16)(v26 & v24) == 0);
              }
              v20 = v16 == 0;
              goto LABEL_68;
            }
            if ( (unsigned __int8)(v5 - 5) > 5u )
            {
              if ( (unsigned __int8)(v5 - 14) <= 2u )
              {
                LOWORD(v11) = 1024;
                if ( v5 != 15 )
                  LOWORD(v11) = v5 != 16 ? 2048 : 512;
                LOBYTE(v11) = (unsigned __int16)(v11 & v26) != 0;
                return (unsigned __int8)v11;
              }
              if ( v5 == 12 )
                return (unsigned int)((__PAIR64__(SHIDWORD(v29) >> 31, SHIDWORD(v29) >> 31) - v29) >> 32) >> 31;
              if ( v5 == 20 )
              {
                v22 = v27;
              }
              else
              {
                v11 = 1;
                if ( v5 != 21 )
                  return v11;
                v22 = v28;
              }
              v20 = v22 == sub_4365A0();
LABEL_68:
              LOBYTE(v11) = v20;
              return (unsigned __int8)v11;
            }
            v21 = 0x4000;
            if ( v5 != 6 )
            {
              v21 = 0x2000;
              if ( v5 != 7 )
              {
                v21 = 12288;
                if ( v5 != 8 )
                {
                  v21 = 0x8000;
                  if ( v5 == 9 )
                  {
                    v21 = 4096;
                  }
                  else if ( v5 == 10 )
                  {
                    v21 = 49152;
                  }
                }
              }
            }
          }
          v20 = (v26 & 0xF000) == v21;
          goto LABEL_68;
        }
        return *v12 != 0;
      }
    }
    v12 = **(char ***)dword_486000;
    return *v12 != 0;
  }
  v2 = (int *)(*(_DWORD *)dword_486000 + 4);
  *(_DWORD *)dword_486000 = v2;
  if ( sub_41C3EC(*v2, (int)v1) != 0 )
    return sub_4461C8() == 0;
  *(_DWORD *)dword_486000 -= 4;
  return 1;
}

