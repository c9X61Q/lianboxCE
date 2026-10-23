// busybox.exe @ 0x411b90 size=44

int __usercall sub_411B90@<eax>(char a1@<al>)
{
  return (unsigned __int8)(a1 - 48) <= 9u || a1 == 95 || (unsigned __int8)((a1 | 0x20) - 97) <= 0x19u;
}

