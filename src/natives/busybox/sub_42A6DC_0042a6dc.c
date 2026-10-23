// busybox.exe @ 0x42a6dc size=319

int __usercall sub_42A6DC@<eax>(int a1@<eax>, _DWORD *a2@<ecx>)
{
  int v2; // esi
  int v3; // ecx
  char v4; // bl
  _DWORD *v5; // ebx
  _BYTE *v6; // edx
  char v7; // al
  FILE *v8; // eax
  FILE *v9; // eax
  int v10; // ecx
  FILE *Stream; // [esp+0h] [ebp-68h]
  int v13; // [esp+4h] [ebp-64h]
  int v16; // [esp+14h] [ebp-54h]
  int v17; // [esp+18h] [ebp-50h]
  _BYTE v18[76]; // [esp+1Ch] [ebp-4Ch] BYREF

  v16 = *(_DWORD *)(dword_485FF0 + 48);
  v17 = *(_DWORD *)(dword_485FF0 + 52);
  v13 = 0;
  Stream = (FILE *)v18;
  v2 = setjmp3();
  if ( v2 == 0 )
  {
    v3 = dword_485FF0;
    *(_DWORD *)(dword_485FF0 + 52) = v18;
    *(_DWORD *)(v3 + 48) = *a2;
    dword_47310C = (int)(a2 + 1);
    dword_4734CC = 0;
    if ( (char **)a1 == &off_47E098 )
    {
      v4 = 0;
      if ( a2[1] == 0 )
      {
LABEL_12:
        sub_431174();
        v8 = off_4730E8(1);
        *(_BYTE *)dword_485FF0 = ferror(v8) | v4;
        goto LABEL_13;
      }
      if ( a2[2] != 0 )
      {
        v5 = a2 + 2;
        while ( 1 )
        {
          v6 = (_BYTE *)sub_462C50(Stream, v13);
          if ( *v5++ == 0 )
            break;
          sub_411E88(32, v6);
        }
        sub_411E88(0, v6);
        sub_462C74();
      }
      v7 = sub_42B3FC();
    }
    else
    {
      v7 = (*(int (__cdecl **)(_BYTE *, _DWORD))(a1 + 4))(v18, 0);
    }
    v4 = v7;
    goto LABEL_12;
  }
LABEL_13:
  v9 = off_4730E8(1);
  clearerr(v9);
  v10 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 48) = v16;
  *(_DWORD *)(v10 + 52) = v17;
  return v2;
}

