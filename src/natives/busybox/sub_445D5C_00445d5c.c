// busybox.exe @ 0x445d5c size=143

double __usercall sub_445D5C@<st0>(char **a1@<eax>)
{
  char *v2; // esi
  char v3; // al
  char v5; // [esp+13h] [ebp-11h]
  unsigned __int64 v6; // [esp+14h] [ebp-10h]

  v2 = *a1;
  if ( **a1 == 48
    && (((unsigned __int8)v2[1] | 0x20) == 0x78 || (unsigned __int8)(v2[1] - 48) <= 9u)
    && ((v5 = v2[1] | 0x20, v6 = sub_4044E0(v2, a1, 0), v5 == 120)
     || (unsigned __int8)((v3 = **a1) - 48) > 9u && v3 != 46) )
  {
    return (double)v6;
  }
  else
  {
    return sub_402B30((int)v2, (int)a1);
  }
}

