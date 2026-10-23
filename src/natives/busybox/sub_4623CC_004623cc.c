// busybox.exe @ 0x4623cc size=568

int __cdecl sub_4623CC(int a1, int a2)
{
  char v2; // si
  __int64 v3; // rax
  char *v4; // ecx
  const char *v5; // ebx
  unsigned int v6; // edx
  const char *v7; // eax
  void *v8; // edx
  const char *v9; // ebp
  unsigned __int64 v10; // rdi
  int v11; // eax
  int v12; // ecx
  signed int MaxCount; // ebx
  unsigned int v14; // esi
  size_t v15; // eax
  const char *v16; // edx
  const char *v17; // eax
  int v18; // ecx
  _BYTE *v19; // eax
  char *Str; // [esp+0h] [ebp-44h]
  char *Stra; // [esp+0h] [ebp-44h]
  int Val; // [esp+4h] [ebp-40h]
  __int64 v24; // [esp+14h] [ebp-30h]
  u_long *Buf; // [esp+1Ch] [ebp-28h]
  const char **v26; // [esp+20h] [ebp-24h]
  signed int v27; // [esp+24h] [ebp-20h]
  int v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  unsigned int v30; // [esp+2Ch] [ebp-18h] BYREF
  _DWORD v31[5]; // [esp+30h] [ebp-14h] BYREF

  v30 = 2;
  v2 = sub_435D44(a2, (int)"^l:b:a:+", v31, v31, &v30);
  v24 = 1000;
  if ( (v2 & 1) != 0 )
  {
    v3 = sub_470998(0, 0, -1, 0x7FFFFFFF);
    Val = (int)v4;
    Str = v4;
    v24 = v3;
  }
  v29 = v2 & 2;
  if ( (v2 & 2) != 0 )
    v24 = sub_4709D8(Str, Val);
  v26 = (const char **)(a2 + 4 * dword_473090);
  if ( *v26 != nullptr )
  {
    v5 = v26[1];
    if ( v5 == nullptr )
      v5 = "x";
    sub_471588();
    sub_471530(Str);
  }
  else
  {
    *v26 = "standard input";
    v5 = "x";
  }
  v6 = strlen(v5) + v30;
  v7 = "suffix too long";
  if ( v6 > 0xFF )
LABEL_19:
    sub_418210(v7);
  v8 = (void *)sub_4728CC(v30);
  memset(v8, 97, v30);
  v9 = (const char *)sub_4708BC("%s%s", v5, (const char *)v8);
  v10 = 0;
LABEL_12:
  v11 = sub_45C560(1023, (LPSTR)&MultiByteStr, 0);
  MaxCount = v11;
  if ( v11 != 0 )
  {
    if ( v11 < 0 )
      sub_41823C(*v26);
    Buf = &MultiByteStr;
    while ( 1 )
    {
      if ( v10 == 0 )
      {
        if ( v9 == nullptr )
        {
          v7 = "suffixes exhausted";
          goto LABEL_19;
        }
        sub_47154C(v12, 769);
        sub_471530(Stra);
        v14 = v30;
        v15 = strlen(v9);
        v16 = &v9[v15 - 1];
        v17 = &v9[v15];
        while ( 1 )
        {
          if ( *v16 <= 0x79u )
          {
            ++*v16;
            v10 = __PAIR64__(v24, HIDWORD(v24));
            goto LABEL_26;
          }
          --v16;
          if ( v14 < v17 - v16 )
            break;
          *((_BYTE *)v16 + 1) = 97;
        }
        v10 = __PAIR64__(v24, HIDWORD(v24));
        v9 = nullptr;
      }
LABEL_26:
      if ( v29 != 0 )
      {
        v27 = MaxCount;
        if ( __SPAIR64__(v10, HIDWORD(v10)) < MaxCount )
          v27 = HIDWORD(v10);
        v18 = v27;
        LODWORD(v10) = (__PAIR64__(v10, HIDWORD(v10)) - v27) >> 32;
        HIDWORD(v10) -= v27;
      }
      else
      {
        v19 = memchr(Buf, 10, MaxCount);
        v18 = MaxCount;
        if ( v19 != nullptr )
        {
          LODWORD(v10) = (__PAIR64__(v10, HIDWORD(v10)) - 1) >> 32;
          --HIDWORD(v10);
          v18 = v19 - (_BYTE *)Buf + 1;
        }
      }
      v28 = v18;
      sub_471D00(v18, Buf);
      v12 = v28;
      Buf = (u_long *)((char *)Buf + v28);
      MaxCount -= v28;
      if ( MaxCount == 0 )
        goto LABEL_12;
    }
  }
  return 0;
}

