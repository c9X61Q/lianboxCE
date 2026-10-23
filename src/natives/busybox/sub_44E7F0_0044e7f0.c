// busybox.exe @ 0x44e7f0 size=138

int __usercall sub_44E7F0@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char *Buffer; // ebx
  FILE *v3; // eax
  int v4; // esi
  char v5; // al
  int v7; // [esp+10h] [ebp-Ch]

  Buffer = (char *)sub_44F0D4(a2, a1);
  if ( (dword_486008 & 0x8000) != 0 )
  {
    v4 = v7 + 2;
    sub_46F0B8(34);
    while ( 1 )
    {
      v5 = *Buffer;
      if ( *Buffer == 0 )
        break;
      if ( v5 == 92 || v5 == 34 )
      {
        sub_46F0B8(92);
        ++v4;
      }
      sub_46F0B8((unsigned __int8)*Buffer++);
    }
    sub_46F0B8(34);
  }
  else
  {
    v3 = off_4730E8(1);
    sub_46EF20(Buffer, v3);
    return v7;
  }
  return v4;
}

