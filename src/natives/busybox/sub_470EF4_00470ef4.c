// busybox.exe @ 0x470ef4 size=205

int __usercall sub_470EF4@<eax>(FILE *a1@<eax>, const char *Str@<edx>, int a3@<ecx>, int *a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  size_t Size; // [esp+Ch] [ebp-28h]
  unsigned int v14; // [esp+14h] [ebp-20h]
  int v17; // [esp+20h] [ebp-14h]

  Size = strlen(Str);
  v14 = *a4;
  v4 = 1 - Size;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = fgetc(a1);
    v9 = v8;
    if ( v8 == -1 )
      break;
    if ( v6 <= v5 )
    {
      v17 = v8;
      v6 += 200;
      v10 = sub_471600(v8, v6);
      v7 = v10;
      v9 = v17;
      if ( v14 <= v5 )
      {
        *(_BYTE *)(v10 + v5++) = v17;
        goto LABEL_13;
      }
    }
    *(_BYTE *)(v7 + v5++) = v9;
    if ( v4 >= 0 && memcmp((const void *)(v7 + v4), Str, Size) == 0 )
    {
      if ( a3 != 0 )
        v5 = v4;
      goto LABEL_13;
    }
    ++v4;
  }
  if ( v5 == 0 )
    return v7;
LABEL_13:
  v7 = sub_471600(v9, v5 + 1);
  *(_BYTE *)(v7 + v5) = 0;
  *a4 = v5;
  return v7;
}

