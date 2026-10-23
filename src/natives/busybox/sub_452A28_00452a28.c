// busybox.exe @ 0x452a28 size=79

int __usercall sub_452A28@<eax>(char a1@<al>)
{
  FILE *v2; // eax
  _DWORD *v3; // ebx
  char *Buffer; // edx
  int result; // eax
  int v6; // edx

  v2 = off_4730E8(1);
  v3 = dword_48600C;
  if ( a1 != 0 )
    Buffer = *((char **)dword_48600C + 9);
  else
    Buffer = *((char **)dword_48600C + 10);
  sub_46EF20(Buffer, v2);
  v3[5] = 0;
  result = v3[4] / v3[1];
  v6 = v3[4] % v3[1];
  v3[3] = result;
  v3[2] = v6;
  return result;
}

