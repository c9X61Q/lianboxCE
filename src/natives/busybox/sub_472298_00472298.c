// busybox.exe @ 0x472298 size=1506

int __usercall sub_472298@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  unsigned __int8 v15; // al
  int v16; // ecx
  int v17; // ecx
  int i; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // esi
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned int v32; // ecx
  size_t Size; // ecx
  int v34; // eax
  int v35; // edx
  unsigned int v36; // esi
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // esi
  unsigned int v43; // edx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned int v48; // esi
  unsigned int v49; // ecx
  int v50; // edi
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // edx
  int v55; // [esp+Ch] [ebp-18h]
  int v56; // [esp+Ch] [ebp-18h]
  int v57; // [esp+Ch] [ebp-18h]
  unsigned int v58; // [esp+Ch] [ebp-18h]
  unsigned int v59; // [esp+10h] [ebp-14h]
  unsigned int v60; // [esp+10h] [ebp-14h]

  while ( 2 )
  {
    while ( 1 )
    {
      v4 = a2[1];
      v5 = a2[2];
      v6 = *(_DWORD *)(a1 + 64);
LABEL_2:
      if ( v4 < v5 )
        break;
      if ( v6 != 7 )
        return 0;
LABEL_41:
      v22 = a2[5] - a2[4];
      if ( v22 > *(_DWORD *)(a1 + 72) )
        v22 = *(_DWORD *)(a1 + 72);
      v23 = *(_DWORD *)(a1 + 44);
      v24 = *(_DWORD *)(a1 + 32);
      if ( v22 < v23 - v24 )
        v23 = v22 + v24;
      *(_DWORD *)(a1 + 40) = v23;
      v25 = *(_DWORD *)(a1 + 28388);
      v26 = *(_DWORD *)(a1 + 76);
      if ( v25 != 0 || v26 == 0 )
      {
        v27 = a2[1];
        v28 = v26 - v25;
        if ( v28 > 42 - v25 )
          v28 = 42 - v25;
        v29 = v5 - v27;
        if ( v29 > v28 )
          v29 = v28;
        v56 = a1 + 28392;
        qmemcpy((void *)(a1 + 28392 + v25), (const void *)(*a2 + v27), v29);
        v30 = v29 + *(_DWORD *)(a1 + 28388);
        if ( v30 == *(_DWORD *)(a1 + 76) )
        {
          memset((void *)(v56 + v30), 0, 63 - v30);
          *(_DWORD *)(a1 + 20) = v29 + *(_DWORD *)(a1 + 28388);
        }
        else
        {
          if ( v30 <= 0x14 )
          {
            *(_DWORD *)(a1 + 28388) = v30;
            a2[1] += v29;
            goto LABEL_71;
          }
          *(_DWORD *)(a1 + 20) = v30 - 21;
        }
        v59 = v29;
        *(_DWORD *)(a1 + 12) = a1 + 28392;
        *(_DWORD *)(a1 + 16) = 0;
        if ( sub_43F198(a1) == 0 )
          return 7;
        v31 = *(_DWORD *)(a1 + 16);
        v32 = *(_DWORD *)(a1 + 28388);
        if ( v31 > v32 + v59 )
          return 7;
        *(_DWORD *)(a1 + 76) -= v31;
        if ( v31 < v32 )
        {
          Size = v32 - v31;
          *(_DWORD *)(a1 + 28388) = Size;
          memmove((void *)(a1 + 28392), (const void *)(v56 + v31), Size);
          goto LABEL_71;
        }
        a2[1] = a2[1] + v31 - v32;
        *(_DWORD *)(a1 + 28388) = 0;
      }
      v34 = a2[2];
      v35 = a2[1];
      v36 = v34 - v35;
      if ( (unsigned int)(v34 - v35) > 0x14 )
      {
        *(_DWORD *)(a1 + 12) = *a2;
        *(_DWORD *)(a1 + 16) = v35;
        v37 = *(_DWORD *)(a1 + 76);
        v38 = v34 - 21;
        if ( v36 >= v37 + 21 )
          v38 = v35 + v37;
        *(_DWORD *)(a1 + 20) = v38;
        if ( sub_43F198(a1) == 0 )
          return 7;
        v39 = *(_DWORD *)(a1 + 16);
        v40 = a2[1];
        v41 = *(_DWORD *)(a1 + 76);
        if ( v39 - v40 > v41 )
          return 7;
        *(_DWORD *)(a1 + 76) = v41 + v40 - v39;
        a2[1] = v39;
      }
      v42 = a2[1];
      v43 = a2[2] - v42;
      if ( v43 <= 0x14 )
      {
        v44 = *(_DWORD *)(a1 + 76);
        if ( v44 > v43 )
          v44 = a2[2] - v42;
        qmemcpy((void *)(a1 + 28392), (const void *)(*a2 + v42), v44);
        *(_DWORD *)(a1 + 28388) = v44;
        a2[1] += v44;
      }
LABEL_71:
      v57 = *(_DWORD *)(a1 + 32);
      v45 = *(_DWORD *)(a1 + 28);
      if ( v57 == *(_DWORD *)(a1 + 44) )
        *(_DWORD *)(a1 + 32) = 0;
      qmemcpy((void *)(a2[3] + a2[4]), (const void *)(v45 + *(_DWORD *)(a1 + 24)), v57 - v45);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 32);
      v46 = a2[4] + v57 - v45;
      a2[4] = v46;
      v47 = *(_DWORD *)(a1 + 72) + v45 - v57;
      *(_DWORD *)(a1 + 72) = v47;
      if ( v47 != 0 )
      {
        if ( a2[5] == v46 || a2[1] == a2[2] && *(_DWORD *)(a1 + 28388) < *(_DWORD *)(a1 + 76) )
          return 0;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 76) != 0 || *(_DWORD *)(a1 + 104) != 0 || *(_DWORD *)(a1 + 4) != 0 )
          return 7;
        *(_DWORD *)a1 = -1;
        *(_DWORD *)(a1 + 8) = 5;
LABEL_99:
        *(_DWORD *)(a1 + 64) = 0;
      }
    }
    switch ( v6 )
    {
      case 0:
        v7 = *a2;
        a2[1] = v4 + 1;
        v8 = *(unsigned __int8 *)(v7 + v4);
        if ( v8 == 0 )
          return 1;
        if ( v8 > 0xDF || v8 == 1 )
        {
          *(_WORD *)(a1 + 80) = 256;
          *(_DWORD *)(a1 + 28) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          *(_DWORD *)(a1 + 36) = 0;
        }
        else if ( *(_BYTE *)(a1 + 80) != 0 )
        {
          return 7;
        }
        if ( v8 <= 0x7F )
        {
          if ( v8 > 2 )
            return 7;
          *(_DWORD *)(a1 + 64) = 3;
          *(_DWORD *)(a1 + 68) = 8;
        }
        else
        {
          *(_DWORD *)(a1 + 72) = (v8 << 16) & 0x1F0000;
          *(_DWORD *)(a1 + 64) = 1;
          if ( v8 <= 0xBF )
          {
            if ( *(_BYTE *)(a1 + 81) != 0 )
              return 7;
            *(_DWORD *)(a1 + 68) = 6;
            if ( v8 > 0x9F )
            {
              *(_DWORD *)(a1 + 100) = 0;
              *(_DWORD *)(a1 + 84) = 0;
              *(_DWORD *)(a1 + 88) = 0;
              *(_DWORD *)(a1 + 92) = 0;
              *(_DWORD *)(a1 + 96) = 0;
              do
                *(_WORD *)(a1 + 2 * v6++ + 120) = 1024;
              while ( v6 != 14134 );
              *(_DWORD *)a1 = -1;
              *(_DWORD *)(a1 + 4) = 0;
              *(_DWORD *)(a1 + 8) = 5;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 81) = 0;
            *(_DWORD *)(a1 + 68) = 5;
          }
        }
        continue;
      case 1:
        v10 = *a2;
        a2[1] = v4 + 1;
        *(_DWORD *)(a1 + 72) += *(unsigned __int8 *)(v10 + v4) << 8;
        *(_DWORD *)(a1 + 64) = 2;
        continue;
      case 2:
        v11 = *a2;
        a2[1] = v4 + 1;
        *(_DWORD *)(a1 + 72) += *(unsigned __int8 *)(v11 + v4) + 1;
        *(_DWORD *)(a1 + 64) = 3;
        continue;
      case 3:
        v12 = *a2;
        a2[1] = v4 + 1;
        *(_DWORD *)(a1 + 76) = *(unsigned __int8 *)(v12 + v4) << 8;
        *(_DWORD *)(a1 + 64) = 4;
        continue;
      case 4:
        v13 = *a2;
        a2[1] = v4 + 1;
        *(_DWORD *)(a1 + 76) += *(unsigned __int8 *)(v13 + v4) + 1;
        *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 68);
        continue;
      case 5:
        v14 = *a2;
        a2[1] = v4 + 1;
        v15 = *(_BYTE *)(v14 + v4);
        if ( v15 > 0xE0u )
          return 7;
        for ( *(_DWORD *)(a1 + 116) = 0; ; *(_DWORD *)(a1 + 116) = v16 + 1 )
        {
          v16 = *(_DWORD *)(a1 + 116);
          if ( v15 <= 0x2Cu )
            break;
          v15 -= 45;
        }
        *(_DWORD *)(a1 + 116) = (1 << v16) - 1;
        for ( *(_DWORD *)(a1 + 112) = 0; ; *(_DWORD *)(a1 + 112) = v17 + 1 )
        {
          v17 = *(_DWORD *)(a1 + 112);
          if ( v15 <= 8u )
            break;
          v15 -= 9;
        }
        *(_DWORD *)(a1 + 108) = v15;
        if ( v17 + (unsigned int)v15 > 4 )
          return 7;
        *(_DWORD *)(a1 + 112) = (1 << v17) - 1;
        *(_DWORD *)(a1 + 100) = 0;
        *(_DWORD *)(a1 + 84) = 0;
        *(_DWORD *)(a1 + 88) = 0;
        *(_DWORD *)(a1 + 92) = 0;
        *(_DWORD *)(a1 + 96) = 0;
        for ( i = 0; i != 14134; ++i )
          *(_WORD *)(a1 + 2 * i + 120) = 1024;
        *(_DWORD *)a1 = -1;
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)(a1 + 8) = 5;
        *(_DWORD *)(a1 + 64) = 6;
        goto LABEL_35;
      case 6:
LABEL_35:
        v19 = *(_DWORD *)(a1 + 76);
        if ( v19 <= 4 )
          return 7;
        while ( 2 )
        {
          v20 = *(_DWORD *)(a1 + 8);
          if ( v20 == 0 )
          {
            *(_DWORD *)(a1 + 76) = v19 - 5;
            *(_DWORD *)(a1 + 64) = 7;
            goto LABEL_41;
          }
          v21 = a2[1];
          if ( v5 != v21 )
          {
            v55 = *(_DWORD *)(a1 + 4) << 8;
            a2[1] = v21 + 1;
            *(_DWORD *)(a1 + 4) = v55 + *(unsigned __int8 *)(*a2 + v21);
            *(_DWORD *)(a1 + 8) = v20 - 1;
            continue;
          }
          return 0;
        }
      case 7:
        goto LABEL_41;
      case 8:
        while ( 2 )
        {
          v54 = *(_DWORD *)(a1 + 76);
          if ( v54 == 0 )
            goto LABEL_99;
          v60 = a2[2];
          v58 = a2[1];
          if ( v58 < v60 )
          {
            v48 = a2[4];
            v49 = a2[5];
            if ( v49 > v48 )
            {
              v50 = *(_DWORD *)(a1 + 32);
              v51 = *(_DWORD *)(a1 + 44) - v50;
              if ( v51 > v54 )
                v51 = *(_DWORD *)(a1 + 76);
              v52 = v49 - v48;
              if ( v51 > v52 )
                v51 = v52;
              if ( v51 > v60 - v58 )
                v51 = v60 - v58;
              *(_DWORD *)(a1 + 76) = v54 - v51;
              qmemcpy((void *)(*(_DWORD *)(a1 + 24) + v50), (const void *)(*a2 + a2[1]), v51);
              v53 = v51 + *(_DWORD *)(a1 + 32);
              *(_DWORD *)(a1 + 32) = v53;
              if ( v53 > *(_DWORD *)(a1 + 36) )
                *(_DWORD *)(a1 + 36) = v53;
              if ( v53 == *(_DWORD *)(a1 + 44) )
                *(_DWORD *)(a1 + 32) = 0;
              qmemcpy((void *)(a2[3] + a2[4]), (const void *)(*a2 + a2[1]), v51);
              *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 32);
              a2[4] += v51;
              a2[1] += v51;
              continue;
            }
          }
          return 0;
        }
      default:
        goto LABEL_2;
    }
  }
}

