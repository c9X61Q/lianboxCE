// busybox.exe @ 0x464154 size=324

int __usercall sub_464154@<eax>(char *a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // eax
  int FileHandle; // ebp
  unsigned int v4; // ebx
  __int64 i; // kr00_8
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v10; // [esp+14h] [ebp-1Ch]
  const char *v11; // [esp+18h] [ebp-18h]

  v11 = a1;
  v2 = sub_447A6C(a1);
  if ( v2 == -1 )
    return 0;
  FileHandle = v2;
  v4 = 0;
  for ( i = 0; ; i += (unsigned int)v10 )
  {
    v10 = sub_45C560(1024, (LPSTR)&MultiByteStr, FileHandle);
    if ( v10 <= 0 )
      break;
    if ( a2 <= 1 )
    {
      v8 = 0;
      do
        v4 = (unsigned __int16)((v4 >> 1) + (unsigned __int8)byte_485BDF[++v8] + ((_WORD)v4 << 15));
      while ( v10 != v8 );
    }
    else
    {
      v7 = v10;
      do
      {
        --v7;
        v4 += *((unsigned __int8 *)&MultiByteStr + v7);
      }
      while ( v7 != 0 );
    }
  }
  if ( FileHandle != 0 && sub_442EA4(FileHandle) != 0 || v10 != 0 )
  {
    sub_418224(v11, v6);
    return 0;
  }
  if ( a2 == 0 )
  {
    v11 = (const char *)&unk_47A634;
  }
  else if ( a2 != 1 )
  {
    sub_46F088(
      "%u %llu %s\n",
      (unsigned __int16)(v4 + HIWORD(v4)) + ((int)((unsigned __int16)v4 + HIWORD(v4)) >> 16),
      (unsigned __int64)(i + 511) >> 9,
      v11);
    return 1;
  }
  sub_46F088("%05u %5llu %s\n", v4, (unsigned __int64)(i + 1023) >> 10, v11);
  return 1;
}

