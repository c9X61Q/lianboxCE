// busybox.exe @ 0x40c0c0 size=1285

int __usercall sub_40C0C0@<eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  char v6; // cl
  void *v7; // esp
  int *v8; // ebx
  char v9; // al
  char v10; // cl
  int v11; // esi
  int v12; // eax
  int v13; // edi
  char v14; // al
  int result; // eax
  int v16; // esi
  int *v17; // edi
  int v18; // ebx
  int *v19; // esi
  int v20; // eax
  int v21; // esi
  void *v22; // esp
  bool v23; // zf
  char v24; // al
  int v25; // eax
  int *v26; // eax
  void *v27; // esp
  void *v28; // esp
  int *v29; // eax
  int v30; // eax
  int v31; // [esp+0h] [ebp-38h] BYREF
  int v32; // [esp+4h] [ebp-34h]
  int v33; // [esp+8h] [ebp-30h]
  int v34; // [esp+Ch] [ebp-2Ch]
  int *v35; // [esp+10h] [ebp-28h]
  char v36; // [esp+17h] [ebp-21h]
  int v37; // [esp+18h] [ebp-20h]
  int v38; // [esp+1Ch] [ebp-1Ch]

  v4 = __PAIR64__(a2, a3);
  v34 = a1;
  if ( a1 != 111 )
  {
    v32 = *(_DWORD *)(a4 + 12);
    v33 = *(_DWORD *)(a4 + 4);
    if ( (v33 & 0x1000) == 0 )
    {
      v31 = *(_DWORD *)(a4 + 8);
      v5 = sub_4115D8();
      v6 = 15;
      v7 = alloca(v5);
      v38 = 4;
      v35 = &v31;
      goto LABEL_4;
    }
    if ( *(_WORD *)(a4 + 28) == 0 )
    {
      v31 = *(_DWORD *)(a4 + 8);
      v22 = alloca(sub_4115D8());
      v38 = 4;
      v35 = &v31;
LABEL_51:
      v6 = 15;
      goto LABEL_4;
    }
    v38 = 4;
    goto LABEL_50;
  }
  v32 = *(_DWORD *)(a4 + 12);
  v33 = *(_DWORD *)(a4 + 4);
  if ( (v33 & 0x1000) == 0 )
  {
    v31 = *(_DWORD *)(a4 + 8);
LABEL_62:
    v28 = alloca(sub_4115D8());
    v38 = 3;
    v35 = &v31;
    goto LABEL_63;
  }
  if ( *(_WORD *)(a4 + 28) == 0 )
  {
    v31 = *(_DWORD *)(a4 + 8);
    goto LABEL_62;
  }
  v38 = 3;
LABEL_50:
  v31 = *(_DWORD *)(a4 + 8);
  v27 = alloca(sub_4115D8());
  v35 = &v31;
  if ( v34 != 111 )
    goto LABEL_51;
LABEL_63:
  v6 = 7;
LABEL_4:
  if ( v4 != 0 )
  {
    v8 = v35;
    LOBYTE(v37) = v6;
    v36 = v34 & 0x20;
    do
    {
      v8 = (int *)((char *)v8 + 1);
      v9 = v36 | ((BYTE4(v4) & v37) + 55);
      v10 = v38;
      if ( (unsigned __int8)((BYTE4(v4) & v37) + 48) < 0x3Au )
        v9 = (BYTE4(v4) & v37) + 48;
      HIDWORD(v4) = __PAIR64__(v4, HIDWORD(v4)) >> v38;
      *((_BYTE *)v8 - 1) = v9;
      LODWORD(v4) = (unsigned int)v4 >> v10;
      if ( (v10 & 0x20) != 0 )
      {
        HIDWORD(v4) = v4;
        LODWORD(v4) = 0;
      }
    }
    while ( v4 != 0 );
    if ( v8 != v35 )
    {
      if ( v32 <= 0 || (v11 = v32 - ((char *)v8 - (char *)v35)) <= 0 )
      {
        if ( v34 != 111 )
        {
          v12 = (char *)v8 - (char *)v35;
          if ( v31 > (char *)v8 - (char *)v35 )
          {
            v13 = v31 - v12;
            *(_DWORD *)(a4 + 8) = v31 - v12;
LABEL_17:
            if ( (v33 & 0x800) != 0 )
            {
              v13 -= 2;
              if ( v13 <= 0 || v32 >= 0 )
                goto LABEL_20;
            }
            else if ( v32 >= 0 )
            {
              goto LABEL_58;
            }
            if ( (v33 & 0x600) != 0x200 )
            {
              if ( (v33 & 0x800) == 0 )
                goto LABEL_58;
              goto LABEL_20;
            }
LABEL_66:
            v29 = v8;
            v8 = (int *)((char *)v8 + v13);
            do
            {
              v29 = (int *)((char *)v29 + 1);
              *((_BYTE *)v29 - 1) = 48;
            }
            while ( v8 != v29 );
            v13 = -1;
            if ( v34 == 111 || (v33 & 0x800) == 0 )
            {
LABEL_21:
              if ( v13 <= 0 )
              {
LABEL_22:
                result = (int)v35;
                if ( v35 >= v8 )
                  return result;
                v16 = v13 - 1;
LABEL_24:
                v37 = v13;
                v17 = v8;
                v18 = a4;
                v38 = v16;
                v19 = (int *)result;
                goto LABEL_25;
              }
LABEL_58:
              v21 = v13 - 1;
              if ( (v33 & 0x400) != 0 )
              {
                if ( v35 < v8 )
                  goto LABEL_60;
                do
                {
LABEL_27:
                  sub_40B130(32, a4);
                  result = v21--;
                }
                while ( result > 0 );
                return result;
              }
              do
              {
LABEL_71:
                sub_40B130(32, a4);
                v30 = v21--;
              }
              while ( v30 > 0 );
              result = (int)v35;
              v16 = -2;
              v13 = -1;
              if ( v8 <= v35 )
                return result;
              goto LABEL_24;
            }
LABEL_20:
            v14 = v34;
            *((_BYTE *)v8 + 1) = 48;
            v8 = (int *)((char *)v8 + 2);
            *((_BYTE *)v8 - 2) = v14;
            goto LABEL_21;
          }
          goto LABEL_31;
        }
        if ( (v33 & 0x800) == 0 )
          goto LABEL_41;
        *(_BYTE *)v8 = 48;
        v8 = (int *)((char *)v8 + 1);
        goto LABEL_54;
      }
LABEL_36:
      v26 = v8;
      do
      {
        v26 = (int *)((char *)v26 + 1);
        *((_BYTE *)v26 - 1) = 48;
      }
      while ( (char *)v8 + v11 - (char *)v26 > 0 );
      if ( v11 <= 0 )
        v11 = 1;
      v8 = (int *)((char *)v8 + v11);
      if ( v8 == v35 )
        goto LABEL_56;
      goto LABEL_41;
    }
  }
  else
  {
    v8 = v35;
  }
  v25 = v33;
  BYTE1(v25) = BYTE1(v33) & 0xF7;
  *(_DWORD *)(a4 + 4) = v25;
  v11 = v32 - ((char *)v8 - (char *)v35);
  if ( v32 > 0 )
    goto LABEL_36;
LABEL_54:
  if ( v8 == v35 && v32 != 0 )
  {
LABEL_56:
    *(_BYTE *)v8 = 48;
    v8 = (int *)((char *)v8 + 1);
  }
LABEL_41:
  if ( (char *)v8 - (char *)v35 >= v31 )
  {
LABEL_31:
    result = a4;
    v23 = v34 == 111;
    *(_DWORD *)(a4 + 8) = -1;
    if ( !v23 )
    {
      v13 = -1;
      if ( (*(_BYTE *)(a4 + 5) & 8) != 0 )
      {
        v24 = v34;
        *((_BYTE *)v8 + 1) = 48;
        v8 = (int *)((char *)v8 + 2);
        *((_BYTE *)v8 - 2) = v24;
      }
      goto LABEL_22;
    }
    v21 = -2;
    v13 = -1;
    if ( v35 >= v8 )
      return result;
    goto LABEL_60;
  }
  v13 = v31 - ((char *)v8 - (char *)v35);
  v23 = v34 == 111;
  *(_DWORD *)(a4 + 8) = v13;
  v33 = *(_DWORD *)(a4 + 4);
  if ( !v23 )
    goto LABEL_17;
  if ( v32 < 0 && (v33 & 0x600) == 0x200 )
    goto LABEL_66;
  v21 = v13 - 1;
  if ( (v33 & 0x400) == 0 )
    goto LABEL_71;
  if ( v8 <= v35 )
    goto LABEL_27;
LABEL_60:
  v38 = v21;
  v19 = v35;
  v37 = v13;
  v17 = v8;
  v18 = a4;
  do
  {
LABEL_25:
    v20 = *((char *)v17 - 1);
    v17 = (int *)((char *)v17 - 1);
    result = sub_40B130(v20, v18);
  }
  while ( v17 > v19 );
  v21 = v38;
  if ( v37 > 0 )
    goto LABEL_27;
  return result;
}

