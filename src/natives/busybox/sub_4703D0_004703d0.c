// busybox.exe @ 0x4703d0 size=92

char *__cdecl sub_4703D0(char *a1)
{
  void *v1; // ebx
  int v2; // edx
  void *Block; // [esp+0h] [ebp-10h]

  if ( sub_45B414(a1) != 0 )
    return a1;
  v1 = (void *)sub_471350(Block);
  if ( v1 == nullptr )
    sub_418014(0, "can't open '%s'", a1);
  v2 = sub_4356C8();
  if ( v2 != 0 && sub_43C5B0((int)v1, v2) != 0 )
  {
    free(v1);
    return a1;
  }
  return (char *)v1;
}

