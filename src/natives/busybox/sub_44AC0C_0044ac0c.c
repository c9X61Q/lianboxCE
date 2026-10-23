// busybox.exe @ 0x44ac0c size=96

_BYTE *__usercall sub_44AC0C@<eax>(int a1@<eax>, int *a2@<edx>)
{
  int v4; // esi
  int v5; // ecx
  _BYTE *v6; // eax
  _BYTE *v7; // ebx
  int v8; // eax
  _BYTE *v10; // [esp+0h] [ebp-14h]

  v4 = sub_460FB8();
  v6 = (_BYTE *)sub_4635B0(v5, 10);
  if ( (_BYTE *)v4 == v6 )
    sub_418210("empty filename");
  v7 = v6;
  if ( *v6 != 0 )
  {
    v10 = &v6[-v4];
    v8 = sub_4718A8(&v6[-v4], &v6[-v4 + 1]);
    *a2 = v8;
    v10[v8] = 92;
  }
  else
  {
    *a2 = sub_47188C();
  }
  return &v7[-a1];
}

