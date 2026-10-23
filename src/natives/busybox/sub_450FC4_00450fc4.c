// busybox.exe @ 0x450fc4 size=72

int __usercall sub_450FC4@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v5; // edi
  int v6; // ebp
  int v8; // edx

  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a2 + 8);
  if ( v5 == v6 )
  {
    *(_DWORD *)(a3 + 8) = v5;
    return sub_45C2B0();
  }
  else
  {
    if ( sub_451098() == -1 )
    {
      *(_DWORD *)(a3 + 8) = v6;
      v8 = a1;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = v5;
      v8 = a2;
    }
    return sub_45C3C0(a3, v8);
  }
}

