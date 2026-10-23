// busybox.exe @ 0x46fc94 size=247

int __usercall sub_46FC94@<eax>(int *a1@<eax>, int a2@<edx>, int **a3@<ecx>, const char *a4)
{
  int v7; // ebp
  int v8; // edx
  char *v10; // [esp+Ch] [ebp-18h]
  _BYTE v11[20]; // [esp+10h] [ebp-14h] BYREF

  sub_470D20("can't stat tar file", a1 + 6);
  v10 = nullptr;
  if ( a4 != nullptr )
    v10 = (char *)sub_442FC0(*a1, a4, (int)"w");
  v7 = 0;
  while ( a3 != nullptr )
  {
    if ( sub_45927C(
           (const CHAR *)a3[1],
           a2,
           (int (__stdcall *)(int))sub_46F9BC,
           (int)sub_46F9BC,
           (int (__stdcall *)(int))a1,
           0,
           v10) == 0 )
      v7 = 1;
    a3 = (int **)*a3;
  }
  memset(&MultiByteStr, 0, 0x400u);
  sub_471D00(1024, &MultiByteStr);
  sub_442EA4(*a1);
  if ( v7 != 0 )
    sub_4181F8("error exit delayed from previous errors");
  if ( a4 != nullptr )
  {
    if ( sub_45C5D4(0, (int)v11, (DWORD)v10) == -1 )
    {
      sub_418224("waitpid", v8);
    }
    else if ( (v11[0] & 0x7F | v11[1]) != 0 )
    {
      return 1;
    }
  }
  return v7;
}

