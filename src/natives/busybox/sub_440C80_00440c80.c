// busybox.exe @ 0x440c80 size=362

void __cdecl __noreturn sub_440C80(int a1, const char **a2)
{
  const char **v2; // ebx
  const char *v3; // eax
  FILE *(__cdecl *v4)(int); // esi
  FILE *v5; // eax
  int v6; // eax
  FILE *v7; // eax
  int v8; // eax
  FILE *v9; // eax
  int v10; // eax
  const char *v11; // eax
  char *v12; // eax
  void *v13; // ecx
  char *v14; // eax
  UINT uMode; // [esp+0h] [ebp-10h]

  v2 = a2;
  sub_4015C0();
  v3 = *a2;
  if ( (*a2)[1] == 58 && v3[2] == 47 )
  {
    if ( *v3 != 49 )
    {
      if ( *v3 != 50 )
        goto LABEL_7;
      ++dword_473398;
    }
    ++dword_473398;
    v3 += 3;
    *a2 = v3;
  }
LABEL_7:
  sub_43ABEC((int)v3);
  SetErrorMode(1u);
  v4 = off_4730E8;
  if ( off_4730E8(0) != nullptr )
  {
    v5 = v4(0);
    v6 = fileno(v5);
    setmode(v6, 0x8000);
  }
  if ( v4(1) != nullptr )
  {
    v7 = v4(1);
    v8 = fileno(v7);
    setmode(v8, 0x8000);
  }
  if ( v4(2) != nullptr )
  {
    v9 = v4(2);
    v10 = fileno(v9);
    setmode(v10, 0x8000);
  }
  v11 = a2[1];
  if ( v11 != nullptr && a2[2] != nullptr && strcmp(v11, "--busybox") == 0 )
    v2 = a2 + 2;
  dword_485AD0 = "busybox";
  v12 = (char *)*v2;
  dword_485AD0 = v12;
  if ( *v12 == 45 )
    dword_485AD0 = v12 + 1;
  sub_463510();
  sub_418E48(*v2);
  uMode = (UINT)*v2;
  if ( sub_437D40(v13) )
  {
    v14 = strrchr(*v2, 46);
    if ( v14 != nullptr )
      *v14 = 0;
  }
  dword_485AD0 = sub_416E24(dword_485AD0);
  sub_45BD78(uMode);
}

