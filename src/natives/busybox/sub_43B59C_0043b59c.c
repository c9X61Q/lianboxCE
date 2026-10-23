// busybox.exe @ 0x43b59c size=161

int __usercall sub_43B59C@<eax>(int a1@<eax>, const void *a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // ebp
  _DWORD *Block; // ebx
  _DWORD *v6; // eax

  if ( a1 > 0 )
  {
    v3 = dword_486010;
    if ( *(_DWORD *)(dword_486010 + 4) + 1 >= a1 )
    {
      Block = (_DWORD *)sub_470E78();
      qmemcpy(Block + 3, a2, a3);
      Block[2] = a3;
      if ( *(_DWORD *)(v3 + 4) >= a1 )
      {
        v6 = sub_42FF18(a1);
        if ( v6 == nullptr )
        {
          free(Block);
          return 0;
        }
      }
      else
      {
        v6 = (_DWORD *)(v3 + 32);
      }
      *Block = v6;
      Block[1] = v6[1];
      *(_DWORD *)v6[1] = Block;
      v6[1] = Block;
      ++*(_DWORD *)(v3 + 4);
      *(_BYTE *)(v3 + 48) = 1;
      return sub_45E41C();
    }
  }
  sub_4181F8("inserting at bad line number");
  return 0;
}

