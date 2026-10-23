// busybox.exe @ 0x431304 size=442

void __cdecl __noreturn sub_431304(int a1, int a2)
{
  const char **v2; // edi
  _BYTE *v3; // ebp
  size_t Size; // ebx
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  char v8; // dl
  int v9; // esi
  char *v10; // ecx
  int v11; // edx
  int v12; // [esp+Ch] [ebp-30h]
  char v13; // [esp+13h] [ebp-29h]
  FILE *v14; // [esp+14h] [ebp-28h]
  unsigned int v15; // [esp+18h] [ebp-24h]
  _BYTE *v16; // [esp+1Ch] [ebp-20h]
  char *v17; // [esp+24h] [ebp-18h]

  sub_435D44(a2, "bsw:");
  v15 = sub_470928(10000, 1);
  v2 = (const char **)(a2 + 4 * dword_473090);
  if ( *v2 == nullptr )
    *--v2 = "-";
  v13 = 0;
  v3 = nullptr;
  while ( 1 )
  {
    v14 = (FILE *)sub_431518();
    if ( v14 == nullptr )
      goto LABEL_27;
LABEL_5:
    Size = 0;
    v5 = 0;
    while ( 1 )
    {
      v12 = sub_46F03C(v14);
      if ( v12 == -1 )
        break;
      if ( (Size & 0xFFF) == 0 )
        v3 = (_BYTE *)sub_471600(v6, Size + 4096);
      while ( 1 )
      {
        v3[Size] = v12;
        if ( v12 == 10 )
        {
          sub_46F988(&v3[Size], Size + 1);
          goto LABEL_5;
        }
        v16 = &v3[Size];
        v5 = sub_4138DC(v5, v12);
        if ( v5 <= v15 || Size == 0 )
          break;
        v7 = Size - 1;
        if ( (dword_486008 & 2) != 0 )
        {
          while ( 1 )
          {
            if ( v7 < 0 )
              goto LABEL_22;
            v8 = v3[v7];
            if ( v8 == 32 || v8 == 9 )
              break;
            --v7;
          }
          v9 = v7 + 1;
          sub_46F988(v16, v7 + 1);
          sub_46F0B8(10);
          Size -= v9;
          memmove(v3, &v3[v9], Size);
          v10 = v3;
          v5 = 0;
          while ( v10 != &v3[Size] )
          {
            v17 = v10;
            v5 = sub_4138DC(v5, *v10);
            v10 = v17 + 1;
          }
        }
        else
        {
LABEL_22:
          *v16 = 10;
          ((void (*)(void))sub_46F988)();
          Size = 0;
          v5 = 0;
        }
      }
      ++Size;
    }
    if ( Size != 0 )
      ((void (*)(void))sub_46F988)();
    if ( sub_42EE00(v14) != 0 )
    {
      sub_418224(*v2, v11);
LABEL_27:
      v13 = 1;
    }
    if ( *++v2 == nullptr )
      sub_42F138(v13);
  }
}

