// busybox.exe @ 0x437504 size=81

int __usercall sub_437504@<eax>(int a1@<eax>, char **a2@<ecx>)
{
  char v3; // dl

  v3 = **a2;
  if ( v3 != 0 )
  {
    if ( (unsigned __int8)(v3 - 48) <= 9u || (unsigned __int8)((v3 | 0x20) - 97) <= 0x19u || *_errno() != 0 )
    {
      *_errno() = 34;
      return -1;
    }
    else
    {
      *_errno() = 22;
    }
  }
  return a1;
}

