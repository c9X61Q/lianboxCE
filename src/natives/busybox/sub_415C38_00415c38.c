// busybox.exe @ 0x415c38 size=185

int __usercall sub_415C38@<eax>(char *a1@<eax>, __int16 a2@<dx>)
{
  int v4; // ebp
  FILE *v5; // eax
  int v6; // ecx
  const char *v8; // [esp+10h] [ebp-14h]

  v4 = *_errno();
  if ( (a2 & 0x10) == 0
    || (v8 = dword_485AD0, v5 = off_4730E8(2), sub_46EEFC(v5, "%s: overwrite '%s'? ", v8, a1), (v6 = sub_416DD0()) != 0) )
  {
    if ( sub_444ECC(a1) < 0 )
    {
      *_errno() = v4;
      sub_417FE4("can't create '%s'", a1);
      return -1;
    }
    else
    {
      v6 = 1;
      if ( (a2 & 0x9000) == 0x9000 )
      {
        sub_46F088("removed '%s'\n", a1);
        return 1;
      }
    }
  }
  return v6;
}

