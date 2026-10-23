// busybox.exe @ 0x44796c size=91

BOOL sub_44796C()
{
  int v0; // esi
  int v1; // edx
  int v2; // edi
  int **v3; // ebx
  int *v4; // edx
  int v5; // ecx
  int v6; // ecx
  int *v7; // edx
  __int64 v8; // rax

  v0 = sub_413FD0();
  v2 = v1;
  v3 = (int **)dword_486000;
  v4 = (int *)(*(_DWORD *)dword_486000 + 4);
  *(_DWORD *)dword_486000 = v4;
  if ( sub_41C3EC(*v4, v5) == 36 )
  {
    v7 = *v3 + 1;
    *v3 = v7;
    sub_41C3EC(*v7, v6);
    v8 = sub_44796C();
    return (v2 | HIDWORD(v8) | v0 | (unsigned int)v8) != 0;
  }
  else
  {
    --*v3;
  }
  return v0;
}

