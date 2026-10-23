// busybox.exe @ 0x43b640 size=666

int __cdecl sub_43B640(int a1, int a2)
{
  __int16 v2; // si
  int v3; // edi
  unsigned __int16 v4; // bx
  int v5; // edx
  int v6; // edx
  char **v7; // ecx
  char *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  char *v12; // ebx
  char *v13; // eax
  const char *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // edx
  void *Block; // [esp+0h] [ebp-C8h]
  int v20; // [esp+1Ch] [ebp-ACh]
  char *v21; // [esp+24h] [ebp-A4h]
  char **v22; // [esp+28h] [ebp-A0h]
  int v23; // [esp+2Ch] [ebp-9Ch]
  signed __int32 v24; // [esp+30h] [ebp-98h]
  signed __int32 v25; // [esp+34h] [ebp-94h]
  int v26; // [esp+38h] [ebp-90h]
  char *v27; // [esp+38h] [ebp-90h]
  char *v28; // [esp+3Ch] [ebp-8Ch] BYREF
  const char *v29; // [esp+40h] [ebp-88h] BYREF
  const char *v30; // [esp+44h] [ebp-84h] BYREF
  const char *v31[5]; // [esp+48h] [ebp-80h] BYREF
  _BYTE v32[16]; // [esp+5Ch] [ebp-6Ch] BYREF
  int v33; // [esp+6Ch] [ebp-5Ch]

  v2 = sub_435D60(a2, (int)"^cvbDdpsg:m:o:t:", (int)"verbose", &v29, v31, &v30, &v28);
  v24 = (v2 & 2) == 0 ? 10 : 4106;
  v25 = (v2 & 2) == 0 ? 4 : 4100;
  if ( (v2 & 0x20) != 0 )
    v24 |= 1u;
  v3 = dword_473090;
  v4 = 493;
  if ( (v2 & 0x100) != 0 )
    v4 = sub_417E48(v31[0], 493, -((v2 & 2) == 0));
  if ( (v2 & 0x200) != 0 )
    sub_4357EC(v30, sub_471CCC);
  else
    sub_4365A0();
  if ( (v2 & 0x80) != 0 )
    sub_4357EC(v29, (int (*)(void))sub_470DE8);
  else
    sub_4365A0();
  v5 = a1 - v3;
  v22 = (char **)(a2 + 4 * v3);
  v23 = v2 & 0x410;
  if ( (v2 & 0x410) != 0 )
  {
    v10 = v2 & 0x400;
    goto LABEL_15;
  }
  v6 = v5 - 1;
  v7 = &v22[v6];
  v26 = v6;
  v28 = *v7;
  v8 = v28;
  *v7 = nullptr;
  v9 = sub_444C28(v8, v32);
  v5 = v26;
  if ( v9 >= 0 )
  {
    v10 = (v33 & 0xF000) == 0x4000;
LABEL_15:
    v23 = v10;
  }
  if ( v5 <= 0 )
    sub_418164();
  v11 = 0;
  v20 = v4;
  while ( 1 )
  {
    v27 = *v22;
    if ( *v22 == nullptr )
      return v11;
    if ( (v2 & 0x10) != 0 )
    {
      if ( sub_417C00(v27, 493, v25) != 0 )
        goto LABEL_36;
      v12 = v27;
    }
    else
    {
      v12 = v28;
      if ( (v2 & 8) != 0 )
      {
        v13 = (char *)sub_47188C();
        v21 = v13;
        if ( (v2 & 0x400) == 0 )
          v13 = sub_403200(v13);
        sub_417C00(v13, 493, v25);
        free(v21);
      }
      if ( v23 != 0 )
      {
        v14 = sub_416E24(v27);
        v12 = (char *)sub_41E9A4(v28, v14, v15);
      }
      if ( sub_41EE84(v27, v12, v24) != 0 )
        goto LABEL_36;
      if ( (v2 & 0x40) != 0 )
      {
        v31[1] = "strip";
        v31[2] = "-p";
        v31[3] = v12;
        v31[4] = nullptr;
        if ( sub_461710(Block) != 0 )
        {
          sub_418224("strip", v16);
          v11 = 1;
        }
      }
    }
    if ( sub_442E6C(v12, v20) == -1 )
    {
      sub_417FE4(v17, "can't change %s of %s", "permissions", v12);
LABEL_36:
      v11 = 1;
    }
    ++v22;
  }
}

