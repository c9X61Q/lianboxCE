// busybox.exe @ 0x432840 size=105

BOOL __usercall sub_432840@<eax>(const char *a1@<eax>, _DWORD *a2@<ecx>, char *a3@<ebx>)
{
  int v5; // eax
  int v6; // edx
  size_t v7; // eax
  char *v8; // edx
  char *Str; // [esp+0h] [ebp-10h]

  Str = a3;
  if ( a2[5] != 0 )
  {
    v5 = sub_47168C(a2[6], 1032);
    a2[5] = v5;
    v6 = a2[6];
    a2[6] = v6 + 1;
    *(_DWORD *)(v5 + 4 * v6) = sub_47188C();
    v7 = a2[7] + strlen(a1) + 5;
    a2[7] = v7;
    v8 = nullptr;
    if ( v7 < qword_485BF8 )
      return true;
  }
  else
  {
    v8 = (char *)a1;
  }
  return sub_42692C(a2, v8, (int)Str);
}

