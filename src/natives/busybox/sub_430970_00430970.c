// busybox.exe @ 0x430970 size=126

char *__usercall sub_430970@<eax>(const char *a1@<eax>)
{
  int v2; // ebx
  char *v3; // esi
  char v5[73]; // [esp+13h] [ebp-49h] BYREF

  v2 = 0;
  v3 = v5;
  while ( strncmp(a1, &aUser_2[v2], 6u) != 0 )
  {
    v3 += sub_4626B8(v3, "%.6s,", &aUser_2[v2]);
    v2 += 20;
    if ( v2 == 160 )
    {
      *(v3 - 1) = 0;
      sub_41784C("bad -o argument '%s', supported arguments: %s", a1, v5);
    }
  }
  return (char *)&unk_4807E0 + v2;
}

