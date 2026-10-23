// busybox.exe @ 0x43684c size=112

int __usercall sub_43684C@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // eax

  v3 = (_DWORD *)dword_486010;
  if ( *(_BYTE *)(dword_486010 + 252) != 0 )
  {
    v4 = result;
    if ( result < 0 )
      v4 = 0;
    if ( v4 >= *(_DWORD *)(dword_486010 + 216) && *(int *)(dword_486010 + 36) > 0 )
    {
      *(_DWORD *)(dword_486010 + 212) = v4;
      sub_457958();
    }
    v5 = v3[54];
    if ( v5 != 0 )
    {
      if ( v4 >= v5 )
        v4 = v5 - 1;
      if ( v4 < 0 )
        v4 = 0;
      v3[52] = v4;
      return sub_419230(*(_DWORD *)(v3[51] + 4 * v4), 0);
    }
    else
    {
      return sub_44F07C(a3, a2);
    }
  }
  return result;
}

