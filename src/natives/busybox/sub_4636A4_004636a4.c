// busybox.exe @ 0x4636a4 size=121

int __usercall sub_4636A4@<eax>(int a1@<eax>, const char *Str@<edx>, int a3@<ecx>)
{
  const char *v4; // ebx
  size_t v5; // ebp
  int v6; // ecx
  int v7; // edx
  unsigned __int8 v8; // al
  int v9; // edx
  int v12; // [esp+10h] [ebp-14h]

  v4 = Str;
  v5 = strlen(Str);
  sub_468370(a3, v5);
  v12 = sub_465874(v6, v5);
  qmemcpy((void *)(a1 + v12), v4, v5);
  v7 = 0;
  while ( *v4 != 0 )
  {
    if ( *v4 == 10 )
      ++v7;
    ++v4;
  }
  v8 = sub_46EAD0();
  sub_46304C("Put %d lines (%d chars) from [%c]", v9, v5, v8);
  return v12;
}

