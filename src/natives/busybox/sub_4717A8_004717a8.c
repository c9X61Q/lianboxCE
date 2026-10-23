// busybox.exe @ 0x4717a8 size=183

int __usercall sub_4717A8@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  char v12[20]; // [esp+18h] [ebp-14h] BYREF

  v5 = a3;
  if ( a2 == 0 )
  {
    v6 = sub_4447A8(23, a3, 0);
    v5 = a3;
    if ( v6 >= 0 )
    {
      *(_DWORD *)v12 = 0;
      sub_444740(v6, 41, 27, v12, 4);
      v8 = 28;
      LOWORD(a2) = 23;
      goto LABEL_7;
    }
    a2 = 2;
  }
  v6 = sub_471780(a2, v5, 0);
  v8 = 8;
  if ( a2 != 1 )
    v8 = a2 == 23 ? 28 : 16;
LABEL_7:
  v9 = sub_4728CC(v7);
  *(_DWORD *)v9 = v8;
  *(_WORD *)(v9 + 4) = a2;
  *a1 = v9;
  return v6;
}

