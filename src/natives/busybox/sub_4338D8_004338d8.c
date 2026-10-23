// busybox.exe @ 0x4338d8 size=544

char __usercall sub_4338D8@<al>(int a1@<eax>)
{
  int *v2; // ebp
  const char *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // esi
  int v10; // [esp+10h] [ebp-50h]
  CHAR MultiByteStr; // [esp+14h] [ebp-4Ch] BYREF
  _BYTE Src[58]; // [esp+15h] [ebp-4Bh] BYREF
  char v13; // [esp+4Fh] [ebp-11h]

  v2 = *(int **)(a1 + 24);
  if ( sub_46F148(*(_DWORD *)(a1 + 4), &MultiByteStr, 60) != 60 )
    return 1;
  if ( MultiByteStr == 10 )
  {
    memmove(&MultiByteStr, Src, 0x3Bu);
    v13 = sub_4715E8();
    ++*(_QWORD *)(a1 + 48);
  }
  *(_QWORD *)(a1 + 48) += 60LL;
  if ( Src[57] != 96 || v13 != 10 )
  {
    v3 = "invalid ar header";
    goto LABEL_16;
  }
  v4 = sub_457C90(10, 10);
  v5 = v4;
  v2[2] = v4;
  v2[3] = 0;
  if ( MultiByteStr == 47 )
  {
    if ( Src[0] == 32 )
    {
      sub_4218F4(a1);
LABEL_12:
      *(_QWORD *)(a1 + 48) += (unsigned int)v5;
      return sub_4338D8();
    }
    if ( Src[0] == 47 )
    {
      *(_DWORD *)(a1 + 120) = v4;
      v10 = v4;
      free(*(void **)(a1 + 116));
      v6 = sub_4728CC();
      *(_DWORD *)(a1 + 116) = v6;
      sub_4715C8(v10, v6);
      goto LABEL_12;
    }
  }
  *((_WORD *)v2 + 12) = sub_457C90(8, 8);
  v2[5] = sub_457C90(6, 10);
  v2[4] = sub_457C90(6, 10);
  v2[7] = sub_457C90(12, 10);
  if ( MultiByteStr == 47 )
  {
    if ( *(_DWORD *)(a1 + 120) <= (unsigned int)sub_457C90(15, 10) )
    {
      v3 = "can't resolve long filename";
LABEL_16:
      sub_418210(v3);
    }
    v8 = sub_47188C();
  }
  else
  {
    v8 = sub_4718A8();
  }
  *v2 = v8;
  v9 = *v2;
  *(_BYTE *)(v9 + strcspn((const char *)*v2, " /")) = 0;
  if ( (*(unsigned __int8 (**)(void))(a1 + 8))() != 0 )
  {
    sub_4218F4(a1);
  }
  else
  {
    (*(void (**)(void))(a1 + 32))();
    if ( *(_DWORD *)(a1 + 104) != 0 )
    {
      while ( (*(unsigned __int8 (**)(void))(a1 + 100))() == 0 )
        ;
    }
    else
    {
      (*(void (**)(void))(a1 + 36))();
    }
  }
  *(_QWORD *)(a1 + 48) += *((_QWORD *)v2 + 1);
  sub_443400(*(_DWORD *)(a1 + 4));
  return 0;
}

