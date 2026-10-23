// busybox.exe @ 0x41f6d0 size=81

int __usercall sub_41F6D0@<eax>(int **a1@<eax>, int a2@<ecx>)
{
  int *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF

  v7 = a2;
  v3 = &v7;
  while ( a1 != nullptr )
  {
    v4 = dword_47333C;
    *v3 = dword_47333C;
    dword_47333C = v4 + 8;
    *(_DWORD *)(v4 + 4) = sub_41F4E8((char *)a1[1]);
    v5 = dword_473338;
    if ( dword_473338 != 0 )
    {
      *(_BYTE *)(*v3 + dword_473338 + 4) = 1;
      *(_BYTE *)(*v3 + v5) = 1;
    }
    a1 = (int **)*a1;
    v3 = (int *)*v3;
  }
  *v3 = 0;
  return v7;
}

