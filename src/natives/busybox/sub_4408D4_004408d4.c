// busybox.exe @ 0x4408d4 size=517

int __usercall sub_4408D4@<eax>(__int16 a1@<ax>)
{
  char *Block; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned __int8 *v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v14; // [esp+10h] [ebp-38h]
  unsigned int v15; // [esp+14h] [ebp-34h]
  int v16; // [esp+18h] [ebp-30h]
  int v17; // [esp+1Ch] [ebp-2Ch]
  int v18; // [esp+20h] [ebp-28h]
  int v19; // [esp+24h] [ebp-24h]
  unsigned __int8 *v20; // [esp+28h] [ebp-20h]
  unsigned __int8 *v21; // [esp+28h] [ebp-20h]
  unsigned __int8 *v22; // [esp+30h] [ebp-18h]
  unsigned int v23[5]; // [esp+34h] [ebp-14h] BYREF

  Block = nullptr;
  v14 = 278595;
  v19 = 0;
  v18 = 0;
  v17 = 1;
  v16 = 1;
  v15 = 0x40000;
  while ( 1 )
  {
    v3 = sub_456700();
    v4 = v3;
    if ( v3 == 0 )
      break;
    if ( v3 == -1 )
    {
      v5 = "this file is a split lzop file";
      goto LABEL_7;
    }
    if ( v3 > 0x4000000 || (v6 = sub_456700(), v7 = v6, v4 < v6) || v6 == 0 )
    {
LABEL_6:
      v5 = "corrupted data";
      goto LABEL_7;
    }
    if ( v15 < v4 )
    {
      if ( Block != nullptr )
        free(Block);
      v14 = v4 + (v4 >> 4) + 67;
      v15 = v4;
      Block = nullptr;
    }
    if ( (a1 & 1) != 0 )
      v17 = sub_456700();
    if ( (a1 & 0x100) != 0 )
      v19 = sub_456700();
    if ( v4 > v7 )
    {
      if ( (a1 & 2) != 0 )
        v16 = sub_456700();
      if ( (a1 & 0x200) != 0 )
        v18 = sub_456700();
    }
    if ( Block == nullptr )
      Block = (char *)sub_4728CC();
    sub_4715C8(v7, &Block[v14 - v7]);
    v8 = (unsigned __int8 *)&Block[v14 - v7];
    if ( v4 > v7 )
    {
      v23[0] = v4;
      if ( (dword_486008 & 0x20000) == 0 )
      {
        if ( (a1 & 2) != 0 && (v9 = sub_4405C8(1u, v8, v7), v8 = (unsigned __int8 *)&Block[v14 - v7], v16 != v9)
          || (a1 & 0x200) != 0 && (v22 = v8, v10 = sub_4408BC(0, v8, v7), v8 = v22, v18 != v10) )
        {
LABEL_29:
          v5 = "checksum error";
LABEL_7:
          sub_418210(v5);
        }
      }
      if ( sub_43FC04(v8, v7, (unsigned int)Block, v23) != 0 || v23[0] != v4 )
        goto LABEL_6;
      v8 = (unsigned __int8 *)Block;
    }
    if ( (dword_486008 & 0x20000) == 0 )
    {
      if ( (a1 & 1) != 0 )
      {
        v20 = v8;
        v11 = sub_4405C8(1u, v8, v4);
        v8 = v20;
        if ( v17 != v11 )
          goto LABEL_29;
      }
      if ( (a1 & 0x100) != 0 )
      {
        v21 = v8;
        v12 = sub_4408BC(0, v8, v4);
        v8 = v21;
        if ( v19 != v12 )
          goto LABEL_29;
      }
    }
    sub_471D00(v4, v8);
  }
  free(Block);
  return 1;
}

