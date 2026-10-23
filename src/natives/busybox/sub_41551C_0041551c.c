// busybox.exe @ 0x41551c size=1522

void __cdecl __noreturn sub_41551C(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  _DWORD *v5; // edx
  int i; // eax
  int v7; // esi
  int v8; // ebx
  const char *v9; // edx
  bool v10; // al
  _BYTE *v11; // eax
  BOOL v12; // edx
  int v13; // esi
  int *v14; // edi
  int *v15; // esi
  _DWORD *v16; // eax
  const char *v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  _BYTE *v21; // eax
  int v22; // eax
  char *Str1; // [esp+0h] [ebp-70h]
  char Str2; // [esp+4h] [ebp-6Ch]
  char *Str2a; // [esp+4h] [ebp-6Ch]
  char *Str2b; // [esp+4h] [ebp-6Ch]
  int v27; // [esp+Ch] [ebp-64h]
  BOOL v28; // [esp+14h] [ebp-5Ch]
  _BYTE v29[76]; // [esp+24h] [ebp-4Ch] BYREF

  v2 = (_DWORD *)sub_4728CC();
  dword_485FF4 = (int)v2;
  *v2 = v2 + 4;
  v2[1] = v2 + 5;
  v2[3] = 504;
  v2[2] = v2 + 131;
  dword_473138 = sub_470E78();
  dword_473134 = dword_473138;
  dword_473124 = 1;
  if ( a1 == 3 && strcmp(*(const char **)(a2 + 4), "--fs") == 0 )
  {
    sub_4315C0();
    sub_41784C("forkshell failed", Str2);
  }
  v3 = (_DWORD *)sub_4728CC();
  dword_485FF0 = (int)v3;
  v3[1] = -1;
  v3[9] = (char *)v3 + 62;
  v3[10] = (char *)v3 + 62;
  v4 = sub_4728CC();
  dword_485FEC = v4;
  v5 = &unk_4848C0;
  for ( i = 0; i != 192; i += 16 )
  {
    *(_DWORD *)(v4 + i + 188) = *v5;
    *(_DWORD *)(v4 + i + 192) = v5[1];
    *(_DWORD *)(v4 + i + 196) = v5[2];
    v5 += 3;
  }
  strcpy((char *)(v4 + 380), "LINENO=");
  *(_DWORD *)(v4 + 288) = v4 + 380;
  dword_473110 = sub_4728CC();
  dword_4731A4 = sub_4728CC();
  Str2a = nullptr;
  Str1 = v29;
  v7 = setjmp3();
  if ( v7 != 0 )
  {
    sub_42D2EC(v29, 0);
    goto LABEL_67;
  }
  v8 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 52) = v29;
  *(_DWORD *)(v8 + 8) = getpid();
  v9 = *(const char **)(a2 + 4);
  v10 = false;
  if ( v9 != nullptr )
    v10 = strcmp(v9, "-X") == 0;
  *(_BYTE *)(v8 + 79) = v10;
  sub_43A7E0(Str1, Str2a);
  sub_45EA54();
  Str2b = (char *)SetConsoleCtrlHandler(HandlerRoutine, true);
  v11 = *(_BYTE **)a2;
  v12 = false;
  if ( *(_DWORD *)a2 != 0 )
    v12 = *v11 == 45;
  v28 = v12;
  *(_DWORD *)(v8 + 44) = v11;
  dword_47310C = a2 + 4;
  do
    *(_BYTE *)(v8 + v7++ + 63) = 2;
  while ( v7 != 19 );
  v13 = sub_447C44(Str2b, Str2b);
  if ( v13 != 0 )
    sub_453074();
  v14 = (int *)dword_47310C;
  v27 = *(_DWORD *)(v8 + 24);
  if ( *(_DWORD *)dword_47310C == 0 )
  {
    if ( *(_DWORD *)(v8 + 24) != 0 )
      sub_415B40("%s requires an argument", "-c");
    *(_BYTE *)(v8 + 69) = 1;
  }
  if ( *(_BYTE *)(v8 + 66) == 2 && *(_BYTE *)(v8 + 69) == 1 && sub_443380(0) != 0 && sub_443380(1) != 0 )
    *(_BYTE *)(v8 + 66) = 1;
  if ( *(_BYTE *)(v8 + 67) == 2 )
    *(_BYTE *)(v8 + 67) = *(_BYTE *)(v8 + 66);
  do
  {
    if ( *(_BYTE *)(v8 + v13 + 63) == 2 )
      *(_BYTE *)(v8 + v13 + 63) = 0;
    ++v13;
  }
  while ( v13 != 19 );
  if ( v27 != 0 )
  {
    v15 = v14 + 1;
    *(_DWORD *)(v8 + 24) = *v14;
    if ( v14[1] == 0 )
      goto LABEL_24;
  }
  else
  {
    v15 = v14;
    if ( *(_BYTE *)(v8 + 69) != 0 )
      goto LABEL_24;
    sub_45E674();
    sub_418E48();
  }
  v19 = *v15;
  *(_DWORD *)(v8 + 44) = *v15;
  *(_DWORD *)(v8 + 48) = v19;
  ++v15;
LABEL_24:
  v16 = (_DWORD *)dword_485FEC;
  *(_DWORD *)(dword_485FEC + 16) = v15;
  v16[1] = 1;
  v16[2] = -1;
  while ( *v15 != 0 )
  {
    ++*v16;
    ++v15;
  }
  sub_447F54();
  if ( *(_BYTE *)(v8 + 80) != 0 )
    sub_438AD0();
  if ( *(_DWORD *)(v8 + 28) != 0 )
  {
    sub_442E08(*(_DWORD *)(v8 + 28));
    sub_45E938();
  }
  else if ( !v28 && *(_BYTE *)(v8 + 66) != 0 && sub_443260(nullptr, 0) != 0 )
  {
    sub_4275E0();
    sub_4631A8();
  }
  if ( *(_DWORD *)(v8 + 32) != 0 )
    sub_45E560(*(LPCSTR *)(v8 + 32));
  if ( v28 )
  {
    if ( *(_DWORD *)(v8 + 28) == 0 )
    {
      sub_4365A0();
      v20 = sub_470DC0();
      sub_442E08(*(_DWORD *)(v20 + 12));
      sub_45E938();
    }
    v17 = (const char *)sub_4356C8();
    if ( v17 != nullptr )
    {
      sub_4708BC("%s/etc/profile", v17);
      sub_457D7C();
      sub_4631A8();
    }
    else
    {
      sub_457D7C();
    }
    if ( sub_43E9A4() != 0 )
      sub_457D7C();
  }
  if ( *(_BYTE *)(dword_485FF0 + 66) != 0 )
  {
    v21 = (_BYTE *)sub_43E9A4();
    if ( v21 != nullptr && *v21 != 0 )
      sub_457D7C();
  }
  sub_44D988();
  v18 = dword_485FF0;
  if ( *(_DWORD *)(dword_485FF0 + 24) != 0 )
    sub_42B3FC();
  if ( *(_BYTE *)(v18 + 69) != 0 || *(_DWORD *)(v18 + 24) == 0 )
  {
    if ( *(_BYTE *)(v18 + 66) != 0 )
    {
      v22 = sub_43E9A4();
      if ( v22 != 0
        || sub_43E9A4() != 0
        && (++*(_DWORD *)(v18 + 56), sub_41E9A4(), sub_45EC2C(), sub_4631A8(), sub_43B8DC(), (v22 = sub_43E9A4()) != 0) )
      {
        *(_DWORD *)(dword_473454 + 32) = v22;
      }
      sub_43E9A4();
      *(_DWORD *)(dword_473454 + 24) = sub_460BCC();
    }
    sub_41CC8C();
  }
LABEL_67:
  sub_42D338();
}

