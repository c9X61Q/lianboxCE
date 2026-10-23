// busybox.exe @ 0x4351a8 size=101

int __usercall sub_4351A8@<eax>(int a1@<ebx>, int a2)
{
  int v2; // ebx
  void *v3; // edx
  unsigned __int8 *v4; // eax
  int result; // eax
  unsigned int v6; // edx

  v2 = dword_486010;
  if ( *(_BYTE *)(dword_486010 + 88) != 0 )
  {
    result = sub_4580A8(a1);
    v6 = *(_DWORD *)(v2 + 92);
    if ( v6 <= 0x7E )
    {
      *(_DWORD *)(v2 + 92) = v6 + 1;
      *(_BYTE *)(v2 + v6 + 584) = result;
    }
    else
    {
      *(_BYTE *)(v2 + 88) = 0;
      *(_DWORD *)(v2 + 92) = 0;
    }
  }
  else
  {
    v3 = *(void **)(dword_486010 + 100);
    if ( v3 != nullptr )
    {
      v4 = *(unsigned __int8 **)(dword_486010 + 96);
      *(_DWORD *)(dword_486010 + 96) = v4 + 1;
      result = *v4;
      if ( result != 0 )
        return result;
      free(v3);
      *(_DWORD *)(v2 + 100) = 0;
    }
    return sub_4580A8(a2);
  }
  return result;
}

