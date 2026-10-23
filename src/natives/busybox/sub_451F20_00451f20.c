// busybox.exe @ 0x451f20 size=146

int __usercall sub_451F20@<eax>(int *a1@<eax>, int *a2@<edx>, int a3@<ecx>)
{
  _DWORD *v5; // eax
  unsigned int v6; // ecx
  int i; // edx
  unsigned int v8; // edi
  int v9; // eax
  _DWORD *v10; // edx
  _DWORD *v12; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-18h]
  int v14; // [esp+8h] [ebp-14h]

  if ( *a1 >= a2[1] )
    sub_451814((int)a2, *a1 + 1, a3);
  v13 = *a2;
  *a2 = *a1;
  v14 = a1[3];
  v5 = (_DWORD *)a2[3];
  v12 = v5;
  v6 = 0;
  for ( i = 0; *a1 > i; ++i )
  {
    v8 = *(_DWORD *)(v14 + 4 * i);
    *v5++ = (2 * v8) | v6;
    v6 = v8 >> 31;
  }
  if ( v6 != 0 && *a2 != 4095 )
  {
    *v5 = 1;
    ++*a2;
  }
  v9 = *a2;
  v10 = &v12[*a2];
  while ( v9 < v13 )
  {
    *v10++ = 0;
    ++v9;
  }
  a2[2] = a1[2];
  return 0;
}

