// busybox.exe @ 0x4604e0 size=169

int __usercall sub_4604E0@<eax>(const char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  const char **Base; // ebx
  const char *v5; // ebp
  char *v6; // eax
  char *v7; // esi
  const char *v8; // eax
  unsigned int v10[5]; // [esp+18h] [ebp-14h] BYREF

  Base = (const char **)sub_43E27C(a2, a3, nullptr, v10);
  qsort(Base, (signed int)(v10[0] - (_DWORD)Base) >> 2, 4u, sub_46D764);
  v5 = a1;
  if ( *a1 != 0 )
    v5 = " ";
  while ( v10[0] > (unsigned int)Base )
  {
    v6 = sub_429934((char *)*Base);
    v7 = v6;
    if ( *v6 == 61 )
    {
      v7 = v6 + 1;
      v8 = (const char *)sub_460B38();
    }
    else
    {
      v8 = (const char *)(dword_485FF0 + 62);
    }
    sub_4480E8("%s%s%.*s%s\n", a1, v5, v7 - *Base, *Base, v8);
    ++Base;
  }
  return 0;
}

