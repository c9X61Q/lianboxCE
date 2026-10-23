// busybox.exe @ 0x463214 size=59

char *__usercall sub_463214@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char *result; // eax

  if ( (_BYTE)unk_485BF4 == 0 )
    MultiByteStr = sub_471600(a2, 4 * (_DWORD)unk_485BF4 + 1024);
  result = unk_485BF4++;
  *(_DWORD *)(MultiByteStr + 4 * (_DWORD)result) = a1;
  return result;
}

