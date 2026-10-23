// lian86.exe @ 0x00411550  size=620  name=sub_411550
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned int __cdecl sub_411550(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // ecx
  unsigned int v7; // esi
  unsigned __int8 *v9; // edi
  int v10; // eax
  unsigned int v11; // ebp
  int i; // edx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // esi
  unsigned int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // ecx
  int v26; // esi
  unsigned int v27; // ecx
  int v28; // esi
  unsigned int v29; // ecx
  int v30; // esi
  int v31; // ecx
  int v32; // esi
  int v33; // ecx
  int v34; // esi
  int v35; // ecx
  int v36; // esi
  int v37; // ecx
  int v38; // esi
  int v39; // ecx
  int v40; // esi
  int v41; // ecx
  int v42; // eax
  int v43; // esi
  unsigned int v44; // edx
  unsigned int v45; // ecx
  unsigned int v46; // esi
  unsigned int v47; // ecx
  unsigned int v48; // esi
  unsigned int v49; // ecx
  unsigned int v50; // esi
  unsigned int v51; // ecx
  unsigned int v52; // esi
  unsigned int v53; // ecx
  unsigned int v54; // esi
  unsigned int v55; // ecx
  unsigned int v56; // esi
  unsigned int v57; // ecx
  int v58; // esi
  unsigned int v59; // ecx
  int v60; // esi
  unsigned int v61; // ecx
  int v62; // esi
  int v63; // ecx
  int v64; // esi
  int v65; // ecx
  int v66; // esi
  int v67; // ecx
  int v68; // esi
  int v69; // ecx
  int v70; // esi
  int v71; // ecx
  int v72; // esi
  int v73; // ecx
  int v74; // eax
  int v75; // esi
  int v76; // eax

  v3 = a3;
  v4 = (unsigned __int16)a1;
  v5 = HIWORD(a1);
  if ( a3 == 1 )
  {
    v6 = *a2 + (unsigned __int16)a1;
    if ( v6 >= 0xFFF1 )
      v6 -= 65521;
    v7 = v6 + v5;
    if ( v7 >= 0xFFF1 )
      v7 -= 65521;
    return v6 | (v7 << 16);
  }
  else
  {
    v9 = a2;
    if ( a2 != nullptr )
    {
      if ( a3 >= 0x10 )
      {
        if ( a3 >= 0x15B0 )
        {
          v11 = a3 / 0x15B0;
          do
          {
            v3 -= 5552;
            for ( i = 347; i != 0; --i )
            {
              v13 = *v9 + v4;
              v14 = v13 + v5;
              v15 = v9[1] + v13;
              v16 = v15 + v14;
              v17 = v9[2] + v15;
              v18 = v17 + v16;
              v19 = v9[3] + v17;
              v20 = v19 + v18;
              v21 = v9[4] + v19;
              v22 = v21 + v20;
              v23 = v9[5] + v21;
              v24 = v23 + v22;
              v25 = v9[6] + v23;
              v26 = v25 + v24;
              v27 = v9[7] + v25;
              v28 = v27 + v26;
              v29 = v9[8] + v27;
              v30 = v29 + v28;
              v31 = v9[9] + v29;
              v32 = v31 + v30;
              v33 = v9[10] + v31;
              v34 = v33 + v32;
              v35 = v9[11] + v33;
              v36 = v35 + v34;
              v37 = v9[12] + v35;
              v38 = v37 + v36;
              v39 = v9[13] + v37;
              v40 = v39 + v38;
              v41 = v9[14] + v39;
              v42 = v9[15];
              v43 = v41 + v40;
              v9 += 16;
              v4 = v42 + v41;
              v5 = v4 + v43;
            }
            v4 %= 0xFFF1u;
            v5 %= 0xFFF1u;
            --v11;
          }
          while ( v11 != 0 );
        }
        if ( v3 != 0 )
        {
          if ( v3 >= 0x10 )
          {
            v44 = v3 >> 4;
            do
            {
              v3 -= 16;
              v45 = *v9 + v4;
              v46 = v45 + v5;
              v47 = v9[1] + v45;
              v48 = v47 + v46;
              v49 = v9[2] + v47;
              v50 = v49 + v48;
              v51 = v9[3] + v49;
              v52 = v51 + v50;
              v53 = v9[4] + v51;
              v54 = v53 + v52;
              v55 = v9[5] + v53;
              v56 = v55 + v54;
              v57 = v9[6] + v55;
              v58 = v57 + v56;
              v59 = v9[7] + v57;
              v60 = v59 + v58;
              v61 = v9[8] + v59;
              v62 = v61 + v60;
              v63 = v9[9] + v61;
              v64 = v63 + v62;
              v65 = v9[10] + v63;
              v66 = v65 + v64;
              v67 = v9[11] + v65;
              v68 = v67 + v66;
              v69 = v9[12] + v67;
              v70 = v69 + v68;
              v71 = v9[13] + v69;
              v72 = v71 + v70;
              v73 = v9[14] + v71;
              v74 = v9[15];
              v75 = v73 + v72;
              v9 += 16;
              v4 = v74 + v73;
              v5 = v4 + v75;
              --v44;
            }
            while ( v44 != 0 );
          }
          for ( ; v3 != 0; --v3 )
          {
            v76 = *v9++;
            v4 += v76;
            v5 += v4;
          }
          v4 %= 0xFFF1u;
          v5 %= 0xFFF1u;
        }
        return v4 | (v5 << 16);
      }
      else
      {
        if ( a3 != 0 )
        {
          do
          {
            v10 = *v9++;
            v4 += v10;
            v5 += v4;
            --v3;
          }
          while ( v3 != 0 );
        }
        if ( v4 >= 0xFFF1 )
          v4 -= 65521;
        return v4 | ((v5 + 15 * (v5 / 0xFFF1)) << 16);
      }
    }
    else
    {
      return 1;
    }
  }
}

