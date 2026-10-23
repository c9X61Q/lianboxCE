// busybox.exe @ 0x43b1ac size=85

int __fastcall sub_43B1AC(int a1, int a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // esi
  int v7; // [esp+0h] [ebp-Ch]

  v7 = a2;
  v2 = dword_48600C;
  v3 = *((_DWORD *)dword_48600C + 5);
  if ( v3 < *((_DWORD *)dword_48600C + 6) )
  {
    *((_DWORD *)dword_48600C + 5) = v3 + 1;
    v4 = v2[2] + 1;
    v2[2] = v4;
    v5 = v4 - v2[1];
    sub_46F088("\x1B[1C");
    if ( v5 >= 0 )
    {
      sub_46F088("\x1B[1B");
      sub_418130(13);
      ++v2[3];
      v2[2] = 0;
    }
  }
  return v7;
}

