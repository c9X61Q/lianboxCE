// busybox.exe @ 0x43118c size=270

int __usercall sub_43118C@<eax>(int a1@<eax>, int a2@<edx>, const char *a3@<ecx>, double a4, int a5)
{
  const char *v9; // edx
  unsigned __int8 v10; // al
  int Val; // [esp+18h] [ebp-18h]

  if ( a5 != 0 && (double)(__int64)a4 == a4 )
    return sub_461174(a1, a2, "%lld", (__int64)a4);
  v9 = a3;
  do
  {
    v10 = *v9;
    if ( *v9 == 0 )
      break;
    ++v9;
  }
  while ( *v9 != 0 );
  Val = v10;
  if ( strchr("diouxX", v10) != nullptr )
    return sub_461174(a1, a2, a3, (int)a4);
  if ( strchr("eEfgG", Val) == nullptr )
    sub_4645B8();
  return sub_461174(a1, a2, a3, a4);
}

