// busybox.exe @ 0x44de6c size=104

_DWORD *sub_44DE6C()
{
  _DWORD *result; // eax
  void *v1; // ebx
  int v2; // eax
  CHAR v3[268]; // [esp+Ch] [ebp-10Ch] BYREF

  result = sub_444718();
  v1 = result;
  if ( result != nullptr )
  {
    while ( 1 )
    {
      v2 = sub_435B88((int)v1);
      if ( v2 == 0 )
        break;
      *(_BYTE *)(*(_DWORD *)(v2 + 4) + 2) = 0;
      if ( sub_4336F0(*(CHAR **)(v2 + 4), v3, 0x104u) != nullptr )
        sub_4480E8("%s\n", v3);
    }
    return (_DWORD *)sub_429920(v1);
  }
  return result;
}

