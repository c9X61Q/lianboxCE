// busybox.exe @ 0x418400 size=105

int __usercall sub_418400@<eax>(char *a1@<eax>, char **a2@<edx>, signed int a3@<ecx>)
{
  char **v5; // ebx
  char v6; // al
  int v8; // edx
  char v9; // [esp+Ch] [ebp-10h] BYREF

  v5 = (char **)&v9;
  if ( a2 != nullptr )
    v5 = a2;
  *v5 = a1;
  v6 = *a1;
  if ( (unsigned __int8)(*a1 - 48) <= 9u || (unsigned __int8)((v6 | 0x20) - 97) <= 0x19u )
  {
    *_errno() = 0;
    v8 = sub_4044E0(a1, v5, a3) >> 32;
    return sub_437504(v5, v8);
  }
  else
  {
    *_errno() = 34;
    return -1;
  }
}

