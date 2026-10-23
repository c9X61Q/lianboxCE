// busybox.exe @ 0x471cd8 size=39

int __usercall sub_471CD8@<eax>(char *a1@<eax>)
{
  int result; // eax

  result = sub_444ECC(a1);
  if ( result != 0 )
    sub_418014(result, "can't remove file '%s'", a1);
  return result;
}

