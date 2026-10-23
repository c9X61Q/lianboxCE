// busybox.exe @ 0x42f814 size=54

int __fastcall sub_42F814(int a1, int a2, int a3, int a4)
{
  char *v4; // eax
  int v5; // ecx
  char *v7; // [esp+0h] [ebp-8h]

  v4 = (char *)sub_45B550(a1, a4, a2);
  if ( sub_4362FC(v4) == 0 )
    sub_4365A0();
  sub_45B550(v5, a4, v7);
  return sub_4365A0();
}

