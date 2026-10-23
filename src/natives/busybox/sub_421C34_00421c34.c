// busybox.exe @ 0x421c34 size=315

int *__usercall sub_421C34@<eax>(unsigned int a1@<eax>, int a2@<edx>, char *a3@<ecx>)
{
  int v5; // ecx
  int *result; // eax
  int v7; // ebx
  unsigned int i; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // edi
  int v14; // edx
  int v15; // ecx
  unsigned int v17; // [esp+4h] [ebp-14h]
  unsigned int v18; // [esp+4h] [ebp-14h]

  memset(a3, 255, 0xA8u);
  if ( a1 == 9 )
  {
    if ( a2 == 1752 )
    {
      v5 = 244 * dword_486008;
      for ( result = nullptr; result != (int *)19; result = (int *)((char *)result + 1) )
        *(_DWORD *)&a3[4 * (_DWORD)result + 8] = v5 + (unsigned __int8)byte_483CB4[(_DWORD)result];
      return result;
    }
    goto LABEL_7;
  }
  v7 = 1;
  if ( a1 > 2 )
LABEL_7:
    v7 = 2 - (sub_43D3F0() == 0);
  for ( i = a1; i != 0; v7 += (unsigned __int8)byte_47F6F0[i] )
    --i;
  v9 = a2 - 1;
  if ( (unsigned int)(a2 - 1) > 0x6A4 )
  {
    i = v9 / 0x64 - 17;
LABEL_14:
    v17 = i;
    i = (a2 - 1601) / 0x190u;
    goto LABEL_15;
  }
  v17 = 0;
  if ( v9 > 0x640 )
    goto LABEL_14;
LABEL_15:
  v10 = v7 + (v9 >> 2) + 365 * a2 - v17 + i;
  if ( v10 - 365 > 0x9C32A )
    v11 = v10 - 371;
  else
    v11 = v10 - 360;
  v12 = v11 % 7;
  if ( dword_486008 == 0 )
    v7 = 1;
  v13 = (unsigned __int8)byte_47F6F0[a1];
  if ( a1 == 2 )
  {
    v18 = v11 % 7;
    v13 -= (sub_43D3F0() == 0) - 1;
    v12 = v18;
  }
  result = (int *)&a3[4 * v12];
  v14 = v7 + v13;
  do
  {
    v15 = v7++;
    *result++ = v15;
  }
  while ( v14 != v7 );
  return result;
}

