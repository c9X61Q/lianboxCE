// busybox.exe @ 0x40bda0 size=211

int __usercall sub_40BDA0@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>, _DWORD *a4)
{
  int v4; // ecx
  int i; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  __int64 v11; // [esp+10h] [ebp-2Ch]

  v11 = a3 - 1;
  v4 = (int)v11 / 10;
  for ( i = 1; v4 != 0; v4 /= 10 )
    ++i;
  v6 = a4[10];
  if ( v6 == -1 )
  {
    a4[10] = 2;
    v6 = 2;
  }
  v7 = a4[2];
  if ( i < v6 )
    i = v6;
  v8 = v7 - (i + 2);
  if ( v7 <= i + 2 )
    v8 = -1;
  a4[2] = v8;
  sub_40B590(a1, a2, 1, (int)a4);
  a4[3] = a4[10];
  v9 = a4[1];
  a4[1] = v9 | 0x1C0;
  sub_40B130(v9 & 0x20 | 0x45, (int)a4);
  a4[2] += i + 1;
  return sub_40BA10(v11, HIDWORD(v11), a4);
}

