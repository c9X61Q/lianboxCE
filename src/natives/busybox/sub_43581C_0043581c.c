// busybox.exe @ 0x43581c size=208

int __usercall sub_43581C@<eax>(int *a1@<eax>, const char *a2@<edx>)
{
  char *v3; // esi
  char *v4; // eax
  const char *v5; // ebx
  void *v6; // esp
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  char Str; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+8h] [ebp-14h]
  int v16; // [esp+10h] [ebp-Ch] BYREF

  v3 = (char *)a2;
  v4 = strchr(a2, 58);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v5 = v4 + 1;
    v6 = alloca(sub_4115D8(4 * ((unsigned int)(v4 + 1 - v3 + 15) >> 2), v4 + 1 - v3, Str));
    sub_45C5AC(v7, v3);
    v3 = (char *)&v16;
  }
  v15 = sub_418398(10, v3, nullptr);
  if ( *_errno() != 0 )
  {
    v10 = sub_4362FC(v3);
    if ( v10 == 0 )
      return 0;
    *a1 = *(_DWORD *)(v10 + 20);
    a1[1] = *(_DWORD *)(v10 + 24);
  }
  else
  {
    v8 = v15;
    *a1 = v15;
    v9 = sub_436354(v15);
    if ( v9 != 0 )
      v8 = *(_DWORD *)(v9 + 24);
    a1[1] = v8;
  }
  v11 = 1;
  if ( v5 == nullptr )
    return v11;
  v12 = sub_418398(10, v5, nullptr);
  if ( *_errno() == 0 )
  {
    a1[1] = v12;
    return v11;
  }
  return 0;
}

