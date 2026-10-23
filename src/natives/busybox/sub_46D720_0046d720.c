// busybox.exe @ 0x46d720 size=67

unsigned int __usercall sub_46D720@<eax>(unsigned int result@<eax>, int a2@<edx>, char a3@<cl>)
{
  if ( result == 9 )
  {
    if ( (a3 & 2) == 0 )
      goto LABEL_13;
    goto LABEL_9;
  }
  if ( result != 10 )
  {
    if ( result > 0x7F )
    {
      result -= 128;
      *(_WORD *)a2 = 11597;
      a2 += 2;
    }
LABEL_9:
    if ( result <= 0x1F || result == 127 )
    {
      *(_BYTE *)a2 = 94;
      result ^= 0x40u;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)a2 = 36;
LABEL_12:
    ++a2;
  }
LABEL_13:
  *(_BYTE *)a2 = result;
  *(_BYTE *)(a2 + 1) = 0;
  return result;
}

