// busybox.exe @ 0x444ea4 size=39

int __usercall sub_444EA4@<eax>(int a1@<ebx>, __int16 a2)
{
  LOWORD(a1) = word_4734BC;
  word_4734BC = a2;
  umask(a2 & 0x80);
  return a1;
}

