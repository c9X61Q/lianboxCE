// busybox.exe @ 0x459eb8 size=303

void sub_459EB8()
{
  int v0; // ebx
  char *v1; // eax
  char *v2; // esi
  char *v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  void *Block; // [esp+0h] [ebp-10h]

  v0 = dword_486010;
  free(*(void **)(dword_486010 + 204));
  *(_DWORD *)(v0 + 204) = 0;
  *(_DWORD *)(v0 + 208) = 0;
  *(_DWORD *)(v0 + 216) = 0;
  if ( *(_BYTE *)(v0 + 252) != 0 )
  {
    sub_45A08C(v0 + 220);
    *(_BYTE *)(v0 + 252) = 0;
  }
  sub_41CA38();
  sub_418130((dword_486008 & 0x8000) == 0 ? 47 : 63);
  v1 = (char *)sub_43D4D8(1);
  v2 = v1;
  if ( *v1 != 0 )
  {
    v3 = (char *)sub_459DFC(((unsigned int)dword_486008 >> 4) & 2, v1, v0 + 220);
    free(v2);
    if ( v3 != nullptr )
    {
      sub_44F07C(v3);
      free(v3);
    }
    else
    {
      *(_BYTE *)(v0 + 252) = 1;
      *(_DWORD *)(v0 + 208) = 0;
      sub_42F994(0);
      v5 = *(_DWORD *)(v0 + 216);
      while ( 1 )
      {
        v6 = *(_DWORD *)(v0 + 208);
        if ( v6 >= v5 )
          break;
        v4 = *(_DWORD *)(v0 + 204);
        if ( *(_DWORD *)(v4 + 4 * v6) > *(_DWORD *)v0 )
          break;
        *(_DWORD *)(v0 + 208) = v6 + 1;
      }
      if ( (dword_486008 & 0x8000) != 0 )
        *(_DWORD *)(v0 + 208) = v6 - 1;
      sub_43684C(*(_DWORD *)(v0 + 208), (int)Block, v4);
    }
  }
  else
  {
    free(v1);
    sub_418F38();
  }
}

