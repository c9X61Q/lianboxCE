// busybox.exe @ 0x445898 size=142

void __usercall __spoils<edx,ecx> sub_445898(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v2; // edx
  _DWORD *v4; // ecx
  int v5; // esi
  int v6; // ebx
  int *v7; // edi
  int v8; // eax
  int v9; // [esp+8h] [ebp-14h] BYREF

  if ( a2 > 1 )
  {
    v2 = a2 >> 1;
    v4 = nullptr;
    while ( --v2 != -1 )
    {
      v4 = a1;
      a1 = (_DWORD *)*a1;
    }
    *v4 = 0;
    v5 = sub_445898();
    v6 = sub_445898();
    v7 = &v9;
    while ( 1 )
    {
      if ( strcmp(*(const char **)(v6 + 4), *(const char **)(v5 + 4)) >= 0 )
      {
        *v7 = v5;
        if ( *(_DWORD *)v5 == 0 )
        {
          *(_DWORD *)v5 = v6;
          return;
        }
        v7 = (int *)v5;
        v5 = *(_DWORD *)v5;
        v8 = v6;
      }
      else
      {
        *v7 = v6;
        v8 = *(_DWORD *)v6;
        if ( *(_DWORD *)v6 == 0 )
        {
          *(_DWORD *)v6 = v5;
          return;
        }
        v7 = (int *)v6;
      }
      v6 = v8;
    }
  }
}

