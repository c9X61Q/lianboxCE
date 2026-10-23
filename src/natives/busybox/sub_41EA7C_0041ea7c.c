// busybox.exe @ 0x41ea7c size=27

int *__fastcall sub_41EA7C(int a1, int (*a2)(void))
{
  int v2; // ebx
  int *v3; // eax

  v2 = a2();
  if ( v2 != 0 )
  {
    v3 = (int *)sub_4728CC();
    *v3 = v2;
    return v3;
  }
  return (int *)v2;
}

