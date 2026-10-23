// busybox.exe @ 0x42e5f8 size=304

int __usercall sub_42E5F8@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v12; // [esp+14h] [ebp-1Ch]
  unsigned int v13; // [esp+18h] [ebp-18h]
  __int64 v14; // [esp+1Ch] [ebp-14h] BYREF

  v3 = a1;
  v4 = a2;
  if ( (a1 > 3) + a2 != 0 )
  {
    while ( (v3 & 1) == 0 )
    {
      sub_46F088(" 2");
      v3 = __PAIR64__(v4, v3) >> 1;
      v4 >>= 1;
    }
    v13 = (sub_43CAD8(a3, v4) - 1) | 1;
    v5 = 913;
    v6 = 3;
    while ( 1 )
    {
      v12 = v5;
      v7 = sub_402940(__PAIR64__(v4, v3), v6, &v14);
      v9 = v12;
      if ( v14 != 0 )
        break;
      v3 = v7;
      v4 = v8;
      sub_46F088(" %u", v6);
      v13 = (((int (*)(void))sub_43CAD8)() - 1) | 1;
      v10 = v12;
LABEL_7:
      v5 = v10;
    }
    while ( v6 < v13 )
    {
      v6 += 2;
      v10 = v9 + 137;
      if ( ((v9 + 137) & 0x844) == 0 )
        goto LABEL_7;
      if ( (((_BYTE)v9 - 119) & 4) != 0 )
        v10 = v9 + 134;
      if ( (v10 & 0x40) != 0 )
        v10 -= 40;
      if ( (v10 & 0x800) != 0 )
        v10 -= 896;
      v9 = v10;
    }
  }
  if ( __PAIR64__(v4, v3) > 1 )
    sub_46F088(" %llu", __PAIR64__(v4, v3));
  return sub_418130(10);
}

