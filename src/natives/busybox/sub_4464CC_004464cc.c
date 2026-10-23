// busybox.exe @ 0x4464cc size=348

int __usercall sub_4464CC@<eax>(__int64 *a1@<eax>)
{
  const char **v2; // eax
  const char *FileName; // esi
  FILE *Stream; // eax
  int v5; // edx
  int v6; // edi
  FILE *v7; // eax
  __int64 v8; // rax
  __int64 v10; // [esp+Ch] [ebp-7Ch]
  __int64 v11; // [esp+14h] [ebp-74h]
  _BYTE v12[16]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v13; // [esp+2Ch] [ebp-5Ch]
  __int64 v14; // [esp+44h] [ebp-44h]

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *((const char ***)a1 + 6);
      FileName = *v2;
      if ( *v2 == nullptr )
        break;
      *((_DWORD *)a1 + 6) = v2 + 1;
      if ( *FileName == 45 && FileName[1] == 0 )
        goto LABEL_4;
      Stream = off_4730E8(0);
      if ( freopen(FileName, "r", Stream) != nullptr )
        goto LABEL_4;
      sub_418224(FileName, v5);
      *((_BYTE *)a1 + 60) = 1;
    }
    if ( *((_BYTE *)a1 + 61) != 0 )
      return 0;
LABEL_4:
    *((_BYTE *)a1 + 61) = 1;
    if ( *a1 == 0 )
      return 1;
    if ( FileName == nullptr )
      FileName = "stdin";
    sub_470D20(FileName, v12);
    if ( (v13 & 0xF000) != 0x8000 )
      break;
    v10 = *a1;
    v11 = v14;
    if ( *a1 < v14 )
      break;
    *a1 = v10 - v14;
    a1[6] += v11;
    if ( v10 == v11 )
      return 1;
  }
  v6 = *(_DWORD *)a1;
  v7 = off_4730E8(0);
  if ( fseek(v7, v6, 0) != 0 )
    sub_41823C(FileName);
  v8 = a1[6] + *a1;
  a1[6] = v8;
  a1[4] = v8;
  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 0;
  return 1;
}

