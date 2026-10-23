// busybox.exe @ 0x417860 size=287

// positive sp value has been detected, the output may be wrong!
int __usercall sub_417860@<eax>(char a1@<al>, int a2@<ecx>, __int64 a3)
{
  unsigned int v3; // eax
  void *v4; // esp
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v13; // [esp-100Ch] [ebp-101Ch]
  char v14; // [esp-1005h] [ebp-1015h]
  int v15; // [esp-1004h] [ebp-1014h]
  int v16; // [esp-1000h] [ebp-1010h]
  CHAR v17[4092]; // [esp-FFCh] [ebp-100Ch] BYREF

  v3 = sub_4115D8(0x100Cu, a2, a1);
  v4 = alloca(v3);
  v5 = *(int *)((char *)&v13 + v3);
  v15 = v6;
  v7 = -1;
  if ( a3 >= 0 )
  {
    if ( v5 < 0 )
      return v7;
    v14 = 0;
    v16 = -1;
    if ( a3 == 0 )
    {
      v16 = 1;
      a3 = 0x1000000;
    }
  }
  else
  {
    if ( v5 < 0 )
      return v7;
    a3 = -a3;
    v14 = 1;
    v16 = -1;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = a3;
    if ( a3 > 4096 )
      v8 = 4096;
    v9 = sub_45C560(v8, v17);
    v10 = v9;
    if ( v9 < 0 )
      break;
    if ( v9 == 0 )
      return v7;
    if ( v15 >= 0 )
    {
      v13 = v9;
      v11 = sub_43269C(v9, v17);
      v10 = v13;
      if ( v13 > v11 )
      {
        if ( v14 == 0 )
          break;
        v15 = -1;
      }
    }
    v7 += v10;
    if ( v16 == -1 )
    {
      a3 -= v10;
      if ( a3 == 0 )
        return v7;
    }
  }
  ((void (__fastcall *)(int))sub_418224)(v10);
  return -1;
}

