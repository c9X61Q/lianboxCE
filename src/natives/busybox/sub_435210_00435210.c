// busybox.exe @ 0x435210 size=51

int sub_435210()
{
  void *v0; // ebx
  int v2; // [esp+0h] [ebp-8h]

  v0 = dword_48600C;
  v2 = **(_DWORD **)dword_48600C & 1;
  if ( v2 != 0 && *(_DWORD *)(*(_DWORD *)dword_48600C + 20) != 0 )
  {
    sub_45C65C();
    --*(_DWORD *)(*(_DWORD *)v0 + 20);
    return v2;
  }
  else
  {
    sub_418A3C();
    return 0;
  }
}

