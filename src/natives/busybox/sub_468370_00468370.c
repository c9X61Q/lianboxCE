// busybox.exe @ 0x468370 size=37

int __usercall sub_468370@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  char v3; // cl

  switch ( a3 )
  {
    case 3:
      v3 = 4;
      return sub_4681D0(result, a2, v3);
    case 1:
      v3 = 0;
      return sub_4681D0(result, a2, v3);
    case 2:
      v3 = 2;
      return sub_4681D0(result, a2, v3);
    default:
      break;
  }
  return result;
}

