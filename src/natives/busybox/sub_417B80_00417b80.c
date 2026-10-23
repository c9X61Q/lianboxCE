// busybox.exe @ 0x417b80 size=127

int __usercall sub_417B80@<eax>(const char *a1@<eax>, const char *a2@<edx>, unsigned __int16 a3@<cx>)
{
  unsigned int v5; // ebp
  struct servent *v6; // eax
  int v8; // [esp+8h] [ebp-18h]

  if ( a1 != nullptr )
  {
    v8 = *_errno();
    v5 = sub_418398(10);
    if ( *_errno() != 0 || v5 > 0xFFFF )
    {
      v6 = getservbyname(a1, a2);
      LOWORD(v5) = a3;
      if ( v6 != nullptr )
        LOWORD(v5) = ntohs(v6->s_port);
    }
    *_errno() = v8;
    return (unsigned __int16)v5;
  }
  return a3;
}

