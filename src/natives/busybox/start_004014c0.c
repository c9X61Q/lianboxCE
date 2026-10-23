// busybox.exe @ 0x4014c0 size=15

// write access to const memory has been detected, the output may be wrong!
void __cdecl __noreturn start(char a1)
{
  PVOID StackBase; // edi
  signed __int32 v2; // eax
  __int32 v3; // ebx
  char **v4; // eax
  char v5; // cl
  char *v6; // eax
  char v7; // dl
  char v8; // dl
  int v9; // eax
  int v10; // ebx
  size_t v11; // esi
  _DWORD *v12; // eax
  _DWORD *v13; // ebx
  const char **v14; // edi
  const char *v15; // eax
  size_t Size; // esi
  void *v17; // eax
  size_t v18; // [esp+14h] [ebp-7Ch]
  int v19; // [esp+18h] [ebp-78h]
  int v20; // [esp+1Ch] [ebp-74h]
  int v21[25]; // [esp+2Ch] [ebp-64h] BYREF
  int retaddr; // [esp+90h] [ebp+0h]

  dword_4859E4 = 0;
  v21[24] = retaddr;
  v21[19] = (int)&a1;
  memset(v21, 0, 0x44u);
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange(&dword_486014, (signed __int32)StackBase, 0);
    if ( v2 == 0 )
      break;
    if ( StackBase == (PVOID)v2 )
    {
      v3 = 1;
      if ( dword_486018 == 1 )
      {
LABEL_35:
        amsg_exit(31);
        if ( dword_486018 == 1 )
          goto LABEL_36;
LABEL_9:
        if ( v3 != 0 )
        {
LABEL_10:
          if ( TlsCallback_0 != nullptr )
            TlsCallback_0(0, 2, 0);
          sub_401940();
          dword_4859F8 = (int)SetUnhandledExceptionFilter(TopLevelExceptionFilter);
          sub_4113F0(nullsub_1);
          sub_401770();
          dword_485FE4 = 0x400000;
          v4 = _p__acmdln();
          v5 = 0;
          v6 = *v4;
          if ( v6 == nullptr )
            goto LABEL_25;
          while ( 1 )
          {
            v7 = *v6;
            if ( *v6 <= 32 )
            {
              if ( v7 == 0 )
                goto LABEL_24;
              if ( (v5 & 1) == 0 )
              {
                do
                  v8 = *++v6;
                while ( v8 != 0 && v8 <= 32 );
LABEL_24:
                dword_485FE0 = (int)v6;
LABEL_25:
                if ( dword_4859E4 != 0 )
                {
                  v9 = 10;
                  if ( (v21[11] & 1) != 0 )
                    v9 = LOWORD(v21[12]);
                  dword_473020 = v9;
                }
                v10 = dword_4859BC;
                v11 = 4 * dword_4859BC + 4;
                v12 = malloc(v11);
                v19 = (int)v12;
                if ( v10 > 0 )
                {
                  v13 = v12;
                  v14 = (const char **)dword_4859B8;
                  v18 = v11 - 4;
                  v20 = dword_4859B8 + v11 - 4;
                  do
                  {
                    v15 = *v14;
                    ++v13;
                    ++v14;
                    Size = strlen(v15) + 1;
                    v17 = malloc(Size);
                    *(v13 - 1) = v17;
                    memcpy(v17, *(v14 - 1), Size);
                  }
                  while ( (const char **)v20 != v14 );
                  v12 = (_DWORD *)(v19 + v18);
                }
                *v12 = 0;
                dword_4859B8 = v19;
                sub_4015C0();
                _initenv = dword_4859B4;
                sub_440C80(dword_4859BC, dword_4859B8);
              }
              v5 = 1;
            }
            else if ( v7 == 34 )
            {
              v5 ^= 1u;
            }
            ++v6;
          }
        }
LABEL_37:
        _InterlockedExchange(&dword_486014, v3);
        goto LABEL_10;
      }
LABEL_6:
      if ( dword_486018 != 0 )
      {
        dword_4859A8 = 1;
      }
      else
      {
        dword_486018 = 1;
        initterm(&dword_48A00C, &dword_48A018);
      }
      if ( dword_486018 != 1 )
        goto LABEL_9;
LABEL_36:
      initterm(&First, &Last);
      dword_486018 = 2;
      if ( v3 != 0 )
        goto LABEL_10;
      goto LABEL_37;
    }
    Sleep(0x3E8u);
  }
  v3 = 0;
  if ( dword_486018 == 1 )
    goto LABEL_35;
  goto LABEL_6;
}

