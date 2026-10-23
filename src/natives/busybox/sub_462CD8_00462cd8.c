// busybox.exe @ 0x462cd8 size=188

int __userpurge sub_462CD8@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, const void *a4, unsigned int a5)
{
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  void *v9; // eax
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  void *Block; // [esp+0h] [ebp-18h]

  v7 = (_DWORD *)sub_4728CC(a3);
  v8 = v7;
  *a2 = v7;
  v7[17] = a1;
  v7[2] = a3;
  if ( a3 == -1 )
  {
    v7[6] = a4;
  }
  else
  {
    v9 = v7 + 10272;
    v8[6] = v9;
    qmemcpy(v9, a4, a5);
  }
  v8[4] = a5;
  sub_420088((int)(v8 + 18), 1);
  v10 = sub_433458((int)v8, 16);
  if ( (unsigned int)(v10 - 26673) > 8 )
    return -2;
  v11 = 100000 * v10 + 1627767296;
  v8[16] = v11;
  v12 = sub_441F94(4 * v11);
  if ( v12 == nullptr )
  {
    free(v8);
    sub_470D44(Block);
  }
  v8[15] = v12;
  return 0;
}

