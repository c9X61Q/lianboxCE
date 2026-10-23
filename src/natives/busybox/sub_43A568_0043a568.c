// busybox.exe @ 0x43a568 size=630

__int64 __usercall sub_43A568@<edx:eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v14; // [esp+4h] [ebp-20h]
  __int64 v16; // [esp+Ch] [ebp-18h]

  v16 = 0;
  *(_DWORD *)(a1 + 20) = sub_470E78();
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_WORD *)(a1 + 100) = -256;
  *(_BYTE *)(a1 + 102) = 1;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = sub_4200EC();
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 120) = "corrupted data";
  v14 = 0;
  if ( setjmp3() != 0 )
  {
    sub_4181F8(*(const char **)(a1 + 120));
LABEL_3:
    v16 = -1;
    goto LABEL_25;
  }
  do
  {
    *(_DWORD *)(a1 + 16) = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 102) != 0 )
      {
        if ( *(_BYTE *)(a1 + 103) != 0 )
        {
          *(_DWORD *)(a1 + 8) = sub_420034(
                                  *(_DWORD *)(a1 + 8),
                                  *(_BYTE **)(a1 + 20),
                                  *(_DWORD *)(a1 + 16),
                                  *(_DWORD *)(a1 + 24));
          *(_QWORD *)a1 += *(unsigned int *)(a1 + 16);
          *(_BYTE *)(a1 + 103) = 0;
          v2 = 0;
          v4 = sub_467054(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20), v3, v14);
          goto LABEL_21;
        }
        *(_BYTE *)(a1 + 101) = sub_439D5C(a1, (_BYTE *)(a1 + 103));
        *(_BYTE *)(a1 + 102) = 0;
      }
      v5 = *(_BYTE *)(a1 + 101);
      if ( v5 == -2 )
        break;
      if ( v5 != -1 )
        sub_412BD8((_DWORD *)a1);
      while ( 1 )
      {
        v6 = *(_DWORD *)(a1 + 104);
        *(_DWORD *)(a1 + 104) = v6 - 1;
        v7 = *(_DWORD *)(a1 + 108);
        if ( v6 == 0 )
          break;
        v8 = sub_42F8EC((_DWORD *)a1, v7, (unsigned int *)(a1 + 112), 8u);
        *(_DWORD *)(a1 + 108) = v8;
        v9 = *(_DWORD *)(a1 + 20);
        v10 = *(_DWORD *)(a1 + 116);
        *(_DWORD *)(a1 + 116) = v10 + 1;
        *(_BYTE *)(v9 + v10) = v8;
        if ( *(_DWORD *)(a1 + 116) == 0x8000 )
        {
          *(_DWORD *)(a1 + 16) = 0x8000;
          *(_DWORD *)(a1 + 116) = 0;
          *(_DWORD *)(a1 + 108) >>= 8;
          *(_DWORD *)(a1 + 112) -= 8;
          goto LABEL_19;
        }
        *(_DWORD *)(a1 + 108) >>= 8;
        *(_DWORD *)(a1 + 112) -= 8;
      }
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 28) = v7;
      *(_BYTE *)(a1 + 32) = *(_DWORD *)(a1 + 112);
LABEL_20:
      *(_BYTE *)(a1 + 102) = 1;
    }
    if ( sub_43A274(a1) != 1 )
      goto LABEL_20;
LABEL_19:
    *(_DWORD *)(a1 + 8) = sub_420034(
                            *(_DWORD *)(a1 + 8),
                            *(_BYTE **)(a1 + 20),
                            *(_DWORD *)(a1 + 16),
                            *(_DWORD *)(a1 + 24));
    *(_QWORD *)a1 += *(unsigned int *)(a1 + 16);
    v2 = 1;
    v4 = sub_467054(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20), v11, v14);
LABEL_21:
    if ( v4 == -1 )
      goto LABEL_3;
    v16 += v4;
  }
  while ( v2 != 0 );
  if ( *(_BYTE *)(a1 + 32) > 7u )
  {
    v12 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 48) = v12 - 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 36) + v12 - 1) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) >>= 8;
    *(_BYTE *)(a1 + 32) -= 8;
  }
LABEL_25:
  free(*(void **)(a1 + 20));
  free(*(void **)(a1 + 24));
  return v16;
}

