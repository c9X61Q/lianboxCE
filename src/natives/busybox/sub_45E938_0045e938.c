// busybox.exe @ 0x45e938 size=179

int __usercall sub_45E938@<eax>(char *a1@<eax>, int a2@<edx>)
{
  _DWORD *v3; // esi
  char *v4; // ebx
  char *v5; // eax
  char *v6; // ebp
  char *v7; // edx
  char *v9; // [esp+8h] [ebp-14h]

  v3 = (_DWORD *)dword_485FF0;
  v4 = *(char **)(dword_485FF0 + 36);
  if ( a2 != 0 )
    sub_45EB78(1, *(_DWORD *)(dword_485FF0 + 36));
  ++v3[14];
  v5 = (char *)v3[10];
  v6 = (char *)v3 + 62;
  if ( v5 != (char *)v3 + 62 )
  {
    if ( v5 != v4 )
      sub_4631A8();
    v3[10] = v6;
  }
  if ( a1 != nullptr && v4 != a1 )
  {
    v7 = (char *)sub_47188C();
LABEL_14:
    if ( v7 != v4 )
    {
      if ( v6 != v4 )
      {
        v9 = v7;
        sub_4631A8();
        v7 = v9;
      }
      v4 = v7;
    }
    goto LABEL_18;
  }
  v7 = sub_443260(nullptr, 0);
  if ( v7 == nullptr )
    v7 = (char *)v3 + 62;
  v3[10] = v7;
  if ( a1 == nullptr )
    goto LABEL_14;
LABEL_18:
  v3[9] = v4;
  sub_43B8DC();
  return sub_45EB78(1, v4);
}

