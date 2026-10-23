// busybox.exe @ 0x471138 size=222

int __userpurge sub_471138@<eax>(int a1@<eax>, unsigned int *a2@<edx>, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  int result; // eax
  unsigned int v9; // [esp+Ch] [ebp-78h]
  CHAR *Block; // [esp+14h] [ebp-70h]
  _BYTE v11[40]; // [esp+18h] [ebp-6Ch] BYREF
  int v12; // [esp+40h] [ebp-44h]
  int v13; // [esp+44h] [ebp-40h]

  v5 = 2147479552;
  if ( a2 != nullptr )
    v5 = *a2;
  v12 = 0;
  v13 = 0;
  sub_44305C(a1, (int)v11);
  v6 = (v12 | 0x3FF) + 1;
  while ( 1 )
  {
    if ( v6 > v5 )
      v6 = v5;
    v9 = v6;
    Block = (CHAR *)sub_471600(v6, v6 + a3 + 1);
    v7 = sub_432664(v9, &Block[a3]);
    if ( v7 == -1 )
    {
      free(Block);
      return 0;
    }
    a3 += v7;
    if ( v9 > v7 || v5 <= v7 )
      break;
    v5 -= v7;
    v6 = ((a3 >> 3) | 0x3FF) + 1;
    if ( v6 > 0x10000 )
      v6 = 0x10000;
  }
  result = sub_471600(v9, a3 + 1);
  *(_BYTE *)(result + a3) = 0;
  if ( a2 != nullptr )
    *a2 = a3;
  return result;
}

