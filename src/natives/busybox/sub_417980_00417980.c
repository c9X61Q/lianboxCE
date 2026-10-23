// busybox.exe @ 0x417980 size=139

int __usercall sub_417980@<eax>(FILE *a1@<eax>, _DWORD *a2@<edx>)
{
  int v3; // ebx
  int i; // esi
  int v5; // ecx
  int v6; // ebp
  int v9; // [esp+8h] [ebp-14h]

  v3 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = sub_46F03C(a1);
    if ( v5 == -1 )
      break;
    if ( (_BYTE)i == 0 )
    {
      if ( i == -256 )
        sub_416F78(v5);
      v9 = v5;
      v3 = sub_471600();
      v5 = v9;
    }
    v6 = i + 1;
    *(_BYTE *)(v3 + i) = v5;
    if ( v5 == 0 )
      goto LABEL_12;
    if ( v5 == 10 && a2 != nullptr )
      goto LABEL_13;
  }
  v6 = i;
LABEL_12:
  if ( a2 != nullptr )
LABEL_13:
    *a2 = v6;
  if ( v3 != 0 )
  {
    v3 = sub_471600();
    *(_BYTE *)(v3 + v6) = 0;
  }
  return v3;
}

