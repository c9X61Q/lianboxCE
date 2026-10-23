// busybox.exe @ 0x418398 size=101

int __usercall sub_418398@<eax>(int Radix@<ecx>, const char *a2@<eax>, char **a3@<edx>)
{
  char **EndPtr; // ebx
  char v6; // al
  char *v8; // [esp+Ch] [ebp-10h] BYREF

  EndPtr = &v8;
  if ( a3 != nullptr )
    EndPtr = a3;
  *EndPtr = (char *)a2;
  v6 = *a2;
  if ( (unsigned __int8)(*a2 - 48) <= 9u || (unsigned __int8)((v6 | 0x20) - 97) <= 0x19u )
  {
    *_errno() = 0;
    strtoul(a2, EndPtr, Radix);
    return sub_437504(EndPtr, 0);
  }
  else
  {
    *_errno() = 34;
    return -1;
  }
}

