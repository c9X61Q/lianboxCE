// busybox.exe @ 0x434880 size=184

unsigned int sub_434880()
{
  unsigned int v0; // esi
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // eax
  char *v4; // eax
  char v5; // al
  _DWORD v7[4]; // [esp+Ch] [ebp-10h] BYREF

  v0 = 0;
  while ( 1 )
  {
    v1 = (_DWORD *)dword_486010;
    if ( *(int *)(dword_486010 + 112) <= 0 )
      break;
LABEL_9:
    --v1[28];
    v4 = (char *)v1[27];
    v1[27] = v4 + 1;
    v5 = *v4;
    if ( v5 != 13 )
    {
      if ( v5 == 10 )
        goto LABEL_12;
      *(_BYTE *)(v1[26] + v0) = v5;
      v0 += v0 < 0x1FFF;
    }
  }
  v7[0] = 0;
  v7[1] = 1;
  v2 = sub_44D290(v7, 1, 60000);
  if ( v2 == -1 )
    sub_41823C("poll");
  if ( v2 == 0 )
    sub_45E0C0();
  v3 = sub_45C560(1024, (LPSTR)&MultiByteStr);
  v1[28] = v3;
  if ( v3 > 0 )
  {
    v1[27] = &MultiByteStr;
    goto LABEL_9;
  }
LABEL_12:
  *(_BYTE *)(v1[26] + v0) = 0;
  return v0;
}

