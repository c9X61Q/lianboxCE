// busybox.exe @ 0x42f790 size=130

void __cdecl sub_42F790(const char *a1, int a2)
{
  int v2; // ecx
  char *v3; // ebx
  _BYTE v4[16]; // [esp+8h] [ebp-68h] BYREF
  int v5; // [esp+18h] [ebp-58h]

  if ( (sub_45B4BC(v2, a2) & 1) != 0 && sub_443484(a1, v4) == 0 && (v5 & 0xF000) == 0x8000 )
  {
    v3 = (char *)sub_4708BC("%s.rpmorig", a1);
    sub_41EE84(a1, v3, 5);
    sub_45A294();
    free(v3);
  }
}

