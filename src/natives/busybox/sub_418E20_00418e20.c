// busybox.exe @ 0x418e20 size=39

int __usercall sub_418E20@<eax>(int result@<eax>)
{
  char v1; // cl
  _BYTE *v2; // edx

  if ( *(int *)(result + 72) > 7 )
  {
    v1 = *(_BYTE *)(result + 71);
    v2 = *(_BYTE **)(result + 60);
    *(_DWORD *)(result + 60) = v2 + 1;
    *v2 = v1;
    *(_DWORD *)(result + 68) <<= 8;
    *(_DWORD *)(result + 72) -= 8;
  }
  ++*(_DWORD *)(result + 72);
  return result;
}

