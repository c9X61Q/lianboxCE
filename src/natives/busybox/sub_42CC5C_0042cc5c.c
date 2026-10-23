// busybox.exe @ 0x42cc5c size=88

int __usercall sub_42CC5C@<eax>(int (****a1)(void)@<eax>, int a2@<ecx>)
{
  int v4; // ebx
  int (***v5)(void); // esi
  int (**v7)(void); // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]

  v4 = 0;
LABEL_2:
  v5 = *a1;
  if ( *a1 != nullptr )
  {
    v4 &= ~1u;
    while ( *v5 != nullptr )
    {
      v8 = a2;
      v7 = *v5;
      v4 |= (**v5)() ^ 1;
      a2 = v8;
      if ( *((_BYTE *)v7 + 4) != 0 )
        v4 ^= 1u;
      ++v5;
      if ( (v4 & 1) != 0 )
      {
        ++a1;
        goto LABEL_2;
      }
    }
  }
  return v4 ^ 1;
}

