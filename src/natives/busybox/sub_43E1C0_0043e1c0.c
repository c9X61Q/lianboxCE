// busybox.exe @ 0x43e1c0 size=186

int __usercall sub_43E1C0@<eax>(const char *a1@<eax>)
{
  int v2; // edx
  FILE *(__cdecl *v4)(int); // esi
  int v5; // ebx
  FILE *v6; // eax
  int v7; // edi
  FILE *v8; // eax
  int v9[4]; // [esp+Ch] [ebp-10h] BYREF

  if ( sub_42F1FC(a1, v9, 0) != 0 )
    return sub_417FE4(v2, "reading %s", a1);
  v4 = off_4730E8;
  if ( (dword_486008 & 8) != 0 )
  {
    sub_46F088("%-28s ", a1);
    v5 = v9[0];
    v6 = v4(1);
    sub_44E46C(v6, v5, 1);
    return sub_418130(10);
  }
  else
  {
    v7 = v9[0];
    v8 = off_4730E8(1);
    sub_44E46C(v8, v7, 0);
    return sub_46F088(" %s\n", a1);
  }
}

