// busybox.exe @ 0x438628 size=246

int __usercall sub_438628@<eax>(int a1@<eax>)
{
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  char *v5; // eax
  int v7; // [esp+34h] [ebp-54h]
  int v8; // [esp+38h] [ebp-50h]
  int v9; // [esp+3Ch] [ebp-4Ch]
  __int64 v10; // [esp+40h] [ebp-48h]
  int v11; // [esp+48h] [ebp-40h]
  int v12; // [esp+4Ch] [ebp-3Ch]
  const char *v13; // [esp+50h] [ebp-38h]
  int v14[13]; // [esp+54h] [ebp-34h] BYREF

  sub_43E8F8((__time32_t *)(a1 + 28), (int)v14);
  v13 = *(const char **)a1;
  v12 = v14[0];
  v2 = v14[1];
  v3 = v14[2];
  v7 = v14[3];
  v8 = v14[4] + 1;
  v9 = v14[5] + 1900;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = sub_417DC8(*(_WORD *)(a1 + 24));
  sub_46F088("%s %u/%u %9llu %4u-%02u-%02u %02u:%02u:%02u %s", v5, v4, v11, v10, v9, v8, v7, v3, v2, v12, v13);
  if ( *(_DWORD *)(a1 + 4) != 0 )
    sub_46F088(" -> %s", *(const char **)(a1 + 4));
  return sub_418130(10);
}

