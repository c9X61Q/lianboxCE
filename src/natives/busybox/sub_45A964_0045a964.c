// busybox.exe @ 0x45a964 size=584

int __usercall sub_45A964@<eax>(FILE *a1@<eax>)
{
  int v2; // ebx
  FILE *v3; // eax
  const char *v4; // edi
  FILE *v5; // eax
  signed int ElementCount; // eax
  signed int v7; // edi
  __int64 v8; // kr00_8
  const char *v9; // eax
  int v10; // edi
  const char *v11; // ebp
  signed __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  FILE *v15; // eax
  const char *v16; // ebx
  FILE *v17; // eax

  v2 = dword_486010;
  if ( (dword_486008 & 2) == 0 )
  {
    if ( *(_DWORD *)(dword_486010 + 48) == 1 )
    {
      v3 = off_4730E8(2);
      sub_46EEFC(v3, "writing to stdout\n");
    }
    else
    {
      v4 = *(const char **)(dword_486010 + 32);
      v5 = off_4730E8(2);
      sub_46EEFC(v5, "saving to '%s'\n", v4);
    }
  }
  if ( *(_BYTE *)(v2 + 60) != 0 )
    goto LABEL_20;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        *_errno() = 0;
        if ( *(_BYTE *)(v2 + 61) != 0 && (ElementCount = *(_DWORD *)v2, *(__int64 *)v2 <= 4095) )
        {
          if ( ElementCount <= 0 )
            goto LABEL_18;
        }
        else
        {
          ElementCount = 4096;
        }
        v7 = fread((void *)(v2 + 64), 1u, ElementCount, a1);
        if ( v7 <= 0 )
          break;
        sub_471D00(v7, v2 + 64);
        if ( *(_BYTE *)(v2 + 61) != 0 )
        {
          v8 = *(_QWORD *)v2 - v7;
          *(_QWORD *)v2 = v8;
          if ( v8 == 0 )
            goto LABEL_18;
        }
      }
    }
    while ( *_errno() == 11 );
    if ( ferror(a1) != 0 )
    {
      v9 = "read error";
      goto LABEL_27;
    }
LABEL_18:
    if ( *(_BYTE *)(dword_486010 + 60) == 0 )
      break;
    sub_42F168(a1, nullptr);
LABEL_20:
    sub_42F168(a1, nullptr);
    *_errno() = 0;
    v10 = dword_486010;
    v11 = (const char *)(dword_486010 + 64);
    v12 = sub_4044E0((char *)(dword_486010 + 64), nullptr, 16);
    *(_QWORD *)v10 = v12;
    if ( v12 < 0 || *_errno() != 0 )
      sub_41784C("bad chunk length '%s'", v11);
    if ( *(_QWORD *)v10 == 0 )
      break;
    *(_BYTE *)(v10 + 61) = 1;
  }
  v13 = dword_486010;
  *(_WORD *)(dword_486010 + 60) = 256;
  if ( *(_QWORD *)v13 != 0 )
  {
    v9 = "connection closed prematurely";
LABEL_27:
    sub_41823C(v9);
  }
  v14 = sub_443400(*(_DWORD *)(v13 + 48), 0, 1);
  if ( v14 != -1 )
    LODWORD(v14) = sub_404860(*(_DWORD *)(v13 + 48), (LARGE_INTEGER)v14);
  if ( (dword_486008 & 2) == 0 )
  {
    if ( *(_DWORD *)(v13 + 48) == 1 )
    {
      v15 = off_4730E8(2);
      LODWORD(v14) = sub_46EEFC(v15, "written to stdout\n");
    }
    else
    {
      v16 = *(const char **)(v13 + 32);
      v17 = off_4730E8(2);
      LODWORD(v14) = sub_46EEFC(v17, "'%s' saved\n", v16);
    }
  }
  return v14;
}

