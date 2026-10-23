// busybox.exe @ 0x448b44 size=204

int *__fastcall sub_448B44(int a1, int *a2, int a3, int a4, _DWORD *a5)
{
  int *v6; // eax
  int *v7; // ebx
  int *v8; // eax
  int v9; // ecx
  int v11; // [esp+10h] [ebp-14h]

  v11 = *a2;
  v6 = (int *)sub_44A178(a3, a4, a5);
  v7 = v6;
  if ( *a5 == 0 || v6 != nullptr )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 4) & 0xF7) == 2 || *(_BYTE *)(a1 + 4) == 9 && a4 != 0 )
        return v7;
      v8 = (int *)sub_44A178(a3, a4, a5);
      v9 = (int)v8;
      if ( *a5 != 0 )
      {
        if ( v8 == nullptr )
          return nullptr;
        if ( v7 == nullptr )
          goto LABEL_5;
      }
      else
      {
        if ( v7 == nullptr )
          goto LABEL_5;
        if ( v8 == nullptr )
        {
          v9 = (int)v7;
          goto LABEL_5;
        }
      }
      v9 = sub_420A78(v11, v7, v8, 16);
      if ( v9 == 0 )
      {
        *a5 = 12;
        return nullptr;
      }
LABEL_5:
      v7 = (int *)v9;
    }
  }
  return nullptr;
}

