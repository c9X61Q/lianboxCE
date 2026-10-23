// busybox.exe @ 0x4398b4 size=64

int sub_4398B4()
{
  _DWORD *v0; // ebx
  int result; // eax
  int v2; // [esp+0h] [ebp-4h]

  v0 = (_DWORD *)dword_473378;
  if ( dword_473378 != 0 )
  {
    ++*(_DWORD *)(dword_485FF0 + 56);
    do
    {
      v0 = (_DWORD *)*v0;
      sub_4631A8();
    }
    while ( v0 != nullptr );
    dword_473378 = 0;
    result = sub_43B8DC(v2);
  }
  dword_473388 = 0;
  return result;
}

