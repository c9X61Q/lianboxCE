// busybox.exe @ 0x426a60 size=102

void __cdecl sub_426A60(void *a1)
{
  int v1; // edx
  unsigned __int8 *v2; // eax
  int v3; // ecx

  v1 = *(_DWORD *)(dword_486010 + 36);
  if ( v1 > 1 )
  {
    v2 = *((unsigned __int8 **)a1 + 2);
    if ( v1 != *v2 )
    {
      v3 = 2;
      if ( v1 != 2 )
        v3 = *(_DWORD *)(dword_486010 + 48);
      sub_428FC4(v3, &unk_47B080, (v1 > 3) + (_BYTE)v2);
    }
  }
  free(*((void **)a1 + 2));
  free(a1);
}

