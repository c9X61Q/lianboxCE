// busybox.exe @ 0x418ccc size=49

unsigned int __usercall sub_418CCC@<eax>(unsigned int result@<eax>)
{
  unsigned int *v1; // ebx
  unsigned int v2; // edx
  unsigned int v3; // ebx
  unsigned int v4; // [esp+0h] [ebp-8h]

  v1 = (unsigned int *)dword_486010;
  v2 = *(_DWORD *)(dword_486010 + 4);
  if ( v2 <= result && v2 > *(_DWORD *)dword_486010 )
  {
    v4 = v2 - 1;
    sub_439A7C();
    result = v4;
  }
  v3 = *v1;
  if ( v3 > result )
  {
    sub_439A7C();
    return v3;
  }
  return result;
}

