// busybox.exe @ 0x435ac0 size=123

int __usercall sub_435AC0@<eax>(int *a1@<eax>, unsigned int *a2@<edx>, FILE *a3@<ecx>)
{
  int v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int result; // eax
  int v11; // [esp+10h] [ebp-14h]

  v4 = *a1;
  v5 = *a2;
  v6 = 0;
  do
  {
    v7 = fgetc(a3);
    if ( v7 == -1 )
      break;
    if ( v6 + 1 >= v5 )
    {
      v11 = v7;
      v5 += (v5 >> 2) + 64;
      v4 = sub_471600(v7, v5);
      v7 = v11;
    }
    *(_BYTE *)(v4 + v6++) = v7;
  }
  while ( v7 != 10 );
  result = -1;
  if ( v6 != 0 )
  {
    *(_BYTE *)(v4 + v6) = 0;
    *a1 = v4;
    *a2 = v5;
    return v6;
  }
  return result;
}

