// busybox.exe @ 0x44d840 size=99

int __userpurge sub_44D840@<eax>(int *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, void *a4, void **a5)
{
  int v7; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebx

  v7 = *a1;
  *a1 = v7 - 1;
  v8 = 24 * (v7 - 1);
  v9 = v8 + a1[2];
  *a2 = *(_DWORD *)v9;
  qmemcpy(a4, *(const void **)(v9 + 8), 8 * a3);
  free(a5[2]);
  free(*(void **)(a1[2] + v8 + 8));
  v10 = a1[2] + v8;
  qmemcpy(a5, (const void *)(v10 + 12), 0xCu);
  return *(_DWORD *)(v10 + 4);
}

