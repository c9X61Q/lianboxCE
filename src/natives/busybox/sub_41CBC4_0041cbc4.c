// busybox.exe @ 0x41cbc4 size=52

int __usercall sub_41CBC4@<eax>(int result@<eax>)
{
  int v1; // edx
  int v2; // [esp+4h] [ebp-4h]

  if ( !_bittest((const signed __int32 *)result, 0xCu) )
  {
    v2 = result;
    free(*(void **)(result + 16));
    result = v2;
  }
  v1 = *(_DWORD *)result & 0x6C02;
  BYTE1(v1) |= 0x40u;
  *(_DWORD *)result = v1;
  *(_DWORD *)(result + 16) = 0;
  return result;
}

