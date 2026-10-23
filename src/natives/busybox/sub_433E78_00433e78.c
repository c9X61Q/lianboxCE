// busybox.exe @ 0x433e78 size=1593

char __usercall sub_433E78@<al>(int a1@<eax>)
{
  int v2; // ebp
  int v3; // eax
  int v4; // ecx
  char result; // al
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  const char *v9; // eax
  int i; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  _BYTE *v24; // esi
  unsigned __int8 v25; // [esp+10h] [ebp-22Ch]
  int v26; // [esp+10h] [ebp-22Ch]
  char Blocka; // [esp+14h] [ebp-228h]
  char *Block; // [esp+14h] [ebp-228h]
  const char *v29; // [esp+20h] [ebp-21Ch]
  int v30; // [esp+24h] [ebp-218h]
  char *v31; // [esp+28h] [ebp-214h] BYREF
  CHAR v32[100]; // [esp+2Ch] [ebp-210h] BYREF
  char v33[8]; // [esp+90h] [ebp-1ACh] BYREF
  char v34[8]; // [esp+98h] [ebp-1A4h] BYREF
  char v35[8]; // [esp+A0h] [ebp-19Ch] BYREF
  char v36[12]; // [esp+A8h] [ebp-194h] BYREF
  char v37[12]; // [esp+B4h] [ebp-188h] BYREF
  char v38[109]; // [esp+C0h] [ebp-17Ch] BYREF
  char Buf1[72]; // [esp+12Dh] [ebp-10Fh] BYREF
  char v40[8]; // [esp+175h] [ebp-C7h] BYREF
  char v41[8]; // [esp+17Dh] [ebp-BFh] BYREF
  char v42[183]; // [esp+185h] [ebp-B7h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  while ( 2 )
  {
    sub_42143C(a1, 0x200u);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          *(_DWORD *)v32 = 0;
          v3 = sub_432664(512, v32);
          if ( v3 == 0 )
          {
            if ( *(_QWORD *)(a1 + 48) == 0 )
              sub_4181F8("short read");
            return 1;
          }
          if ( v3 == 512 )
            break;
LABEL_8:
          if ( sub_443400(*(_DWORD *)(a1 + 4)) != 0 || sub_45EB54(v6, 0) != 0 )
          {
            v9 = "invalid tar magic";
            goto LABEL_28;
          }
          *(_DWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 52) = 0;
        }
        *(_QWORD *)(a1 + 48) += 512LL;
        result = v42[0] | v32[0];
        if ( (v42[0] | v32[0]) == 0 && *(_DWORD *)(a1 + 64) == 0 )
        {
          if ( *(_BYTE *)(a1 + 60) == 0 )
          {
            *(_BYTE *)(a1 + 60) = 1;
            return result;
          }
          while ( sub_432664(512, v32) == 512 )
            ;
          return 1;
        }
        *(_BYTE *)(a1 + 60) = 0;
        if ( sub_43C594(v4, "ustar") != 0 )
        {
          v8 = 256;
          v7 = 0;
        }
        else
        {
          v7 = memcmp(Buf1, &unk_478FA1, 5u);
          if ( v7 != 0 )
            goto LABEL_8;
          v8 = 256;
        }
        do
          v8 += (unsigned __int8)v32[v7++];
        while ( v7 != 148 );
        for ( i = 156; i != 512; ++i )
          v8 += (unsigned __int8)v32[i];
        v25 = v38[8];
        if ( v8 != (unsigned int)sub_4330B8(v38, 8) )
        {
          v9 = "invalid tar header checksum";
LABEL_28:
          sub_418210(v9);
        }
        if ( v40[0] != 0 )
        {
          Blocka = v42[0];
          sub_4330B8(v41, 8);
          sub_4330B8(v40, 8);
          *(_DWORD *)(v2 + 32) = 0;
          v42[0] = Blocka;
        }
        v11 = v25;
        if ( v25 == 0 )
          v11 = 48;
        *(_DWORD *)(v2 + 4) = 0;
        if ( *(_DWORD *)(a1 + 68) == 0 && (unsigned int)(v11 - 48) <= 7 && v38[9] != 0 )
          *(_DWORD *)(v2 + 4) = sub_4718A8();
        *(_DWORD *)(v2 + 28) = sub_4330B8(v37, 12);
        *(_QWORD *)(v2 + 8) = sub_4330B8(v36, 12);
        *(_DWORD *)(v2 + 20) = sub_4330B8(v35, 8);
        *(_DWORD *)(v2 + 16) = sub_4330B8(v34, 8);
        *(_WORD *)(v2 + 24) = sub_4330B8(v33, 8) & 0xFFF;
        *(_DWORD *)v2 = 0;
        if ( *(_DWORD *)(a1 + 64) != 0 || (unsigned int)(v11 - 48) > 7 )
        {
          if ( v11 == 120 )
            goto LABEL_61;
        }
        else
        {
          v33[0] = 0;
          if ( v42[0] != 0 )
          {
            v42[155] = 0;
            v13 = sub_41E9A4(v42, v32, v12);
          }
          else
          {
            v13 = sub_47188C();
          }
          *(_DWORD *)v2 = v13;
        }
        if ( v11 > 120 )
          goto LABEL_81;
        if ( v11 != 103 )
          break;
LABEL_61:
        if ( *(_QWORD *)(v2 + 8) > 0xFFFFFu )
          goto LABEL_78;
        v26 = *(_DWORD *)(v2 + 8);
        v14 = (v26 + 511) & 0xFFFFFE00;
        Block = (char *)sub_470E78();
        sub_4715C8(v14, Block);
        *(_QWORD *)(a1 + 48) += v14;
        Block[v26] = 0;
        v29 = Block;
        while ( v26 != 0 )
        {
          v15 = sub_418398(10, v29, &v31);
          v26 -= v15;
          if ( (v15 | v26) < 0 || v15 == 0 || (v30 = v15, *_errno() != 22) || *v31 != 32 )
          {
            sub_4181F8("malformed extended header, skipped");
            break;
          }
          v29 += v30;
          *((_BYTE *)v29 - 1) = 0;
          if ( v11 != 103 )
          {
            if ( sub_43C594(v16, "path=") != 0 )
            {
              free(*(void **)(a1 + 64));
              *(_DWORD *)(a1 + 64) = sub_47188C();
            }
            else if ( sub_43C594(v17, "linkpath=") != 0 )
            {
              free(*(void **)(a1 + 68));
              *(_DWORD *)(a1 + 68) = sub_47188C();
            }
          }
        }
        free(Block);
      }
      if ( v11 > 103 )
        goto LABEL_81;
      if ( v11 <= 76 )
        break;
      if ( v11 != 86 )
        goto LABEL_81;
LABEL_78:
      sub_41783C("warning: skipping header '%c'", v11);
      v19 = __PAIR64__((unsigned __int64)(*(_QWORD *)(v2 + 8) + 511LL) >> 32, (*(_DWORD *)(v2 + 8) + 511) & 0xFFFFFE00);
      *(_QWORD *)(a1 + 48) += __PAIR64__(
                                (unsigned __int64)(*(_QWORD *)(v2 + 8) + 511LL) >> 32,
                                (*(_DWORD *)(v2 + 8) + 511) & 0xFFFFFE00);
      HIDWORD(v20) = v19 >> 9;
      LODWORD(v20) = SHIDWORD(v19) >> 9;
      while ( v20 != 0 )
      {
        LODWORD(v20) = (__PAIR64__(v20, HIDWORD(v20)) - 1) >> 32;
        --HIDWORD(v20);
        sub_4715C8(512, v32);
      }
    }
    if ( v11 <= 47 )
LABEL_81:
      sub_41784C("unknown typeflag: 0x%x", v11);
    switch ( v11 )
    {
      case '0':
      case '7':
        if ( sub_43D3D4(v12, 47) != 0 )
          goto LABEL_59;
        *(_WORD *)(v2 + 24) |= 0x8000u;
        goto LABEL_82;
      case '1':
        *(_WORD *)(v2 + 24) |= 0x8000u;
        goto LABEL_56;
      case '2':
        *(_WORD *)(v2 + 24) |= 0xA000u;
        goto LABEL_56;
      case '3':
        *(_WORD *)(v2 + 24) |= 0x2000u;
        goto LABEL_56;
      case '4':
        *(_WORD *)(v2 + 24) |= 0x3000u;
        goto LABEL_56;
      case '5':
LABEL_59:
        *(_WORD *)(v2 + 24) |= 0x4000u;
        goto LABEL_56;
      case '6':
        *(_WORD *)(v2 + 24) |= 0x1000u;
LABEL_56:
        *(_DWORD *)(v2 + 8) = 0;
        *(_DWORD *)(v2 + 12) = 0;
LABEL_82:
        v21 = *(_DWORD *)(a1 + 64);
        if ( v21 != 0 )
        {
          *(_DWORD *)v2 = v21;
          *(_DWORD *)(a1 + 64) = 0;
        }
        v22 = *(_DWORD *)(a1 + 68);
        if ( v22 != 0 )
        {
          *(_DWORD *)(v2 + 4) = v22;
          *(_DWORD *)(a1 + 68) = 0;
        }
        sub_4638F8();
        sub_448258();
        v24 = (_BYTE *)sub_43D3D4(v23, 47);
        if ( (*(unsigned __int8 (**)(void))(a1 + 8))() != 0 )
        {
          sub_4218F4(a1);
        }
        else
        {
          (*(void (**)(void))(a1 + 32))();
          if ( v24 != nullptr )
            *v24 = 0;
          (*(void (**)(void))(a1 + 36))();
          if ( *(_DWORD *)(a1 + 12) != 0 || *(_DWORD *)(a1 + 16) != 0 || _bittest((const signed __int32 *)a1, 8u) )
          {
            sub_43E368();
            goto LABEL_95;
          }
        }
        free(*(void **)v2);
LABEL_95:
        *(_QWORD *)(a1 + 48) += *(_QWORD *)(v2 + 8);
        free(*(void **)(v2 + 4));
        result = 0;
        break;
      case 'K':
        free(*(void **)(a1 + 68));
        v18 = sub_4728CC();
        *(_DWORD *)(a1 + 68) = v18;
        goto LABEL_77;
      case 'L':
        free(*(void **)(a1 + 64));
        v18 = sub_4728CC();
        *(_DWORD *)(a1 + 64) = v18;
LABEL_77:
        sub_4715C8(*(_DWORD *)(v2 + 8), v18);
        *(_QWORD *)(a1 + 48) += *(_QWORD *)(v2 + 8);
        continue;
      default:
        goto LABEL_81;
    }
    return result;
  }
}

