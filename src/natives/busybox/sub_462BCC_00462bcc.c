// busybox.exe @ 0x462bcc size=130

const char *__usercall sub_462BCC@<eax>(int a1@<eax>)
{
  double v1; // st7
  int v2; // ebx
  const char *result; // eax
  const char *v4; // esi
  void (**v5)(void); // edi
  _BYTE *v6; // [esp+8h] [ebp-14h]
  _BYTE *v7; // [esp+Ch] [ebp-10h] BYREF

  while ( 1 )
  {
    v6 = (_BYTE *)a1;
    v1 = sub_402B30(a1, (int)&v7);
    v2 = (int)v7;
    if ( v7 != v6 )
    {
      sub_452784(v1);
      goto LABEL_3;
    }
    result = sub_460FB8(v6);
    v4 = result;
    if ( *result == 0 )
      return result;
    v5 = (void (**)(void))&unk_480620;
    while ( 1 )
    {
      v2 = sub_43C594((int)v4, (int)v5);
      if ( v2 != 0 )
        break;
      v5 += 2;
      if ( v5 == (void (**)(void))&unk_480688 )
        sub_41784C("syntax error at '%s'", v4);
    }
    v5[1]();
LABEL_3:
    a1 = v2;
  }
}

