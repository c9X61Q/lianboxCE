// busybox.exe @ 0x45a294 size=718

int __usercall sub_45A294@<eax>(CHAR *a1@<eax>, __int16 a2@<dx>)
{
  int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  const char *v9; // edi
  FILE *v10; // eax
  int v11; // eax
  FILE *v12; // eax
  const char *v13; // edi
  FILE *v14; // eax
  void *v16; // [esp+10h] [ebp-74h]
  char *Block; // [esp+14h] [ebp-70h]
  const char *v18; // [esp+14h] [ebp-70h]
  _BYTE v19[16]; // [esp+18h] [ebp-6Ch] BYREF
  int v20; // [esp+28h] [ebp-5Ch]

  if ( sub_443484(a1, (int)v19) < 0 )
  {
    if ( *_errno() != 2 )
    {
      sub_417FE4(v4, "can't stat '%s'", a1);
      return -1;
    }
    if ( (a2 & 8) != 0 )
      return 0;
LABEL_17:
    sub_417FE4(v4, "can't remove '%s'", a1);
    return -1;
  }
  if ( (v20 & 0xF000) != 0x4000 )
  {
    if ( (a2 & 8) == 0 && sub_442D6C(a1, 2) < 0 && (v20 & 0xF000) != 0xA000 && sub_443380(0) != 0 || (a2 & 0x10) != 0 )
    {
      v13 = dword_485AD0;
      v14 = off_4730E8(2);
      sub_46EEFC(v14, "%s: remove '%s'? ", v13, a1);
      if ( !sub_416DD0() )
        return 0;
    }
    if ( sub_444ECC(a1) >= 0 )
    {
      if ( (a2 & 0x1000) != 0 )
        sub_46F088("removed '%s'\n", a1);
      return 0;
    }
    goto LABEL_17;
  }
  if ( (a2 & 4) == 0 )
  {
    sub_41783C("'%s' is a directory", a1);
    return -1;
  }
  if ( (a2 & 8) == 0 && sub_442D6C(a1, 2) < 0 && sub_443380(0) != 0 || (a2 & 0x10) != 0 )
  {
    v9 = dword_485AD0;
    v10 = off_4730E8(2);
    sub_46EEFC(v10, "%s: descend into directory '%s'? ", v9, a1);
    if ( !sub_416DD0() )
      return 0;
  }
  Block = sub_402D50(a1);
  v5 = -1;
  if ( Block != nullptr )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_402F30((int)Block);
      if ( v6 == 0 )
        break;
      v11 = sub_41EA10(a1, v6 + 8, v7);
      if ( v11 != 0 )
      {
        v16 = (void *)v11;
        if ( sub_45A294() < 0 )
          v5 = -1;
        free(v16);
      }
    }
    if ( sub_403050(Block) < 0 )
    {
      sub_417FE4(v8, "can't close '%s'", a1);
      return -1;
    }
    if ( (a2 & 0x10) == 0
      || (v18 = dword_485AD0, v12 = off_4730E8(2), sub_46EEFC(v12, "%s: remove directory '%s'? ", v18, a1), sub_416DD0()) )
    {
      if ( v5 == 0 && sub_443C74(a1) < 0 )
        goto LABEL_17;
      if ( (a2 & 0x1000) != 0 )
        sub_46F088("removed directory: '%s'\n", a1);
    }
  }
  return v5;
}

