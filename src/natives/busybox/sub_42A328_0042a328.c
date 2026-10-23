// busybox.exe @ 0x42a328 size=119

int __thiscall sub_42A328(void *this)
{
  int i; // ebx
  int v2; // ecx
  int v3; // ebp
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v8; // [esp+0h] [ebp-14h]

  for ( i = sub_42A3A0(this); ; *(_DWORD *)(i + 12) = v6 )
  {
    v2 = sub_446A68();
    if ( v2 == 0 )
    {
      v2 = sub_446A68();
      if ( v2 == 0 )
        break;
    }
    MultiByteStr += 4;
    v3 = sub_42A3A0(v2);
    v4 = sub_415348(i, v3, v8);
    v6 = v5;
    sub_431F68();
    sub_431F68();
    i = sub_4728CC();
    *(_DWORD *)(i + 8) = v4;
  }
  return i;
}

