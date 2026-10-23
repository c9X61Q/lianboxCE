// busybox.exe @ 0x4685ac size=55

BOOL sub_4685AC()
{
  char *Block; // esi
  char *v1; // eax
  int v2; // ebx

  Block = (char *)sub_47188C();
  v1 = sub_403200(Block);
  v2 = sub_439918("/bin", v1);
  free(Block);
  return v2 >= 0;
}

