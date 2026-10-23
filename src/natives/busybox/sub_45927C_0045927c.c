// busybox.exe @ 0x45927c size=502

int __userpurge sub_45927C@<eax>(
        const CHAR *a1@<eax>,
        int a2@<edx>,
        int (__stdcall *a3)(int)@<ecx>,
        int a4,
        int (__stdcall *a5)(int),
        int a6,
        char *a7)
{
  int (__cdecl *v7)(const CHAR *, int); // ecx
  __int64 v8; // rax
  int v9; // ecx
  int v11; // ebx
  void *v12; // edi
  int v13; // eax
  int v14; // ecx
  void *Block; // [esp+4h] [ebp-9Ch]
  char *v17; // [esp+18h] [ebp-88h]
  int (__stdcall *v18)(int); // [esp+1Ch] [ebp-84h]
  int (__stdcall *v19)(int); // [esp+24h] [ebp-7Ch]
  char v20; // [esp+28h] [ebp-78h]
  _BYTE v22[16]; // [esp+30h] [ebp-70h] BYREF
  int v23; // [esp+40h] [ebp-60h]

  v20 = a2;
  v18 = a3;
  v19 = a5;
  if ( a3 == nullptr )
    v18 = sub_4677F0;
  if ( a5 == nullptr )
    v19 = sub_4677F0;
  v7 = sub_444C28;
  if ( ((a7 == nullptr ? 6 : 2) & a2) == 0 )
    v7 = sub_443484;
  v8 = __PAIR64__(v22, v7(a1, (int)v22));
  if ( (int)v8 < 0 )
  {
    if ( (v20 & 0x40) != 0 && *_errno() == 2 && sub_443484(a1, (int)v22) == 0 )
    {
      Block = a7;
      v9 = a6;
      return ((int (__thiscall *)(int, void *))v18)(v9, Block);
    }
    goto LABEL_9;
  }
  if ( (v23 & 0xF000) != 0x4000 )
  {
    Block = a7;
    v9 = a6;
    return ((int (__thiscall *)(int, void *))v18)(v9, Block);
  }
  if ( (v20 & 1) == 0 )
    return ((int (__thiscall *)(int, char *))v19)(a6, a7);
  if ( (v20 & 8) == 0 )
  {
    LODWORD(v8) = ((int (__thiscall *)(int, char *))v19)(a6, a7);
    if ( (_DWORD)v8 == 0 )
    {
LABEL_9:
      if ( (v20 & 0x20) == 0 )
        sub_418224(a1, SHIDWORD(v8));
      return 0;
    }
    v11 = 1;
    if ( (_DWORD)v8 == 2 )
      return v11;
  }
  v17 = sub_402D50(a1);
  v11 = 1;
  if ( v17 == nullptr )
    goto LABEL_9;
  while ( 1 )
  {
    v13 = sub_402F30((int)v17);
    if ( v13 == 0 )
      break;
    v12 = (void *)sub_41EA10(a1, v13 + 8, v14);
    if ( v12 != nullptr )
    {
      if ( sub_45927C(v19, a6, a7 + 1) == 0 )
        v11 = 0;
      free(v12);
    }
  }
  sub_403050(v17);
  if ( (v20 & 8) != 0 )
  {
    v8 = ((__int64 (__fastcall *)(int, _BYTE *, char *))v19)(a6, v22, a7);
    if ( (_DWORD)v8 == 0 )
      goto LABEL_9;
  }
  return v11;
}

