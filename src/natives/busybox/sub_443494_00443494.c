// busybox.exe @ 0x443494 size=86

int __cdecl sub_443494(char *Path)
{
  int v1; // ebx
  int v2; // esi
  _BYTE v4[108]; // [esp+8h] [ebp-6Ch] BYREF

  v1 = mkdir(Path);
  v2 = 0;
  if ( v1 < 0 )
  {
    v2 = *_errno();
    if ( v2 == 13 && sub_444C28(Path, v4) == 0 )
    {
      v2 = 0;
      v1 = 0;
    }
  }
  *_errno() = v2;
  return v1;
}

