// busybox.exe @ 0x41c7f4 size=279

void __thiscall __noreturn sub_41C7F4(void *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int FileHandle; // ebx
  __int64 v5; // kr00_8
  int v6; // eax
  unsigned __int64 v7; // rax
  int v8; // ecx
  const char *v9; // eax
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+1Ch] [ebp-14h]

  v11 = sub_420088(this, 1);
  sub_435D44(a3, &unk_4792D1);
  v3 = (_DWORD *)(a3 + 4 * dword_473090);
  while ( 1 )
  {
    FileHandle = sub_447A6C();
    if ( FileHandle >= 0 )
    {
      v5 = 0;
      do
      {
        v6 = sub_45C560(1024, (LPSTR)&MultiByteStr);
        if ( v6 <= 0 )
        {
          sub_442EA4(FileHandle);
          v7 = v5;
          v8 = 0;
          while ( v7 != 0 )
          {
            byte_485BDF[++v8] = v7;
            v7 >>= 8;
          }
          FileHandle = -1;
        }
        else
        {
          v5 += v6;
        }
        v10 = sub_42005C(v11);
      }
      while ( FileHandle != -1 );
      v9 = "%u %llu %s\n";
      if ( *v3 == 0 )
        v9 = "%u %llu\n";
      sub_46F088(v9, ~v10, v5, *v3);
    }
    if ( *v3 != 0 && *++v3 != 0 )
      continue;
    sub_42F138();
  }
}

