// busybox.exe @ 0x452224 size=182

int __usercall sub_452224@<eax>(int *a1@<eax>, unsigned int a2@<edx>, int *a3@<ecx>)
{
  int v5; // ecx
  __int64 v6; // kr00_8
  int v7; // edx
  int v8; // eax
  __int64 v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+8h] [ebp-18h]

  if ( *a1 >= a3[1] )
    sub_451814((int)a3, *a1 + 1, (int)a3);
  v11 = *a3;
  *a3 = *a1;
  a3[2] = a1[2];
  v5 = 0;
  v10 = 0;
  while ( *a1 > v5 )
  {
    v6 = *(unsigned int *)(a1[3] + 4 * v5) * (unsigned __int64)a2 + v10;
    *(_DWORD *)(a3[3] + 4 * v5) = v6;
    v10 = HIDWORD(v6);
    ++v5;
  }
  if ( v10 == 0 || *a1 == 4096 )
    goto LABEL_9;
  v7 = a3[3];
  v8 = (*a3)++;
  *(_DWORD *)(v7 + 4 * v8) = v10;
  while ( 1 )
  {
    ++v5;
LABEL_9:
    if ( v5 >= v11 )
      break;
    *(_DWORD *)(a3[3] + 4 * v5) = 0;
  }
  sub_45100C(a3);
  return 0;
}

