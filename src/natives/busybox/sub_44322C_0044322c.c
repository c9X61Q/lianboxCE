// busybox.exe @ 0x44322c size=52

INT __cdecl sub_44322C(PCSTR pNodeName, PCSTR pServiceName, ADDRINFOA *pHints, PADDRINFOA *ppResult)
{
  sub_43AD2C();
  return getaddrinfo(pNodeName, pServiceName, pHints, ppResult);
}

