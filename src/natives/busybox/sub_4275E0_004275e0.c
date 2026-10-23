// busybox.exe @ 0x4275e0 size=144

int __usercall sub_4275E0@<eax>(int a1@<eax>, char a2@<dl>, int a3@<ecx>)
{
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // edi
  int i; // edx
  int *j; // eax
  char v10; // cl

  ++*(_DWORD *)(dword_485FF0 + 56);
  if ( (a2 & 1) == 0 )
  {
    v4 = sub_46BCE0(a3);
    if ( v4 != 0 )
      a1 = v4;
  }
  v5 = sub_442E08(a1);
  if ( v5 == 0 )
  {
    sub_45E938();
    v6 = dword_4731A4;
    v7 = dword_473194;
    for ( i = 0; i != 124; i += 4 )
    {
      for ( j = *(int **)(v6 + i); j != nullptr; j = (int *)*j )
      {
        v10 = *((_BYTE *)j + 8);
        if ( v10 == 0 || v10 == 2 && (**(_BYTE **)j[1] & 2) == 0 && v7 > 0 )
          *((_BYTE *)j + 9) = 1;
      }
    }
  }
  sub_43B8DC();
  return v5;
}

