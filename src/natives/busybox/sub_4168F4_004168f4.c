// busybox.exe @ 0x4168f4 size=594

int __usercall sub_4168F4@<eax>(_DWORD *a1@<eax>, const char *a2@<edx>, int a3@<ecx>, int a4, int a5, char a6)
{
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  unsigned __int8 v10; // dl
  int v11; // ecx
  int v12; // esi
  char v13; // bl
  int v14; // ecx
  int v15; // ebp
  unsigned int v16; // ebx
  char v17; // al
  size_t v18; // eax
  int v20; // [esp+14h] [ebp-ACh]
  int v21; // [esp+14h] [ebp-ACh]
  char *Source; // [esp+18h] [ebp-A8h]
  unsigned int v23; // [esp+1Ch] [ebp-A4h]
  int v24; // [esp+20h] [ebp-A0h]
  _BYTE *v25; // [esp+24h] [ebp-9Ch]
  const char *i; // [esp+28h] [ebp-98h]
  size_t v27; // [esp+2Ch] [ebp-94h]
  int v28; // [esp+30h] [ebp-90h]
  char v31[4]; // [esp+3Ch] [ebp-84h] BYREF
  _BYTE v32[32]; // [esp+40h] [ebp-80h] BYREF
  int v33; // [esp+60h] [ebp-60h] BYREF
  _DWORD v34[23]; // [esp+64h] [ebp-5Ch]

  v25 = (_BYTE *)sub_415434(a1, (int)v32);
  Source = (char *)sub_436704();
  v27 = strlen(a2);
  v6 = 0;
  v7 = 0;
  v24 = 0;
  while ( sub_459FE8((int)v25, Source, 10, (int)&v33, v6) == 0 )
  {
    v28 = v33;
    v23 = v34[0];
    v8 = v7 + v34[0];
    v20 = sub_452C80(v31, v7 + v34[0] + v27);
    qmemcpy((void *)(v7 + v20), Source, v23);
    if ( ++v24 >= a3 )
    {
      v8 = v7 + v28;
      v9 = 0;
      for ( i = a2; ; ++i )
      {
        v10 = *i;
        if ( *i == 0 )
          break;
        v11 = v8 + 1;
        *(_BYTE *)(v20 + v8) = v10;
        if ( v10 == 92 )
        {
          ++v9;
          goto LABEL_17;
        }
        if ( v10 == 38 )
        {
          v12 = 0;
          v13 = v9;
        }
        else
        {
          if ( (unsigned __int8)(v10 - 48) > 9u || (a6 & 1) == 0 )
            goto LABEL_16;
          v12 = v10 - 48;
          v13 = v9 + 1;
        }
        v14 = v11 - ((v9 + 3) >> 1);
        v15 = v14;
        if ( (v13 & 1) != 0 )
        {
          v11 = v14 + 1;
          *(_BYTE *)(v20 + v15) = v10;
        }
        else
        {
          v16 = v34[2 * v12] - v34[2 * v12 - 1];
          v20 = sub_452C80(v31, v16 + v27 + v14);
          qmemcpy((void *)(v15 + v20), &Source[v34[2 * v12 - 1]], v16);
          v11 = v15 + v16;
        }
LABEL_16:
        v9 = 0;
LABEL_17:
        v8 = v11;
      }
    }
    Source += v23;
    if ( v24 == a3 )
      goto LABEL_24;
    if ( v28 == v23 )
    {
      v17 = *Source;
      *(_BYTE *)(v20 + v8) = *Source;
      if ( v17 == 0 )
        goto LABEL_25;
      ++Source;
      ++v8;
    }
    v7 = v8;
    v6 = 1;
  }
  v8 = v7;
LABEL_24:
  v18 = strlen(Source);
  v21 = sub_452C80(v31, v18 + v8);
  strcpy((char *)(v21 + v8), Source);
LABEL_25:
  sub_45EC5C();
  if ( v25 == v32 )
    sub_45A08C(v25);
  return v24;
}

