// busybox.exe @ 0x44fb18 size=39

void *__fastcall sub_44FB18(int a1, void *a2)
{
  void *v2; // ebx
  void *Block; // [esp+0h] [ebp-Ch]

  Block = a2;
  while ( 1 )
  {
    v2 = (void *)sub_470E94();
    if ( v2 == nullptr )
      break;
    sub_462BCC();
    free(v2);
  }
  return Block;
}

