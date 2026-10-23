// busybox.exe @ 0x462c74 size=97

int __usercall sub_462C74@<eax>(int a1@<eax>)
{
  unsigned int v1; // esi
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  _DWORD *v4; // eax
  int result; // eax

  v1 = (a1 + 7) & 0xFFFFFFF8;
  v2 = (_DWORD *)dword_485FF4;
  if ( *(_DWORD *)(dword_485FF4 + 12) < v1 )
  {
    v3 = (a1 + 7) & 0xFFFFFFF8;
    if ( v1 < 0x1F8 )
      v3 = 504;
    ++*(_DWORD *)(dword_485FF0 + 56);
    v4 = (_DWORD *)sub_470E78();
    *v4 = *v2;
    v2[1] = v4 + 1;
    v2[3] = v3;
    v2[2] = (char *)v4 + v3 + 4;
    *v2 = v4;
    sub_43B8DC();
  }
  result = v2[1];
  v2[1] = result + v1;
  v2[3] -= v1;
  return result;
}

