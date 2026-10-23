// busybox.exe @ 0x4525e0 size=74

int __usercall sub_4525E0@<eax>(int *a1@<eax>, int *a2@<edx>, int a3@<ecx>)
{
  int v5; // edi
  int *v7; // edx

  v5 = a1[2];
  if ( v5 == a2[2] )
  {
    if ( sub_451098(a1, a2) == -1 )
    {
      *(_DWORD *)(a3 + 8) = v5 == 0;
      v7 = a1;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = v5;
      v7 = a2;
    }
    return sub_45C3C0(a3, v7);
  }
  else
  {
    *(_DWORD *)(a3 + 8) = v5;
    return sub_45C2B0();
  }
}

