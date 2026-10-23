// busybox.exe @ 0x4230c8 size=395

int __usercall sub_4230C8@<eax>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  _BYTE **v7; // edi
  char *v8; // esi
  const char *v9; // eax
  int v11; // [esp+8h] [ebp-18h]
  char v12[4]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE **v13; // [esp+10h] [ebp-10h]

  v4 = a3;
  v5 = a2;
  if ( a2 == 0 )
    v5 = *(_DWORD *)(dword_485FEC + 208) + 5;
  v11 = v5;
  if ( a3 != 0 )
    sub_448130();
  if ( sub_430DB0() != 0 )
    goto LABEL_24;
  v6 = *sub_411EA4(a1);
  if ( v6 != 0 )
  {
    if ( v4 == 0 )
    {
      sub_448130();
      sub_44F12C();
      return v4;
    }
    sub_4480E8(" is an alias for %s", *(_DWORD *)(v6 + 8));
LABEL_32:
    sub_448130();
    return 0;
  }
  sub_4300CC(2, v12, v11);
  if ( v12[0] == 2 )
  {
    if ( v4 != 0 )
    {
      v9 = "special ";
      if ( (**v13 & 1) == 0 )
        v9 = (const char *)(dword_485FF0 + 62);
      sub_4480E8(" is a %sshell builtin", v9);
      goto LABEL_32;
    }
    goto LABEL_24;
  }
  if ( v12[0] <= 2 )
  {
    if ( v12[0] != 0 )
    {
      if ( v12[0] != 1 )
        goto LABEL_30;
    }
    else
    {
      v7 = v13;
      if ( v13 == (_BYTE **)0x80000000 )
      {
        v8 = sub_416E24(a1);
      }
      else
      {
        if ( (int)v13 >= 0 )
        {
          do
          {
            sub_448618();
            v7 = (_BYTE **)((char *)v7 - 1);
          }
          while ( v7 != (_BYTE **)-1 );
          v8 = *(char **)(dword_485FF4 + 4);
        }
        else
        {
          v8 = (char *)sub_462B6C();
        }
        sub_413848(v8);
        sub_418E48(v8);
      }
      if ( v4 != 0 )
      {
        sub_4480E8(" is %s", v8);
        goto LABEL_32;
      }
    }
LABEL_24:
    sub_448130();
    goto LABEL_32;
  }
LABEL_30:
  if ( v4 != 0 )
    sub_448130();
  return 127;
}

