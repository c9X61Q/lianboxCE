// busybox.exe @ 0x446628 size=222

int sub_446628()
{
  int v0; // ebx
  int result; // eax
  int v2; // ecx
  FILE *v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  const char *v10; // eax
  FILE *Stream; // [esp+0h] [ebp-14h]
  double v12; // [esp+4h] [ebp-10h]
  const char *v13; // [esp+4h] [ebp-10h]
  const char *v14; // [esp+4h] [ebp-10h]

  v0 = dword_486010;
  if ( *(_DWORD *)(dword_486010 + 112) != 0 )
    fclose(*(FILE **)(dword_486010 + 112));
  *(_DWORD *)(v0 + 112) = 0;
  *(_DWORD *)(v0 + 120) = 0;
  *(_DWORD *)(v0 + 128) = 0;
  while ( 1 )
  {
    v12 = sub_436630((signed __int32 *)*(_DWORD *)(v0 + 56));
    if ( v12 + 1.0 >= sub_436630((signed __int32 *)*(_DWORD *)(v0 + 60)) )
      break;
    v4 = sub_4398F4(*(signed __int32 **)(v0 + 56));
    v13 = (const char *)sub_436704(v4, v5);
    v6 = (unsigned int *)sub_4394A8(*(int **)(v0 + 64));
    v8 = sub_437FC0(v6, v13, v7);
    v10 = (const char *)sub_436704(v8, v9);
    if ( v10 != nullptr && *v10 != 0 )
    {
      v14 = v10;
      if ( sub_43C400(v10) == 0 )
      {
        v3 = (FILE *)sub_470D10(Stream, v14);
        goto LABEL_11;
      }
    }
  }
  result = 0;
  if ( *(_BYTE *)(v0 + 109) != 0 )
    return result;
  v3 = off_4730E8(0);
LABEL_11:
  *(_BYTE *)(v0 + 109) = 1;
  sub_45EC78(v2);
  *(_DWORD *)(v0 + 112) = v3;
  return v0 + 112;
}

