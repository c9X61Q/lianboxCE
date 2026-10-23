// busybox.exe @ 0x4522dc size=114

int __userpurge sub_4522DC@<eax>(__int128 *a1@<eax>, _DWORD *a2@<edx>, int *a3@<ecx>, __int128 *a4)
{
  int v7; // edx
  int v8; // eax
  void *v9; // edx
  int v10; // ebx
  int v12[7]; // [esp+8h] [ebp-1Ch] BYREF

  v7 = *(_DWORD *)a1 + *a2 + 1;
  if ( a1 == a4 )
  {
    v8 = *((_DWORD *)a1 + 1);
    if ( v7 < v8 )
      v7 = v8;
  }
  sub_451864(v12, v7, (int)a3);
  v10 = sub_452054(a1, a2, v12, nullptr, 0);
  if ( v10 == 0 )
    v10 = sub_4518E8(v12, a3, a4);
  sub_45102C(v12, v9);
  return v10;
}

