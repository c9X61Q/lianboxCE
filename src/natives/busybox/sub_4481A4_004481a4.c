// busybox.exe @ 0x4481a4 size=179

int __usercall sub_4481A4@<eax>(int a1@<eax>)
{
  const char **v2; // esi
  int v3; // edx
  int v4; // eax
  int result; // eax

  v2 = *(const char ***)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
  {
    sub_471D00(1, "\n");
    ++*(_QWORD *)(a1 + 48);
  }
  if ( (int)&v2[3][v2[2] == (const char *)-1] > 0 )
    sub_41784C("'%s' is bigger than ar can handle", *v2);
  v3 = (int)v2[5];
  if ( v3 > 99999 )
    v3 = 0;
  v4 = (int)v2[4];
  if ( v4 > 99999 )
    v4 = 0;
  result = sub_428FC4(
             *(_DWORD *)(a1 + 4),
             (int)"%-16.16s%-12lu%-6u%-6u%-8o%-10llu`\n",
             *v2,
             v2[7],
             v4,
             v3,
             *((unsigned __int16 *)v2 + 12),
             *((_QWORD *)v2 + 1));
  *(_QWORD *)(a1 + 48) += 60LL;
  return result;
}

