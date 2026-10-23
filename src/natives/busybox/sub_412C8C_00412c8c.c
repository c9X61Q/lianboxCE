// busybox.exe @ 0x412c8c size=92

int __usercall sub_412C8C@<eax>(int a1@<eax>)
{
  __int64 v2; // rax
  char v4; // [esp+4h] [ebp-408h]
  char v5; // [esp+5h] [ebp-407h]
  char v6; // [esp+6h] [ebp-406h]

  while ( 1 )
  {
    v2 = sub_456DCC(1024);
    if ( (int)v2 <= 0 || v4 == 46 && v5 == 10 && v6 == 0 )
      break;
    LODWORD(v2) = sub_43B59C(HIDWORD(v2));
    if ( (_DWORD)v2 == 0 )
      break;
    ++a1;
  }
  return v2;
}

