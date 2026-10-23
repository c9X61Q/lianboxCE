// busybox.exe @ 0x445c4c size=271

int __usercall sub_445C4C@<eax>(const CHAR *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int Block; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // edx
  _BYTE v13[8]; // [esp+10h] [ebp-6Ch] BYREF
  int v14; // [esp+18h] [ebp-64h]
  int v15; // [esp+1Ch] [ebp-60h]
  int v16; // [esp+20h] [ebp-5Ch]
  int v17; // [esp+24h] [ebp-58h]
  int v18; // [esp+28h] [ebp-54h]
  int v19; // [esp+2Ch] [ebp-50h]
  int v20; // [esp+38h] [ebp-44h]
  int v21; // [esp+3Ch] [ebp-40h]
  int v22; // [esp+40h] [ebp-3Ch]
  int v23; // [esp+48h] [ebp-34h]
  int v24; // [esp+50h] [ebp-2Ch]
  int v25; // [esp+60h] [ebp-1Ch]
  int v26; // [esp+64h] [ebp-18h]
  int v27; // [esp+68h] [ebp-14h]

  Block = sub_4728CC();
  *(_DWORD *)(Block + 4) = a1;
  *(_DWORD *)Block = a2;
  if ( (a3 | dword_486008 & 0x800000) == 0 )
  {
    if ( sub_443484(a1, (int)v13) == 0 )
    {
      *(_WORD *)(Block + 14) = v16;
      goto LABEL_7;
    }
LABEL_5:
    sub_418224(a1, v6);
    BYTE1(MultiByteStr) = 1;
    free((void *)Block);
    return 0;
  }
  if ( sub_444C28(a1, (int)v13) != 0 )
    goto LABEL_5;
  *(_WORD *)(Block + 16) = v16;
LABEL_7:
  *(_WORD *)(Block + 18) = v16;
  *(_DWORD *)(Block + 76) = v27;
  v7 = v21;
  *(_DWORD *)(Block + 24) = v20;
  *(_DWORD *)(Block + 28) = v7;
  *(_DWORD *)(Block + 32) = v23;
  v8 = dword_486008;
  if ( (dword_486008 & 0x40000) != 0 )
    *(_DWORD *)(Block + 32) = v22;
  if ( (v8 & 0x10000) != 0 )
    *(_DWORD *)(Block + 32) = v24;
  v9 = v15;
  *(_DWORD *)(Block + 40) = v14;
  *(_DWORD *)(Block + 44) = v9;
  v10 = v26;
  *(_DWORD *)(Block + 48) = v25;
  *(_DWORD *)(Block + 52) = v10;
  *(_DWORD *)(Block + 56) = v17;
  *(_DWORD *)(Block + 60) = v18;
  *(_DWORD *)(Block + 64) = v19;
  *(_DWORD *)(Block + 68) = 0;
  *(_DWORD *)(Block + 72) = 0;
  return Block;
}

