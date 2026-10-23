// busybox.exe @ 0x4186ec size=846

int __userpurge sub_4186EC@<eax>(int *a1@<eax>, __int64 (*a2)(void)@<edx>, int (*a3)(void)@<ecx>, int a4)
{
  __int64 v4; // kr00_8
  int v5; // esi
  int v6; // edx
  char *v7; // eax
  char *v8; // ebx
  int v9; // edx
  char *v10; // edi
  size_t v11; // edi
  int v12; // edx
  FILE *v13; // eax
  int Str; // [esp+0h] [ebp-F4h]
  int v16; // [esp+1Ch] [ebp-D8h]
  char v20; // [esp+37h] [ebp-BDh]
  int v21[17]; // [esp+38h] [ebp-BCh] BYREF
  int v22; // [esp+7Ch] [ebp-78h]
  _BYTE v23[16]; // [esp+88h] [ebp-6Ch] BYREF
  unsigned __int16 v24; // [esp+98h] [ebp-5Ch]
  __int64 v25; // [esp+B0h] [ebp-44h]

  v20 = 0;
  v4 = 0;
  do
  {
    v5 = *a1;
    if ( *a1 != 0 && (*(_BYTE *)v5 != 45 || *(_BYTE *)(v5 + 1) != 0) )
    {
      if ( dword_486008 < 0 )
      {
        if ( sub_447B4C(a3, 1) < 0 )
        {
LABEL_7:
          sub_418224((const char *)v5, v6);
LABEL_56:
          v20 = 1;
          v8 = nullptr;
LABEL_57:
          free(v8);
          goto LABEL_59;
        }
      }
      else
      {
        if ( sub_444C28(v5, v23) != 0 )
          goto LABEL_7;
        if ( sub_4479C8(0, 0) < 0 )
          goto LABEL_56;
      }
      sub_471530();
    }
    else
    {
      if ( dword_486008 < 0 && sub_45EB54(a3, 1) != 0 )
      {
        v20 = 1;
        goto LABEL_59;
      }
      v5 = 0;
    }
    if ( (dword_486008 & 0x41) != 0 )
    {
      if ( (dword_486008 & 0x40) != 0 )
      {
        if ( sub_4479C8(0, 1) < 0 )
          goto LABEL_29;
        sub_471530();
      }
      v5 = 0;
LABEL_32:
      v8 = nullptr;
      goto LABEL_26;
    }
    if ( v5 == 0 )
      goto LABEL_32;
    v7 = (char *)a3();
    v8 = v7;
    if ( v7 == nullptr )
    {
      sub_41783C("%s: unknown suffix - ignored", (const char *)v5);
      v20 = 1;
      goto LABEL_57;
    }
    if ( (dword_486008 & 2) != 0 )
      sub_444ECC(v7);
    if ( sub_4479C8(v24, 1281) < 0 )
    {
      v20 = 1;
      goto LABEL_54;
    }
    sub_471530();
LABEL_26:
    if ( (dword_486008 & 2) == 0 && sub_443380(0) != 0 )
      sub_418210("compressed data not read from terminal, use -f to force it");
    if ( dword_486008 >= 0 )
    {
      sub_43AD1C();
      v21[8] = 1;
      v4 = a2();
      if ( v4 < 0 )
        v20 = 1;
    }
    else
    {
      sub_416EC0();
      if ( v9 < 0 )
LABEL_29:
        sub_470D44(Str);
    }
    if ( (dword_486008 & 1) == 0 )
      sub_470B50();
    if ( v5 == 0 )
      goto LABEL_59;
    v10 = v8;
    if ( v4 >= 0 )
    {
      if ( v22 != 0 )
      {
        v21[0] = v22;
        v21[2] = v22;
        v21[1] = 0;
        v21[3] = 0;
        sub_46C3FC(v8, (int)v21);
      }
      v11 = strlen(v8);
      if ( v8 == (char *)v5 )
      {
        v11 = strlen(v8);
        v8[v11] = 46;
      }
      if ( (dword_486008 & 8) != 0 )
      {
        v12 = 0;
        if ( v4 != 0 )
          v12 = sub_4026E0(100 * v25, v4, HIDWORD(v4));
        v16 = v12;
        v13 = off_4730E8(2);
        sub_46EEFC(v13, "%s: %u%% - replaced with %.*s\n", (const char *)v5, 100 - v16, v11, v8);
      }
      v10 = (char *)v5;
      if ( (dword_486008 & 4) != 0 )
        v10 = nullptr;
    }
    sub_470B50();
    if ( v10 != nullptr )
      sub_471CD8();
LABEL_54:
    if ( (char *)v5 != v8 )
      goto LABEL_57;
LABEL_59:
    if ( *a1 == 0 )
      break;
    ++a1;
  }
  while ( *a1 != 0 );
  if ( (dword_486008 & 1) != 0 )
    sub_470B50();
  return v20;
}

