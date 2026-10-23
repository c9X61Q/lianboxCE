// busybox.exe @ 0x418164 size=147

void __noreturn sub_418164()
{
  _BYTE *v0; // ebx
  int v1; // eax
  int v2; // [esp+0h] [ebp-4h]

  v0 = (_BYTE *)sub_468BA0(33915, 12317);
  v1 = sub_430048();
  if ( v1 >= 0 && v0 != nullptr )
  {
    while ( v1 != 0 )
    {
      do
        ++v0;
      while ( *(v0 - 1) != 0 );
      --v1;
    }
    sub_4326F8();
    sub_4326F8();
    if ( *v0 != 8 )
    {
      sub_4326F8();
      sub_4326F8();
      if ( *v0 != 0 )
      {
        if ( *v0 != 10 )
          sub_4326F8();
        sub_4326F8();
      }
    }
    sub_4326F8();
  }
  sub_470D44(v2);
}

