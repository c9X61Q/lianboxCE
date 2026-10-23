// busybox.exe @ 0x4529c4 size=98

int sub_4529C4()
{
  _DWORD *v0; // ebx
  int v1; // edx
  int v2; // eax
  int v3; // esi
  int result; // eax
  int v5; // eax

  v0 = dword_48600C;
  v1 = *((_DWORD *)dword_48600C + 5);
  v2 = *(unsigned __int8 *)(*((_DWORD *)dword_48600C + 8) + v1);
  if ( (_BYTE)v2 != 0 )
  {
    *((_DWORD *)dword_48600C + 5) = v1 + 1;
    ++v0[2];
  }
  else
  {
    v2 = 32;
  }
  v3 = v0[2] - v0[1];
  result = sub_418130(v2);
  if ( v3 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v0[8] + v0[5]);
    if ( (_BYTE)v5 == 0 )
      v5 = 32;
    sub_418130(v5);
    result = sub_418130(8);
    ++v0[3];
    v0[2] = 0;
  }
  return result;
}

