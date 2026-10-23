// busybox.exe @ 0x41e9a4 size=107

int __usercall sub_41E9A4@<eax>(const char *a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  const char *v4; // ebx
  int v5; // eax
  int v6; // ecx
  const char *v7; // edx

  v4 = (const char *)&unk_47BE00;
  if ( a1 != nullptr )
    v4 = a1;
  v5 = sub_43D3D4(a3, 47);
  if ( v5 == 0 )
    v5 = sub_43D3D4(v6, 92);
  while ( *a2 == 92 || *a2 == 47 )
    ++a2;
  v7 = "/";
  if ( v5 != 0 )
    v7 = (const char *)&unk_47BE00;
  return sub_4708BC("%s%s%s", v4, v7, a2);
}

