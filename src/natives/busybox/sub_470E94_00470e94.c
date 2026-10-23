// busybox.exe @ 0x470e94 size=52

int __usercall sub_470E94@<eax>(FILE *a1@<eax>, int a2@<ecx>)
{
  int result; // eax
  int v3; // edx
  _BYTE *v4; // edx
  int v5; // edx
  _BYTE *v6; // edx
  int v7; // [esp+0h] [ebp-4h] BYREF

  v7 = a2;
  result = sub_417980(a1, &v7);
  v3 = v7;
  if ( v7 != 0 )
  {
    --v7;
    v4 = (_BYTE *)(result + v3 - 1);
    if ( *v4 == 10 )
      *v4 = 0;
  }
  v5 = v7;
  if ( v7 != 0 )
  {
    --v7;
    v6 = (_BYTE *)(result + v5 - 1);
    if ( *v6 == 13 )
      *v6 = 0;
  }
  return result;
}

