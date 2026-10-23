// busybox.exe @ 0x41dde0 size=84

int sub_41DDE0()
{
  int v0; // edx
  int v1; // ecx
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  while ( 1 )
  {
    v5 = v0;
    v4 = v1;
    v2 = sub_446AFC();
    v1 = v4;
    v0 = v5;
    if ( v2 == 0 )
      break;
    if ( v2 == 86 )
    {
      v1 = 2;
    }
    else if ( v2 != 118 )
    {
      v0 = 4709949;
    }
  }
  if ( *(_DWORD *)dword_47310C != 0 )
    return sub_4230C8(v4, v5);
  else
    return 0;
}

