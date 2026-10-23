// busybox.exe @ 0x44dc38 size=279

int __usercall sub_44DC38@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4, char *Str, int a6, int a7)
{
  size_t v7; // esi
  int result; // eax
  unsigned int i; // [esp+30h] [ebp-110h]
  _BYTE v13[32]; // [esp+34h] [ebp-10Ch] BYREF
  _BYTE v14[236]; // [esp+54h] [ebp-ECh] BYREF

  v7 = strlen(Str);
  sub_438B88(a4, a3);
  sub_438BF8(v14, (int)v13, Str, v7, a6, a7, 0);
  for ( i = a2; i > 0x20; i -= 32 )
  {
    sub_438BF8(v14, a2 + a1 - i, v13, 32, Str, v7, a6, a7, 0);
    sub_438BF8(v14, (int)v13, v13, 32, 0);
  }
  result = sub_438BF8(v14, (int)v13, v13, 32, Str, v7, a6, a7, 0);
  qmemcpy((void *)(a2 + a1 - i), v13, i);
  return result;
}

