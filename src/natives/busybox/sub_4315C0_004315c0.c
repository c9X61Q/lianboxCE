// busybox.exe @ 0x4315c0 size=1029

int *__usercall sub_4315C0@<eax>(int a1@<eax>)
{
  int *result; // eax
  int v2; // ecx
  int v3; // ebx
  int i; // eax
  int v5; // edx
  int v6; // ecx
  int j; // edx
  int *k; // eax
  int v9; // ebx
  int n; // ebx
  int v11; // eax
  int v12; // ecx
  int m; // edx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  void *v17; // edx
  int *v18; // eax
  char *v19; // eax
  int v20; // ecx
  unsigned __int8 *v21; // esi
  int v22; // edi
  int v23; // ebx
  int v24; // ebx
  int v25; // esi
  int v26; // edi
  int v27; // esi
  int v28; // ebx
  int v29; // esi
  int v30; // ebx
  HANDLE hFileMappingObject; // [esp+0h] [ebp-8Ch]
  DWORD dwFileOffsetHigh; // [esp+8h] [ebp-84h]
  int v33; // [esp+14h] [ebp-78h]
  int FileHandle; // [esp+18h] [ebp-74h]
  const char *v35; // [esp+1Ch] [ebp-70h]
  size_t v36; // [esp+20h] [ebp-6Ch]
  unsigned __int8 *v37; // [esp+2Ch] [ebp-60h]
  int v38; // [esp+30h] [ebp-5Ch]
  int v39; // [esp+34h] [ebp-58h]
  int *v40; // [esp+38h] [ebp-54h]
  HANDLE v41; // [esp+3Ch] [ebp-50h] BYREF
  _BYTE v42[76]; // [esp+40h] [ebp-4Ch] BYREF

  result = (int *)(sub_4629D0(a1, "%p", &v41) - 1);
  if ( result == nullptr )
  {
    result = (int *)MapViewOfFile(v41, 2u, 0, 0, 0);
    v40 = result;
    if ( result != nullptr )
    {
      dword_4735A4 = (int)result;
      v2 = (int)result + result[8];
      dword_4735A0 = v2;
      v3 = result[9];
      for ( i = 0; v3 > i; ++i )
      {
        if ( *(_BYTE *)(v2 + i) != 0 )
        {
          v5 = *(int *)((char *)v40 + i);
          if ( v5 != 0 )
            *(int *)((char *)v40 + i) = (int)v40 + v5 - v40[7];
        }
      }
      if ( v40[10] != 0 )
      {
        v6 = v40[2];
        for ( j = 0; j != 31; ++j )
        {
          for ( k = *(int **)(v6 + 4 * j); k != nullptr; k = (int *)*k )
          {
            if ( *((_BYTE *)k + 8) == 2 )
              k[1] = 8 * k[1] + 4710464;
          }
        }
        memset((void *)(v40[1] + 84), 0, 0x5Cu);
        v38 = *v40;
        dword_485FEC = *v40;
        v9 = v40[1];
        dword_485FF0 = v9;
        dword_4731A4 = v40[2];
        dword_473110 = v40[3];
        if ( v40[5] != 0 )
        {
          v11 = sub_4460DC();
          dword_473454 = v11;
          v12 = v40[5];
          *(_DWORD *)(v11 + 16) = v12;
          for ( m = 0; v12 > m; ++m )
            *(_DWORD *)(v11 + 4 * m + 36) = *(_DWORD *)(v40[4] + 4 * m);
        }
        *(_DWORD *)(v9 + 176) = 0;
        v39 = v38 + 184;
        for ( n = 0; n != 36; n += 3 )
        {
          v14 = (_DWORD *)sub_4382E4();
          v15 = sub_430DE0(v14);
          if ( v15 != nullptr )
          {
            *(_OWORD *)v39 = *(_OWORD *)*v15;
            *v15 = v39;
          }
          *(_DWORD *)(v39 + 12) = dword_4848C8[n];
          v39 += 16;
        }
        *(_DWORD *)(v38 + 288) = v38 + 380;
        if ( setjmp3() != 0 )
        {
          sub_42D2EC(v42, 0);
          sub_42D338();
        }
        v16 = dword_485FF0;
        *(_DWORD *)(dword_485FF0 + 52) = v42;
        ++*(_DWORD *)(v16 + 12);
        if ( v40[11] == 1 )
        {
          SetConsoleCtrlHandler(nullptr, true);
          hFileMappingObject = v17;
          if ( v40[12] == 0 )
          {
            sub_442EA4(0);
            if ( sub_443508("/dev/null", 0, dwFileOffsetHigh) != 0 )
            {
              v18 = _errno();
              v19 = strerror(*v18);
              sub_415B40(v20, "can't open '%s': %s", "/dev/null", v19);
            }
          }
        }
        else
        {
          hFileMappingObject = (HANDLE)SetConsoleCtrlHandler(HandlerRoutine, true);
        }
      }
      switch ( v40[10] )
      {
        case 0:
          v35 = (const char *)v40[19];
          v36 = strlen(v35);
          sub_442EA4(v40[14]);
          sub_46F190(13, 0);
          sub_471D00(v36, v35);
          exit(0);
        case 1:
          v21 = (unsigned __int8 *)v40[17];
          v22 = v40[14];
          v23 = v40[15];
          sub_431550();
          sub_442EA4(v22);
          if ( v23 != 1 )
          {
            sub_42930C(v23, 1);
            sub_442EA4(v23);
          }
          *(_BYTE *)(dword_485FF0 + 63) = 0;
          sub_4398B4();
          sub_42B5DC(v21, 1);
          goto LABEL_45;
        case 2:
          v24 = v40[17];
          v25 = v40[13];
          sub_43B8DC(hFileMappingObject);
          sub_42E40C(*(int **)(v24 + 12));
          sub_459474();
          sub_42B5DC(*(unsigned __int8 **)(v24 + 8), v25 | 1);
          goto LABEL_45;
        case 3:
          v37 = (unsigned __int8 *)v40[17];
          v26 = v40[13];
          v27 = v40[16];
          FileHandle = v40[14];
          v28 = v40[15];
          sub_43B8DC(hFileMappingObject);
          if ( v28 >= 0 )
            sub_442EA4(FileHandle);
          if ( v27 > 0 )
          {
            sub_442F08(v27, 0);
            sub_442EA4(v27);
          }
          if ( v28 > 1 )
          {
            sub_442F08(v28, 1);
            sub_442EA4(v28);
          }
          sub_42B5DC(v37, v26);
          goto LABEL_45;
        case 4:
LABEL_45:
          v29 = v40[14];
          v30 = v40[18];
          v33 = v40[19];
          sub_431550();
          sub_460044(v33, v30, v29);
        default:
          result = v40;
          break;
      }
    }
  }
  return result;
}

