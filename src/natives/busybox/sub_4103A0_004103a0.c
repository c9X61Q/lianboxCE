// busybox.exe @ 0x4103a0 size=373

int __cdecl sub_4103A0(int *a1, int a2)
{
  int *v2; // esi
  int v3; // ebx
  int v4; // ebp
  int **v5; // edi
  int *v6; // esi
  int *v7; // eax
  int *v9; // eax
  int *v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [esp+0h] [ebp-2Ch]

  v2 = a1;
  if ( (a2 & 3) == 0 || (v2 = sub_410100(a1, dword_47429C[a2 & 3], 0)) != nullptr )
  {
    v3 = a2 >> 2;
    v4 = (int)v2;
    if ( a2 >> 2 != 0 )
    {
      v5 = (int **)dword_485000;
      if ( dword_485000 == 0 )
      {
        sub_40FE90(1);
        v5 = (int **)dword_485000;
        if ( dword_485000 == 0 )
        {
          v10 = sub_40FFB0(1);
          v5 = (int **)v10;
          if ( v10 == nullptr )
          {
            dword_485000 = 0;
            return 0;
          }
          v10[5] = 625;
          v10[4] = 1;
          dword_485000 = (int)v10;
          *v10 = 0;
        }
        if ( dword_485948 == 2 )
          LeaveCriticalSection(&stru_485978);
      }
      v4 = (int)v2;
      if ( (v3 & 1) != 0 )
        goto LABEL_9;
LABEL_5:
      v3 >>= 1;
      if ( v3 != 0 )
      {
        while ( 1 )
        {
          v6 = *v5;
          if ( *v5 != nullptr )
            goto LABEL_7;
          sub_40FE90(1);
          v6 = *v5;
          if ( *v5 == nullptr )
          {
            v9 = sub_410210((int)v5, (int)v5);
            *v5 = v9;
            v6 = v9;
            if ( v9 == nullptr )
              return 0;
            *v9 = 0;
          }
          if ( dword_485948 != 2 )
          {
LABEL_7:
            v5 = (int **)v6;
          }
          else
          {
            v5 = (int **)v6;
            LeaveCriticalSection(&stru_485978);
          }
          if ( (v3 & 1) == 0 )
            goto LABEL_5;
LABEL_9:
          v7 = sub_410210(v4, (int)v5);
          if ( v7 == nullptr )
            return 0;
          lpCriticalSection = (LPCRITICAL_SECTION)v4;
          v4 = (int)v7;
          sub_4100A0(lpCriticalSection);
          v3 >>= 1;
          if ( v3 == 0 )
            return v4;
        }
      }
    }
    return v4;
  }
  return 0;
}

