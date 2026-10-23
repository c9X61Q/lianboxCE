// busybox.exe @ 0x4611f8 size=182

int __usercall sub_4611F8@<eax>(const SOCKADDR *pSockaddr@<eax>, int a2@<edx>)
{
  char v3; // di
  CHAR pServiceBuffer[16]; // [esp+1Ch] [ebp+0h] BYREF
  CHAR Str[140]; // [esp+2Ch] [ebp+10h] BYREF

  v3 = a2;
  if ( getnameinfo(pSockaddr, pSockaddr->sa_family != 2 ? 28 : 16, Str, 0x80u, pServiceBuffer, 0x10u, a2 | 8) != 0 )
    return 0;
  if ( (v3 & 8) != 0 )
    return sub_47188C();
  if ( pSockaddr->sa_family == 23 && strchr(Str, 58) != nullptr )
    return sub_4708BC("[%s]:%s", Str, pServiceBuffer);
  return sub_4708BC("%s:%s", Str, pServiceBuffer);
}

