// busybox.exe @ 0x4667d8 size=305

void __usercall sub_4667D8(int a1@<eax>, char a2@<dl>)
{
  int v4; // esi
  int v5; // ecx
  CHAR *v6; // eax
  int v7; // eax
  int v8; // ecx
  _BYTE *v9; // edx
  int v10; // eax
  int v11; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v12; // [esp+8h] [ebp-18h]
  __int16 v13; // [esp+Ah] [ebp-16h]
  int v14; // [esp+Ch] [ebp-14h]
  __int16 v15; // [esp+10h] [ebp-10h]
  __int16 v16; // [esp+12h] [ebp-Eh]

  v11 = 0;
  v12 = 1;
  v14 = *(_DWORD *)(a1 + 8);
  v15 = 1;
  v4 = 4096;
  do
  {
LABEL_2:
    if ( sub_45C508((int)&v11, 2, -1) < 0 )
      sub_41823C("poll");
    if ( v13 != 0 )
    {
      v6 = (CHAR *)sub_465ED8(a1, v4, v5);
      v7 = sub_45C560(v4, v6, 0);
      if ( v7 > 0 )
      {
        if ( v4 == v7 )
        {
          v4 += 4096;
          if ( v4 > 0x4000 )
            v4 = 0x4000;
        }
        sub_471D74(23, v7);
      }
      else
      {
        v11 = -1;
        free(*(void **)(a1 + 32));
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 32) = 0;
        if ( (a2 & 1) != 0 )
          return;
      }
    }
  }
  while ( v16 == 0 );
  while ( 1 )
  {
    v8 = sub_46693C(v5, "encrypted data");
    if ( v8 <= 0 )
      break;
    v9 = *(_BYTE **)(a1 + 52);
    if ( *v9 != 23 )
      sub_416B80((unsigned __int8 **)(a1 + 52), "encrypted data", v8);
    sub_471D00(v8, v9 + 5);
    v5 = *(_DWORD *)(a1 + 48);
    if ( v5 > 4 )
    {
      v10 = *(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 44);
      if ( v5 >= (*(unsigned __int8 *)(v10 + 3) << 8) + *(unsigned __int8 *)(v10 + 4) + 5 )
        continue;
    }
    goto LABEL_2;
  }
}

