// busybox.exe @ 0x4453b0 size=205

int __cdecl sub_4453B0(int a1, int a2)
{
  char *v2; // eax
  int v3; // ecx
  char v4; // si
  char *v5; // ebx
  bool v6; // zf
  char *v8; // [esp+Ch] [ebp-Ch] BYREF

  v2 = sub_44328C("TMPDIR");
  v8 = v2;
  if ( v2 == nullptr || *v2 == 0 )
    v8 = "/tmp";
  v4 = sub_435D44(a2, (int)"^dqtp:u", &v8);
  v5 = *(char **)(a2 + 4 * dword_473090);
  if ( v5 == nullptr )
  {
    v5 = (char *)sub_47188C();
    v4 |= 4u;
  }
  if ( (v4 & 0xC) != 0 )
    v5 = (char *)sub_41E9A4(v8, v5, v3);
  if ( (v4 & 0x10) != 0 )
  {
    v5 = sub_4434EC(v5);
    v6 = *v5 == 0;
    goto LABEL_12;
  }
  if ( (v4 & 1) != 0 )
  {
    v6 = sub_445220(v5) == nullptr;
LABEL_12:
    if ( !v6 )
      goto LABEL_15;
    goto LABEL_16;
  }
  if ( sub_44537C(v5) >= 0 )
  {
LABEL_15:
    sub_46F108(v5);
    return 0;
  }
LABEL_16:
  if ( (v4 & 2) == 0 )
    sub_418048();
  return 1;
}

