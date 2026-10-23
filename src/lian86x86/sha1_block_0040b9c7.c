// lian86.exe @ 0x0040b9c7  size=4847  name=sha1_block
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sha1_block(_DWORD *a1, void *Src, _DWORD *a3)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int v16; // esi
  int v17; // ebx
  int v18; // eax
  int v19; // edi
  int v20; // ebp
  int v21; // eax
  int v22; // ebx
  int v23; // edx
  int v24; // eax
  int v25; // ebp
  int v26; // esi
  int v27; // eax
  int v28; // edx
  int v29; // edi
  int v30; // eax
  int v31; // esi
  int v32; // ebx
  int v33; // eax
  int v34; // edi
  int v35; // ebp
  int v36; // edx
  int v37; // ebx
  int v38; // ebp
  int v39; // ecx
  int v40; // esi
  int v41; // edi
  int v42; // edx
  int v43; // ebp
  int v44; // ebx
  int v45; // edx
  int v46; // esi
  int v47; // ecx
  int v48; // edx
  int v49; // ebp
  int v50; // edi
  int v51; // eax
  int v52; // ebx
  int v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // ebp
  int v57; // esi
  int v58; // eax
  int v59; // edi
  int v60; // edx
  int v61; // eax
  int v62; // esi
  int v63; // ebx
  int v64; // eax
  int v65; // edx
  int v66; // eax
  int v67; // edi
  int v68; // ebp
  int v69; // edx
  int v70; // eax
  int v71; // ebx
  int v72; // edx
  int v73; // eax
  int v74; // ebp
  int v75; // edx
  int v76; // esi
  int v77; // edx
  int v78; // edi
  int v79; // ecx
  int v80; // edx
  int v81; // ebx
  int v82; // edx
  int v83; // ebp
  int v84; // edx
  int v85; // esi
  int v86; // edx
  int v87; // edi
  int v88; // edx
  int v89; // ebx
  int v90; // ecx
  int v91; // ebp
  int v92; // edx
  int v93; // edx
  int v94; // ebp
  int v95; // esi
  int v96; // ecx
  int v97; // edx
  int v98; // edi
  int v99; // edx
  int v100; // eax
  int v101; // ebx
  int v102; // ebp
  int v103; // eax
  int v104; // esi
  int v105; // edx
  int v106; // eax
  int v107; // ebp
  int v108; // edx
  int v109; // edi
  int v110; // edx
  int v111; // ebx
  int v112; // esi
  int v113; // eax
  int v114; // ebp
  int v115; // esi
  int v116; // ecx
  int v117; // edi
  int v118; // esi
  int v119; // eax
  int v120; // ebx
  int v121; // esi
  int v122; // eax
  int v123; // ebp
  int v124; // esi
  int v125; // edi
  int v126; // esi
  int v127; // eax
  int v128; // ebx
  int v129; // esi
  int v130; // eax
  int v131; // ebp
  int v132; // esi
  int v133; // eax
  int v134; // edi
  int v135; // esi
  int v136; // eax
  int v137; // ebx
  int v138; // esi
  int v139; // eax
  int v140; // ebp
  int v141; // esi
  int v142; // eax
  int v143; // ecx
  int v144; // edi
  int v145; // ecx
  int v146; // ebx
  int v147; // esi
  int v148; // eax
  int v149; // ebp
  int v150; // esi
  int v151; // edi
  int v152; // esi
  int v153; // eax
  int v154; // ebx
  int v155; // esi
  int v156; // ecx
  int v157; // ebp
  int v158; // esi
  int v159; // edi
  int v160; // esi
  int v161; // ebx
  int v162; // esi
  int v163; // ecx
  int v164; // esi
  int v165; // ebp
  int v166; // esi
  int v167; // edx
  int v168; // eax
  int v169; // edi
  int v170; // eax
  int v171; // edx
  int v172; // eax
  int v173; // esi
  int v174; // ebx
  int v175; // eax
  int v176; // edx
  int v177; // eax
  int v178; // edi
  int v179; // ebp
  int v180; // edx
  int v181; // ebx
  int v182; // edx
  int v183; // eax
  int v184; // ebp
  int v185; // edx
  int v186; // esi
  int v187; // edx
  int v188; // edi
  int v189; // edx
  int v190; // eax
  int v191; // ebp
  int v192; // ebx
  int v193; // ecx
  int v194; // eax
  int v195; // esi
  int v196; // edx
  int v197; // eax
  _DWORD *v198; // edi
  int v199; // edx
  int v200; // ebp
  int v201; // ebx
  int v202; // edx
  int v203; // ebx
  int v204; // edx
  int v205; // edi
  int v206; // edx
  int v207; // esi
  int v208; // edx
  int v209; // ebp
  int v210; // edx
  int v211; // ebx
  int v212; // edx
  int v213; // eax
  int v214; // ebp
  int v215; // edi
  int v216; // edx
  int v217; // eax
  int v218; // ebx
  int v219; // esi
  int v220; // edx
  int v221; // eax
  int v222; // edi
  int v223; // edx
  int v224; // eax
  int result; // eax
  unsigned int v226; // [esp+0h] [ebp-4Ch]
  int v227; // [esp+0h] [ebp-4Ch]
  int v228; // [esp+0h] [ebp-4Ch]
  unsigned int v229; // [esp+4h] [ebp-48h]
  int v230; // [esp+4h] [ebp-48h]
  int v231; // [esp+4h] [ebp-48h]
  int v232; // [esp+4h] [ebp-48h]
  int v233; // [esp+4h] [ebp-48h]
  int v234; // [esp+4h] [ebp-48h]
  int v235; // [esp+4h] [ebp-48h]
  int v236; // [esp+4h] [ebp-48h]
  unsigned int v237; // [esp+8h] [ebp-44h]
  int v238; // [esp+8h] [ebp-44h]
  unsigned int v239; // [esp+Ch] [ebp-40h]
  int v240; // [esp+Ch] [ebp-40h]
  unsigned int v241; // [esp+10h] [ebp-3Ch]
  unsigned int v242; // [esp+14h] [ebp-38h]
  unsigned int v243; // [esp+18h] [ebp-34h]
  unsigned int v244; // [esp+1Ch] [ebp-30h]
  int v245; // [esp+1Ch] [ebp-30h]
  int v246; // [esp+20h] [ebp-2Ch]
  unsigned int v247; // [esp+20h] [ebp-2Ch]
  int v248; // [esp+20h] [ebp-2Ch]
  int v249; // [esp+20h] [ebp-2Ch]
  int v250; // [esp+24h] [ebp-28h]
  int v251; // [esp+24h] [ebp-28h]
  int v252; // [esp+24h] [ebp-28h]
  unsigned int v253; // [esp+28h] [ebp-24h]
  int v254; // [esp+28h] [ebp-24h]
  unsigned int v255; // [esp+2Ch] [ebp-20h]
  int v256; // [esp+2Ch] [ebp-20h]
  unsigned int v257; // [esp+30h] [ebp-1Ch]
  int v258; // [esp+30h] [ebp-1Ch]
  int v259; // [esp+30h] [ebp-1Ch]
  int v260; // [esp+30h] [ebp-1Ch]
  unsigned int v261; // [esp+34h] [ebp-18h]
  int v262; // [esp+34h] [ebp-18h]
  int v263; // [esp+34h] [ebp-18h]
  int v264; // [esp+34h] [ebp-18h]
  int v265; // [esp+34h] [ebp-18h]
  int v266; // [esp+34h] [ebp-18h]
  unsigned int v267; // [esp+38h] [ebp-14h]
  int v268; // [esp+38h] [ebp-14h]
  int v269; // [esp+38h] [ebp-14h]
  int v270; // [esp+38h] [ebp-14h]
  int v271; // [esp+38h] [ebp-14h]
  int v272; // [esp+38h] [ebp-14h]
  int v273; // [esp+38h] [ebp-14h]
  unsigned int v274; // [esp+3Ch] [ebp-10h]
  int v275; // [esp+3Ch] [ebp-10h]
  int v276; // [esp+3Ch] [ebp-10h]
  unsigned int v277; // [esp+40h] [ebp-Ch]
  int v278; // [esp+40h] [ebp-Ch]
  int v279; // [esp+40h] [ebp-Ch]
  int v280; // [esp+40h] [ebp-Ch]
  int v281; // [esp+40h] [ebp-Ch]
  int v282; // [esp+40h] [ebp-Ch]
  int v283; // [esp+40h] [ebp-Ch]
  int v284; // [esp+40h] [ebp-Ch]
  int v285; // [esp+44h] [ebp-8h]
  int v286; // [esp+44h] [ebp-8h]
  int v287; // [esp+44h] [ebp-8h]
  int v288; // [esp+44h] [ebp-8h]
  int v289; // [esp+44h] [ebp-8h]
  int v290; // [esp+44h] [ebp-8h]
  int v291; // [esp+44h] [ebp-8h]
  int v292; // [esp+44h] [ebp-8h]
  int v293; // [esp+44h] [ebp-8h]
  int v294; // [esp+44h] [ebp-8h]
  int v295; // [esp+48h] [ebp-4h]
  int v296; // [esp+48h] [ebp-4h]
  int v297; // [esp+48h] [ebp-4h]
  int v298; // [esp+48h] [ebp-4h]
  int v299; // [esp+48h] [ebp-4h]
  int v300; // [esp+48h] [ebp-4h]
  int v301; // [esp+48h] [ebp-4h]
  int v302; // [esp+48h] [ebp-4h]
  int v303; // [esp+48h] [ebp-4h]
  int v304; // [esp+48h] [ebp-4h]
  int v305; // [esp+48h] [ebp-4h]
  int v306; // [esp+48h] [ebp-4h]

  if ( a3 != nullptr )
  {
    memcpy(a3, Src, 0x40u);
    v3 = a3;
  }
  else
  {
    v3 = Src;
    a3 = Src;
  }
  v274 = __ROL4__(*v3, 8) & 0xFF00FF | __ROR4__(*v3, 8) & 0xFF00FF00;
  v4 = a1[1];
  v5 = a1[3];
  v6 = a1[2];
  v7 = v5 ^ v4 & (v6 ^ v5);
  v8 = __ROR4__(v4, 2);
  v9 = v274 + __ROL4__(*a1, 5) + v7 + a1[4] + 1518500249;
  v277 = __ROL4__(a3[1], 8) & 0xFF00FF | __ROR4__(a3[1], 8) & 0xFF00FF00;
  v10 = __ROR4__(*a1, 2);
  v11 = v277 + __ROL4__(v9, 5) + (v6 ^ *a1 & (v8 ^ v6)) + v5 + 1518500249;
  v253 = __ROL4__(a3[2], 8) & 0xFF00FF | __ROR4__(a3[2], 8) & 0xFF00FF00;
  v12 = v253 + __ROL4__(v11, 5) + (v8 ^ v9 & (v10 ^ v8));
  v13 = __ROR4__(v9, 2);
  v14 = v12 + v6 + 1518500249;
  v229 = __ROL4__(a3[3], 8) & 0xFF00FF | __ROR4__(a3[3], 8) & 0xFF00FF00;
  v15 = v10 ^ v11 & (v10 ^ v13);
  v16 = __ROR4__(v11, 2);
  v17 = v229 + __ROL4__(v14, 5) + v15 + v8 + 1518500249;
  v226 = __ROL4__(a3[4], 8) & 0xFF00FF | __ROR4__(a3[4], 8) & 0xFF00FF00;
  v18 = v226 + __ROL4__(v17, 5) + (v13 ^ v14 & (v16 ^ v13));
  v19 = __ROR4__(v14, 2);
  v20 = v18 + v10 + 1518500249;
  v255 = __ROL4__(a3[5], 8) & 0xFF00FF | __ROR4__(a3[5], 8) & 0xFF00FF00;
  v21 = v16 ^ v17 & (v19 ^ v16);
  v22 = __ROR4__(v17, 2);
  v23 = v255 + __ROL4__(v20, 5) + 1518500249 + v21 + v13;
  v257 = __ROL4__(a3[6], 8) & 0xFF00FF | __ROR4__(a3[6], 8) & 0xFF00FF00;
  v24 = v19 ^ v20 & (v22 ^ v19);
  v25 = __ROR4__(v20, 2);
  v26 = v257 + __ROL4__(v23, 5) + 1518500249 + v24 + v16;
  v261 = __ROL4__(a3[7], 8) & 0xFF00FF | __ROR4__(a3[7], 8) & 0xFF00FF00;
  v27 = v261 + __ROL4__(v26, 5) + 1518500249 + (v22 ^ v23 & (v25 ^ v22));
  v28 = __ROR4__(v23, 2);
  v29 = v27 + v19;
  v239 = __ROL4__(a3[8], 8) & 0xFF00FF | __ROR4__(a3[8], 8) & 0xFF00FF00;
  v30 = v25 ^ v26 & (v25 ^ v28);
  v31 = __ROR4__(v26, 2);
  v32 = v239 + __ROL4__(v29, 5) + 1518500249 + v30 + v22;
  v237 = __ROL4__(a3[9], 8) & 0xFF00FF | __ROR4__(a3[9], 8) & 0xFF00FF00;
  v33 = v28 ^ v29 & (v31 ^ v28);
  v34 = __ROR4__(v29, 2);
  v35 = v237 + __ROL4__(v32, 5) + 1518500249 + v33 + v25;
  v241 = __ROL4__(a3[10], 8) & 0xFF00FF | __ROR4__(a3[10], 8) & 0xFF00FF00;
  v250 = v28 + 1518500249 + (v31 ^ v32 & (v34 ^ v31)) + v241 + __ROL4__(v35, 5);
  v246 = __ROR4__(v32, 2);
  v267 = __ROL4__(a3[11], 8) & 0xFF00FF | __ROR4__(a3[11], 8) & 0xFF00FF00;
  v285 = __ROR4__(v35, 2);
  v36 = v31 + 1518500249 + (v34 ^ v35 & (v246 ^ v34)) + __ROL4__(v250, 5) + v267;
  v242 = __ROL4__(a3[12], 8) & 0xFF00FF | __ROR4__(a3[12], 8) & 0xFF00FF00;
  v37 = v34 + 1518500249 + v242 + __ROL4__(v36, 5) + (v250 & (v285 ^ v246) ^ v246);
  v251 = __ROR4__(v250, 2);
  v243 = __ROL4__(a3[13], 8) & 0xFF00FF | __ROR4__(a3[13], 8) & 0xFF00FF00;
  v295 = __ROR4__(v36, 2);
  v38 = v246 + 1518500249 + v243 + __ROL4__(v37, 5) + (v36 & (v285 ^ v251) ^ v285);
  v244 = __ROL4__(a3[14], 8) & 0xFF00FF | __ROR4__(a3[14], 8) & 0xFF00FF00;
  v39 = v285 + 1518500249;
  v286 = __ROR4__(v37, 2);
  v40 = v39 + v244 + __ROL4__(v38, 5) + (v37 & (v295 ^ v251) ^ v251);
  v247 = __ROL4__(a3[15], 8) & 0xFF00FF | __ROR4__(a3[15], 8) & 0xFF00FF00;
  v41 = v251 + 1518500249 + (v295 ^ v38 & (v286 ^ v295)) + __ROL4__(v40, 5) + v247;
  v42 = __ROL4__(v239 ^ v243 ^ v274 ^ v253, 1);
  v43 = __ROR4__(v38, 2);
  *a3 = v42;
  v44 = v295 + 1518500249 + v42 + __ROL4__(v41, 5) + (v40 & (v43 ^ v286) ^ v286);
  v45 = __ROL4__(v237 ^ v244 ^ v277 ^ v229, 1);
  v46 = __ROR4__(v40, 2);
  a3[1] = v45;
  v47 = v45 + __ROL4__(v44, 5);
  v252 = v43;
  v48 = __ROL4__(v241 ^ v247 ^ v253 ^ v226, 1);
  v49 = v286 + 1518500249 + v47 + (v41 & (v46 ^ v43) ^ v43);
  v50 = __ROR4__(v41, 2);
  a3[2] = v48;
  v51 = v46 ^ v44 & (v46 ^ v50);
  v52 = __ROR4__(v44, 2);
  v53 = v252 + 1518500249 + v51 + __ROL4__(v49, 5) + v48;
  v54 = __ROL4__(v255 ^ v267 ^ *a3 ^ v229, 1);
  a3[3] = v54;
  v230 = v54;
  v55 = v50 ^ v49 & (v52 ^ v50);
  v56 = __ROR4__(v49, 2);
  v57 = v230 + __ROL4__(v53, 5) + 1518500249 + v55 + v46;
  v58 = __ROL4__(v257 ^ v242 ^ a3[1] ^ v226, 1);
  a3[4] = v58;
  v59 = v58 + __ROL4__(v57, 5) + 1859775393 + (v53 ^ v56 ^ v52) + v50;
  v254 = __ROR4__(v53, 2);
  v60 = __ROL4__(v255 ^ v261 ^ v243 ^ a3[2], 1);
  a3[5] = v60;
  v61 = v57 ^ v254 ^ v56;
  v62 = __ROR4__(v57, 2);
  v63 = v60 + 1859775393 + __ROL4__(v59, 5) + v61 + v52;
  v64 = a3[3];
  v65 = __ROL4__(v257 ^ v239 ^ v244 ^ v64, 1);
  a3[6] = v65;
  v231 = v64;
  v66 = v62 ^ v254 ^ v59;
  v67 = __ROR4__(v59, 2);
  v68 = v65 + 1859775393 + __ROL4__(v63, 5) + v66 + v56;
  v69 = __ROL4__(v261 ^ v237 ^ v247 ^ a3[4], 1);
  v227 = a3[4];
  a3[7] = v69;
  v70 = v69 + __ROL4__(v68, 5) + (v62 ^ v63 ^ v67);
  v71 = __ROR4__(v63, 2);
  v296 = v70 + v254 + 1859775393;
  v72 = __ROL4__(a3[5] ^ v239 ^ v241 ^ *a3, 1);
  a3[8] = v72;
  v73 = v68 ^ v71 ^ v67;
  v74 = __ROR4__(v68, 2);
  v287 = v62 + 1859775393 + v73 + v72 + __ROL4__(v296, 5);
  v75 = __ROL4__(a3[6] ^ v237 ^ v267 ^ a3[1], 1);
  a3[9] = v75;
  v76 = __ROR4__(v296, 2);
  v297 = v67 + 1859775393 + (v296 ^ v74 ^ v71) + v75 + __ROL4__(v287, 5);
  v77 = __ROL4__(a3[7] ^ v241 ^ v242 ^ a3[2], 1);
  a3[10] = v77;
  v78 = __ROR4__(v287, 2);
  v79 = v71 + 1859775393 + (v287 ^ v76 ^ v74) + v77 + __ROL4__(v297, 5);
  v80 = __ROL4__(a3[8] ^ v267 ^ v243 ^ v231, 1);
  a3[11] = v80;
  v81 = __ROR4__(v297, 2);
  v298 = v80 + __ROL4__(v79, 5) + (v78 ^ v76 ^ v297) + v74 + 1859775393;
  v82 = __ROL4__(a3[9] ^ v242 ^ v244 ^ v227, 1);
  a3[12] = v82;
  v83 = __ROR4__(v79, 2);
  v288 = v76 + 1859775393 + (v78 ^ v79 ^ v81) + v82 + __ROL4__(v298, 5);
  v84 = __ROL4__(a3[5] ^ a3[10] ^ v243 ^ v247, 1);
  a3[13] = v84;
  v85 = __ROR4__(v298, 2);
  v299 = v78 + 1859775393 + (v298 ^ v83 ^ v81) + v84 + __ROL4__(v288, 5);
  v86 = __ROL4__(a3[6] ^ a3[11] ^ v244 ^ *a3, 1);
  a3[14] = v86;
  v87 = __ROR4__(v288, 2);
  v289 = v81 + 1859775393 + (v288 ^ v85 ^ v83) + v86 + __ROL4__(v299, 5);
  v88 = __ROL4__(a3[7] ^ a3[12] ^ v247 ^ a3[1], 1);
  a3[15] = v88;
  v89 = __ROR4__(v299, 2);
  v90 = v83 + 1859775393;
  v91 = v289;
  v300 = v88 + __ROL4__(v289, 5) + (v299 ^ v87 ^ v85) + v90;
  v92 = __ROL4__(a3[8] ^ a3[13] ^ *a3 ^ a3[2], 1);
  *a3 = v92;
  v290 = v85 + 1859775393 + (v89 ^ v87 ^ v289) + v92 + __ROL4__(v300, 5);
  v93 = __ROL4__(a3[9] ^ a3[14] ^ a3[1] ^ v231, 1);
  a3[1] = v93;
  v94 = __ROR4__(v91, 2);
  v95 = __ROR4__(v300, 2);
  v96 = v87 + 1859775393 + (v89 ^ v300 ^ v94) + v93 + __ROL4__(v290, 5);
  v97 = __ROL4__(a3[10] ^ a3[15] ^ a3[2] ^ v227, 1);
  a3[2] = v97;
  v98 = __ROR4__(v290, 2);
  v99 = v89 + 1859775393 + (v290 ^ v95 ^ v94) + __ROL4__(v96, 5) + v97;
  v100 = __ROL4__(a3[5] ^ a3[11] ^ *a3 ^ v231, 1);
  a3[3] = v100;
  v101 = __ROR4__(v96, 2);
  v102 = v100 + __ROL4__(v99, 5) + (v96 ^ v98 ^ v95) + v94 + 1859775393;
  v103 = __ROL4__(a3[6] ^ a3[12] ^ a3[1] ^ v227, 1);
  a3[4] = v103;
  v291 = v95 + 1859775393 + (v99 ^ v101 ^ v98) + v103 + __ROL4__(v102, 5);
  v104 = __ROR4__(v99, 2);
  v105 = __ROL4__(a3[5] ^ a3[7] ^ a3[13] ^ a3[2], 1);
  a3[5] = v105;
  v106 = v101 ^ v102;
  v107 = __ROR4__(v102, 2);
  v301 = v98 + 1859775393 + (v104 ^ v106) + v105 + __ROL4__(v291, 5);
  v232 = a3[3];
  v108 = __ROL4__(a3[6] ^ a3[8] ^ a3[14] ^ v232, 1);
  a3[6] = v108;
  v109 = __ROR4__(v291, 2);
  v268 = v101 + 1859775393 + v108 + __ROL4__(v301, 5) + (v104 ^ v291 ^ v107);
  v256 = a3[4];
  v110 = __ROL4__(a3[7] ^ a3[9] ^ a3[15] ^ v256, 1);
  a3[7] = v110;
  v111 = __ROR4__(v301, 2);
  v262 = v104 + 1859775393 + v110 + __ROL4__(v268, 5) + (v301 ^ v109 ^ v107);
  v112 = __ROL4__(a3[5] ^ a3[8] ^ a3[10] ^ *a3, 1);
  a3[8] = v112;
  v113 = v107 + v112 + (v268 & v111 | v109 & (v268 | v111)) + __ROL4__(v262, 5) - 1894007588;
  v114 = __ROR4__(v268, 2);
  v278 = v113;
  v115 = __ROL4__(a3[6] ^ a3[9] ^ a3[11] ^ a3[1], 1);
  a3[9] = v115;
  v116 = v109 + v115 + (v262 & v114 | v111 & (v262 | v114));
  v117 = __ROR4__(v262, 2);
  v269 = v116 + __ROL4__(v113, 5) - 1894007588;
  v118 = __ROL4__(a3[7] ^ a3[10] ^ a3[12] ^ a3[2], 1);
  a3[10] = v118;
  v119 = v111 + v118 + (v117 & v113 | v114 & (v117 | v113)) + __ROL4__(v269, 5) - 1894007588;
  v120 = __ROR4__(v278, 2);
  v263 = v119;
  v121 = __ROL4__(a3[8] ^ a3[11] ^ a3[13] ^ v232, 1);
  a3[11] = v121;
  v122 = v114 + v121 + (v269 & v120 | v117 & (v269 | v120)) + __ROL4__(v119, 5) - 1894007588;
  v123 = __ROR4__(v269, 2);
  v258 = v122;
  v124 = __ROL4__(a3[9] ^ a3[12] ^ a3[14] ^ v256, 1);
  a3[12] = v124;
  v270 = v117 + v124 + (v263 & v123 | v120 & (v263 | v123)) + __ROL4__(v122, 5) - 1894007588;
  v125 = __ROR4__(v263, 2);
  v126 = __ROL4__(a3[5] ^ a3[10] ^ a3[13] ^ a3[15], 1);
  a3[13] = v126;
  v127 = v120 + v126 + (v122 & v125 | v123 & (v122 | v125)) + __ROL4__(v270, 5) - 1894007588;
  v128 = __ROR4__(v258, 2);
  v279 = v127;
  v129 = __ROL4__(a3[6] ^ a3[11] ^ a3[14] ^ *a3, 1);
  a3[14] = v129;
  v130 = v123 + v129 + (v270 & v128 | v125 & (v270 | v128)) + __ROL4__(v127, 5) - 1894007588;
  v131 = __ROR4__(v270, 2);
  v264 = v130;
  v132 = __ROL4__(a3[7] ^ a3[12] ^ a3[15] ^ a3[1], 1);
  a3[15] = v132;
  v133 = v125 + v132 + (v131 & v279 | v128 & (v131 | v279)) + __ROL4__(v130, 5) - 1894007588;
  v134 = __ROR4__(v279, 2);
  v271 = v133;
  v135 = __ROL4__(a3[8] ^ a3[13] ^ *a3 ^ a3[2], 1);
  *a3 = v135;
  v136 = v128 + v135 + (v264 & v134 | v131 & (v264 | v134)) + __ROL4__(v133, 5) - 1894007588;
  v137 = __ROR4__(v264, 2);
  v259 = v136;
  v138 = __ROL4__(a3[9] ^ a3[14] ^ a3[1] ^ v232, 1);
  a3[1] = v138;
  v139 = v131 + v138 + (v271 & v137 | v134 & (v271 | v137)) + __ROL4__(v136, 5) - 1894007588;
  v140 = __ROR4__(v271, 2);
  v280 = v139;
  v141 = __ROL4__(a3[10] ^ a3[15] ^ a3[2] ^ v256, 1);
  a3[2] = v141;
  v142 = v134 + v141 + (v259 & v140 | v137 & (v259 | v140)) + __ROL4__(v139, 5) - 1894007588;
  v143 = __ROL4__(a3[5] ^ a3[11] ^ *a3 ^ v232, 1);
  a3[3] = v143;
  v144 = __ROR4__(v259, 2);
  v275 = v142;
  v145 = v137 + v143 + (v280 & v144 | v140 & (v280 | v144));
  v146 = __ROR4__(v280, 2);
  v272 = v145 + __ROL4__(v142, 5) - 1894007588;
  v147 = __ROL4__(a3[6] ^ a3[12] ^ a3[1] ^ v256, 1);
  a3[4] = v147;
  v148 = v140 - 1894007588 + v147 + (v144 & (v146 | v142) | v146 & v142);
  v149 = __ROR4__(v275, 2);
  v150 = __ROL4__(a3[5] ^ a3[7] ^ a3[13] ^ a3[2], 1);
  a3[5] = v150;
  v265 = __ROL4__(v272, 5) + v148;
  v233 = v144 + v150 + (v272 & v149 | v146 & (v272 | v149)) + __ROL4__(v265, 5) - 1894007588;
  v151 = __ROR4__(v272, 2);
  v238 = a3[3];
  v152 = __ROL4__(a3[6] ^ a3[8] ^ a3[14] ^ v238, 1);
  a3[6] = v152;
  v153 = v146 + v152 + (v265 & v151 | v149 & (v265 | v151)) + __ROL4__(v233, 5) - 1894007588;
  v154 = __ROR4__(v265, 2);
  v240 = a3[4];
  v155 = __ROL4__(a3[7] ^ a3[9] ^ a3[15] ^ v240, 1);
  a3[7] = v155;
  v156 = v149 + v155 + (v233 & v154 | v151 & (v233 | v154));
  v234 = __ROR4__(v233, 2);
  v157 = v156 + __ROL4__(v153, 5) - 1894007588;
  v158 = __ROL4__(a3[5] ^ a3[8] ^ a3[10] ^ *a3, 1);
  a3[8] = v158;
  v228 = __ROR4__(v153, 2);
  v159 = v151 + v158 + (v153 & v234 | v154 & (v153 | v234)) + __ROL4__(v157, 5) - 1894007588;
  v160 = __ROL4__(a3[6] ^ a3[9] ^ a3[11] ^ a3[1], 1);
  a3[9] = v160;
  v281 = __ROR4__(v157, 2);
  v161 = v154 + v160 + (v228 & v157 | v234 & (v228 | v157)) + __ROL4__(v159, 5) - 1894007588;
  v162 = __ROL4__(a3[7] ^ a3[10] ^ a3[12] ^ a3[2], 1);
  a3[10] = v162;
  v163 = v234 + v162 + (v159 & v281 | v228 & (v159 | v281));
  v164 = __ROL4__(a3[8] ^ a3[11] ^ a3[13] ^ v238, 1);
  v302 = __ROR4__(v159, 2);
  a3[11] = v164;
  v165 = v163 + __ROL4__(v161, 5) - 1894007588;
  v292 = __ROR4__(v161, 2);
  v166 = v228 + v164 + (v161 & v302 | v281 & (v161 | v302)) + __ROL4__(v165, 5) - 1894007588;
  v167 = __ROL4__(a3[9] ^ a3[12] ^ a3[14] ^ v240, 1);
  a3[12] = v167;
  v168 = v281 + v167 + (v165 ^ v292 ^ v302);
  v282 = __ROR4__(v165, 2);
  v169 = v168 + __ROL4__(v166, 5) - 899497514;
  v170 = a3[10];
  v171 = __ROL4__(a3[5] ^ v170 ^ a3[13] ^ a3[15], 1);
  a3[13] = v171;
  v266 = v170;
  v172 = v166 ^ v282 ^ v292;
  v173 = __ROR4__(v166, 2);
  v174 = v302 + v171 + v172 + __ROL4__(v169, 5) - 899497514;
  v175 = a3[11];
  v176 = __ROL4__(a3[6] ^ v175 ^ a3[14] ^ *a3, 1);
  a3[14] = v176;
  v260 = v175;
  v177 = v173 ^ v282 ^ v169;
  v178 = __ROR4__(v169, 2);
  v179 = v292 + v176 + v177 + __ROL4__(v174, 5) - 899497514;
  v276 = a3[12];
  v180 = __ROL4__(a3[7] ^ v276 ^ a3[15] ^ a3[1], 1);
  a3[15] = v180;
  v283 = v282 + v180 - 899497514 + (v173 ^ v174 ^ v178) + __ROL4__(v179, 5);
  v181 = __ROR4__(v174, 2);
  v273 = a3[13];
  v182 = __ROL4__(a3[8] ^ v273 ^ *a3 ^ a3[2], 1);
  *a3 = v182;
  v183 = v179 ^ v181 ^ v178;
  v184 = __ROR4__(v179, 2);
  v303 = v173 + v182 + v183 + __ROL4__(v283, 5) - 899497514;
  v185 = __ROL4__(a3[9] ^ a3[14] ^ a3[1] ^ v238, 1);
  a3[1] = v185;
  v186 = __ROR4__(v283, 2);
  v293 = v178 - 899497514 + v185 + (v283 ^ v184 ^ v181) + __ROL4__(v303, 5);
  v187 = __ROL4__(a3[10] ^ a3[15] ^ a3[2] ^ v240, 1);
  a3[2] = v187;
  v188 = __ROR4__(v303, 2);
  v189 = v181 + v187 + (v303 ^ v186 ^ v184) + __ROL4__(v293, 5) - 899497514;
  v190 = __ROL4__(a3[5] ^ a3[11] ^ *a3 ^ v238, 1);
  a3[3] = v190;
  v191 = v184 + v190 + (v188 ^ v186 ^ v293) + __ROL4__(v189, 5) - 899497514;
  v192 = __ROR4__(v293, 2);
  v245 = a3[1];
  v193 = __ROL4__(a3[6] ^ a3[12] ^ v245 ^ v240, 1);
  a3[4] = v193;
  v194 = v186 + v193 + (v188 ^ v189 ^ v192);
  v195 = __ROR4__(v189, 2);
  v248 = __ROL4__(v191, 5) - 899497514 + v194;
  v196 = __ROL4__(a3[5] ^ a3[7] ^ a3[13] ^ a3[2], 1);
  a3[5] = v196;
  v304 = __ROR4__(v191, 2);
  v197 = v188 + v196 + (v191 ^ v195 ^ v192);
  v198 = a3;
  v235 = __ROL4__(v248, 5) - 899497514 + v197;
  v199 = __ROL4__(a3[6] ^ a3[8] ^ a3[14] ^ a3[3], 1);
  a3[6] = v199;
  v200 = v192 + v199 + (v248 ^ v304 ^ v195) + __ROL4__(v235, 5) - 899497514;
  v249 = __ROR4__(v248, 2);
  v201 = v235 ^ v304 ^ v249;
  v236 = __ROR4__(v235, 2);
  v202 = __ROL4__(v198[7] ^ v198[9] ^ v198[15] ^ v198[4], 1);
  a3[7] = v202;
  v203 = __ROL4__(v200, 5) + v195 - 899497514 + v202 + v201;
  v204 = __ROL4__(v198[5] ^ v198[8] ^ v198[10] ^ *v198, 1);
  a3[8] = v204;
  v205 = v304 + v204 - 899497514 + (v236 ^ v249 ^ v200) + __ROL4__(v203, 5);
  v305 = __ROR4__(v200, 2);
  v206 = __ROL4__(a3[6] ^ a3[9] ^ a3[11] ^ v245, 1);
  a3[9] = v206;
  v294 = __ROR4__(v203, 2);
  v207 = v249 + v206 - 899497514 + (v236 ^ v203 ^ v305) + __ROL4__(v205, 5);
  v208 = __ROL4__(a3[7] ^ v266 ^ v276 ^ a3[2], 1);
  a3[10] = v208;
  v284 = __ROR4__(v205, 2);
  v209 = v236 + v208 + (v205 ^ v294 ^ v305) + __ROL4__(v207, 5) - 899497514;
  v210 = __ROL4__(a3[8] ^ v260 ^ v273 ^ a3[3], 1);
  a3[11] = v210;
  v211 = v305 + v210 + (v207 ^ v284 ^ v294) + __ROL4__(v209, 5) - 899497514;
  v306 = __ROR4__(v207, 2);
  v212 = __ROL4__(v276 ^ a3[14] ^ a3[4] ^ a3[9], 1);
  a3[12] = v212;
  v213 = v294 + v212 + (v209 ^ v306 ^ v284);
  v214 = __ROR4__(v209, 2);
  v215 = v213 + __ROL4__(v211, 5) - 899497514;
  v216 = __ROL4__(a3[5] ^ v273 ^ a3[15] ^ a3[10], 1);
  a3[13] = v216;
  v217 = v306 ^ v211;
  v218 = __ROR4__(v211, 2);
  v219 = v284 + v216 + (v214 ^ v217) + __ROL4__(v215, 5) - 899497514;
  v220 = __ROL4__(a3[6] ^ a3[14] ^ *a3 ^ a3[11], 1);
  a3[14] = v220;
  v221 = v215 ^ v218;
  v222 = __ROR4__(v215, 2);
  v223 = v306 + v220 + (v214 ^ v221) + __ROL4__(v219, 5) - 899497514;
  v224 = __ROL4__(a3[12] ^ a3[7] ^ a3[15] ^ v245, 1);
  a3[15] = v224;
  result = v214 - 899497514 + __ROL4__(v223, 5) + v224 + (v219 ^ v222 ^ v218);
  a1[3] += v222;
  a1[2] += __ROR4__(v219, 2);
  *a1 += result;
  a1[1] += v223;
  a1[4] += v218;
  return result;
}

