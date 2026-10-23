// busybox.exe @ 0x468b54 size=75

char __usercall sub_468B54@<al>(int a1@<eax>)
{
  char result; // al
  _BYTE v3[11]; // [esp+1h] [ebp-Bh] BYREF

  sub_4715C8(7, v3);
  if ( sub_43C594((int)v3, (int)"!<arch>") == 0 )
    sub_418210("invalid ar magic");
  *(_QWORD *)(a1 + 48) += 7LL;
  do
    result = sub_4338D8(a1);
  while ( result == 0 );
  return result;
}

