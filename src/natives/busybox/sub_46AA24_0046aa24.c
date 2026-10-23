// busybox.exe @ 0x46aa24 size=50

void *sub_46AA24()
{
  char *v0; // ebx
  char *v1; // eax
  void *Block; // [esp+0h] [ebp-8h]
  void *Blocka; // [esp+0h] [ebp-8h]

  v0 = (char *)sub_47188C();
  v1 = sub_403200(v0);
  if ( sub_417C00(v1, -1, 4) != 0 )
    sub_470D44(Block);
  free(v0);
  return Blocka;
}

