// busybox.exe @ 0x46a8ec size=215

int __usercall sub_46A8EC@<eax>(int a1@<eax>)
{
  int result; // eax
  int v2; // ebp
  _DWORD *v3; // eax
  void *v4; // ebx
  int v5; // esi
  void (*v6)(void); // edx
  char *v7; // ecx
  char v8; // al
  void *v9; // [esp+0h] [ebp-18h]

  while ( 1 )
  {
    result = a1;
    if ( dword_473464 == a1 )
      break;
    v2 = dword_485FF0;
    ++*(_DWORD *)(dword_485FF0 + 56);
    v3 = (_DWORD *)dword_473464;
    dword_473464 = *(_DWORD *)dword_473464;
    v4 = (void *)v3[1];
    sub_4631A8(v3);
    while ( v4 != nullptr )
    {
      v9 = *(void **)v4;
      v5 = *((_DWORD *)v4 + 1);
      if ( v5 != 0 )
      {
        if ( *((_DWORD *)v4 + 2) == 32 )
        {
          *(_DWORD *)(v5 + 4) &= 0xFFFFFFF9;
          sub_46A8E0(*(char **)(v5 + 8));
        }
        else
        {
          v6 = *(void (**)(void))(v5 + 12);
          if ( v6 != nullptr )
          {
            v7 = *((char **)v4 + 3);
            do
            {
              v8 = *v7;
              if ( *v7 == 0 )
                break;
              ++v7;
            }
            while ( v8 != 61 );
            v6();
          }
          if ( (*(_BYTE *)(v5 + 4) & 0x18) == 0 )
            sub_4631A8(*(void **)(v5 + 8));
          *(_DWORD *)(v5 + 4) = *((_DWORD *)v4 + 2);
          *(_DWORD *)(v5 + 8) = *((_DWORD *)v4 + 3);
        }
      }
      else
      {
        qmemcpy((void *)(v2 + 63), *((const void **)v4 + 3), 0x13u);
        sub_4631A8(*((void **)v4 + 3));
        sub_447F54();
      }
      sub_4631A8(v4);
      v4 = v9;
    }
    sub_43B8DC();
  }
  return result;
}

