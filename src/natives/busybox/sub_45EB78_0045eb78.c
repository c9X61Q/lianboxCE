// busybox.exe @ 0x45eb78 size=180

int __usercall sub_45EB78@<eax>(char *a1@<eax>, const char *a2@<edx>)
{
  char *v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  size_t v8; // ebp
  char *v9; // eax
  char *v10; // edi
  int v12; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  unsigned int v14; // [esp+10h] [ebp-14h]

  v4 = sub_429934(a1);
  v6 = sub_4635B0(v5, 61);
  v7 = v6 - (_DWORD)a1;
  if ( v4 != (char *)v6 || v7 == 0 )
    sub_415B40(v7, "%.*s: bad variable name", v6 - (_DWORD)a1, a1);
  if ( a2 != nullptr )
  {
    v13 = v6 - (_DWORD)a1;
    v8 = strlen(a2);
    v7 = v13;
  }
  else
  {
    v8 = 0;
  }
  ++*(_DWORD *)(dword_485FF0 + 56);
  v14 = v7;
  v9 = (char *)sub_4728CC(v7);
  qmemcpy(v9, a1, v14);
  v10 = &v9[v14];
  if ( a2 != nullptr )
  {
    *v10 = 61;
    qmemcpy(v10 + 1, a2, v8);
  }
  v12 = sub_45ECA8();
  sub_43B8DC();
  return v12;
}

