// busybox.exe @ 0x43b090 size=146

unsigned int __usercall sub_43B090@<eax>(unsigned int result@<eax>)
{
  _DWORD *v1; // ebx
  unsigned int v2; // edx
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebp

  v1 = dword_48600C;
  v2 = *((_DWORD *)dword_48600C + 5);
  v3 = result;
  if ( v2 <= result )
    v3 = *((_DWORD *)dword_48600C + 5);
  if ( v3 != 0 )
  {
    *((_DWORD *)dword_48600C + 5) = v2 - v3;
    v4 = v1[2];
    if ( v4 < v3 )
    {
      v5 = v1[1];
      v1[2] = (v4 + v5 * v1[3] - v3) % v5;
      v1[3] -= (v3 + ~v4) / v5 + 1;
      sub_46F088("\r\x1B[%uA", (v3 + ~v4) / v5 + 1);
      result = v1[2];
      if ( result != 0 )
        return sub_46F088("\x1B[%uC", v1[2]);
    }
    else
    {
      v1[2] = v4 - v3;
      return sub_46F088("\x1B[%uD", v3);
    }
  }
  return result;
}

