// busybox.exe @ 0x41bf4c size=180

int __userpurge sub_41BF4C@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, int a3, int a4)
{
  int i; // edx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // edx
  int v10; // [esp+Ch] [ebp-14h]

  for ( i = a2; ; i = **(_DWORD **)(a1[5] + 12 * v10 + 8) )
  {
    v10 = i;
    if ( sub_4541D4(a2, i) != 0 )
      break;
    v6 = *a1 + 8 * v10;
    v7 = *(unsigned __int8 *)(v6 + 4);
    if ( v7 == a4 && *(_DWORD *)v6 == a3 )
    {
      if ( a4 == 9 && sub_4543C4(v7, v10) == -1 )
        return 12;
      return 0;
    }
    if ( sub_4543C4(v7, v10) == -1 )
      return 12;
    v9 = *(_DWORD *)(12 * v10 + a1[5] + 4);
    if ( v9 == 0 )
      return 0;
    if ( v9 == 2 )
    {
      result = sub_41BF4C(a3, a4);
      if ( result != 0 )
        return result;
    }
  }
  return 0;
}

