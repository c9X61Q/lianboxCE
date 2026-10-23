// busybox.exe @ 0x43d4d8 size=150

int __usercall sub_43D4D8@<eax>(int a1@<eax>)
{
  int v2; // esi
  unsigned int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v8; // [esp+0h] [ebp-18h]
  char v9; // [esp+4h] [ebp-14h]

  v2 = sub_4728CC();
  v3 = 0;
  while ( 1 )
  {
    v4 = dword_486010;
    *(_DWORD *)(dword_486010 + 12) = a1 + v3;
    v5 = sub_43598C(v8);
    if ( v5 == 13 )
      break;
    if ( v5 == 8 || v5 == 127 )
    {
      if ( v3 != 0 )
      {
        sub_46F088("\b \b");
        --v3;
      }
    }
    else if ( v5 > 31 && *(_DWORD *)(v4 + 32) + ~a1 > v3 )
    {
      v9 = v5;
      sub_418130(v5);
      *(_BYTE *)(v2 + v3) = v9;
      v2 = sub_471600(v6, v3 + 2);
      ++v3;
    }
  }
  *(_BYTE *)(v2 + v3) = 0;
  *(_DWORD *)(v4 + 12) = -1;
  return v2;
}

