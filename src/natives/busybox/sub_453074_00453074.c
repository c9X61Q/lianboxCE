// busybox.exe @ 0x453074 size=39

void __usercall __noreturn sub_453074(char a1@<al>)
{
  int v1; // edx

  v1 = dword_485FF0;
  ++*(_DWORD *)(dword_485FF0 + 56);
  *(_BYTE *)(v1 + 61) = a1;
  longjmp(*(int **)(v1 + 52), 1);
}

