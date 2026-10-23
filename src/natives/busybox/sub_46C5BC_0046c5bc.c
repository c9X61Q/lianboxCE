// busybox.exe @ 0x46c5bc size=302

int __cdecl sub_46C5BC(int a1, int a2)
{
  _DWORD *v2; // eax
  FILE *v3; // edi
  int v4; // eax
  char *v5; // ebx
  const char *v6; // esi
  void (__usercall *v7)(FILE *@<eax>, FILE *@<edx>, signed __int32@<ecx>); // ebp
  FILE *v8; // esi
  char *v9; // eax
  void *Block; // [esp+0h] [ebp-20h]
  int Val; // [esp+4h] [ebp-1Ch]
  _BYTE *v13; // [esp+Ch] [ebp-14h]

  sub_435D44(a2, (int)"^o:");
  v2 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v2 == 0 )
    *(v2 - 1) = "-";
  v3 = (FILE *)sub_470D10(Block, Val);
  while ( 1 )
  {
    v4 = sub_470E94();
    v5 = (char *)v4;
    if ( v4 == 0 )
      goto LABEL_14;
    if ( sub_43C594(v4, (int)"begin-base64 ") != 0 )
    {
      v6 = v5 + 13;
      v7 = (void (__usercall *)(FILE *@<eax>, FILE *@<edx>, signed __int32@<ecx>))sub_45690C;
      goto LABEL_10;
    }
    if ( sub_43C594((int)v5, (int)"begin ") != 0 )
      break;
    free(v5);
  }
  v6 = v5 + 6;
  v7 = (void (__usercall *)(FILE *@<eax>, FILE *@<edx>, signed __int32@<ecx>))sub_457DA4;
LABEL_10:
  sub_418398(8, v6, nullptr);
  v9 = strchr(v6, 32);
  if ( v9 == nullptr || (v13 = v9 + 1, sub_467754(v9 + 1), *v13 == 0) )
LABEL_14:
    sub_418210("no 'begin' line");
  v8 = off_4730E8(1);
  if ( *v13 != 45 || v13[1] != 0 )
  {
    v8 = (FILE *)sub_470D04();
    fileno(v8);
  }
  free(v5);
  v7(v3, v8, 384);
  return 0;
}

