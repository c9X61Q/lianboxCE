// gettime.exe @ 0x40d641 size=318

int __cdecl BuildCatchObjectHelperInternal<__FrameHandler3>(int a1, int *a2, int *a3, int a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  const void *v12; // eax
  size_t v14; // [esp-4h] [ebp-34h]

  v4 = 0;
  v5 = a3[1];
  if ( v5 != 0 && *(_BYTE *)(v5 + 8) != 0 )
  {
    v6 = a3[2];
    if ( v6 != 0 || *a3 < 0 )
    {
      v7 = *a3;
      v8 = a2;
      if ( *a3 >= 0 )
        v8 = (int *)((char *)a2 + v6 + 12);
      if ( (v7 & 0x80u) != 0 && (*(_BYTE *)a4 & 0x10) != 0 && dword_4386AC != 0 )
      {
        v9 = ((int (__thiscall *)(int))dword_4386AC)(dword_4386AC);
      }
      else
      {
        if ( (v7 & 8) == 0 )
        {
          if ( (*(_BYTE *)a4 & 1) != 0 )
          {
            if ( *(_DWORD *)(a1 + 24) != 0 && v8 != nullptr )
            {
              memmove(v8, *(const void **)(a1 + 24), *(_DWORD *)(a4 + 20));
              if ( *(_DWORD *)(a4 + 20) != 4 || *v8 == 0 )
                return v4;
              v10 = __AdjustPointer(*v8, (_DWORD *)(a4 + 8));
              goto LABEL_22;
            }
          }
          else
          {
            v11 = *(_DWORD *)(a1 + 24);
            if ( *(_DWORD *)(a4 + 24) != 0 )
            {
              if ( v11 != 0 && v8 != nullptr )
                return ((*(_BYTE *)a4 & 4) != 0) + 1;
            }
            else if ( v11 != 0 && v8 != nullptr )
            {
              v14 = *(_DWORD *)(a4 + 20);
              v12 = (const void *)__AdjustPointer(v11, (_DWORD *)(a4 + 8));
              memmove(v8, v12, v14);
              return v4;
            }
          }
LABEL_33:
          abort();
        }
        v9 = *(_DWORD *)(a1 + 24);
      }
      if ( v9 != 0 && v8 != nullptr )
      {
        *v8 = v9;
        v10 = __AdjustPointer(v9, (_DWORD *)(a4 + 8));
LABEL_22:
        *v8 = v10;
        return v4;
      }
      goto LABEL_33;
    }
  }
  return 0;
}

