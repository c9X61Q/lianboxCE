// busybox.exe @ 0x42088c size=130

int __usercall sub_42088C@<eax>(_BYTE *a1@<eax>, u_short a2@<dx>, int a3@<ecx>)
{
  int v5; // ebx
  char *Block; // [esp+4h] [ebp-Ch]

  if ( a1 != nullptr && *a1 != 0 )
  {
    Block = (char *)sub_470C50();
    v5 = sub_471780(0, a3);
  }
  else
  {
    v5 = sub_4717A8(a3, 0);
    htons(a2);
    sub_45E440(a2);
  }
  sub_45EA48();
  sub_470A14(*(_DWORD *)Block, (struct sockaddr *)(Block + 4));
  free(Block);
  return v5;
}

