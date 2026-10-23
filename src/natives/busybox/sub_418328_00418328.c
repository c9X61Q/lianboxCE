// busybox.exe @ 0x418328 size=112

int __usercall sub_418328@<eax>(char *a1@<eax>, char **a2@<edx>, signed int a3@<ecx>)
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
  if ( *a1 == 45 )
    v6 = a1[1];
  if ( (unsigned __int8)(v6 - 48) <= 9u || (unsigned __int8)((v6 | 0x20) - 97) <= 0x19u )
  {
    *_errno() = 0;
    sub_4041F0(a1, v5, a3);
    return sub_437504(v5, v8);
  }
  else
  {
    *_errno() = 34;
    return -1;
  }
}

