// busybox.exe @ 0x442fc0 size=153

int __cdecl sub_442FC0(int a1, const char *a2, int a3)
{
  const char *v3; // eax
  void *v4; // eax
  void *Block; // ebx
  _DWORD v7[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( sub_430048(a2) < 0 )
  {
    v4 = (void *)sub_4708BC("%s -cf -", a2);
  }
  else
  {
    v3 = sub_433530();
    v4 = (void *)sub_4708BC("%s --busybox %s -cf -", v3, a2);
  }
  Block = v4;
  if ( sub_44374C(v4, a3, a1, v7) == -1 )
    sub_418014(-1, "can't execute '%s'", a2);
  free(Block);
  sub_471530();
  return v7[0];
}

