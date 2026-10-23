// busybox.exe @ 0x4367f0 size=91

int __usercall sub_4367F0@<eax>(int result@<eax>)
{
  int *v1; // ebx
  int v2; // esi
  int v3; // edx

  v1 = (int *)dword_486010;
  if ( result > 0 )
  {
    v2 = result;
    v3 = *(_DWORD *)(dword_486010 + 52);
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 4 * *(_DWORD *)dword_486010) - 4) >= (unsigned int)result )
    {
      while ( 1 )
      {
        result = *v1;
        if ( *(_DWORD *)(*(_DWORD *)(v3 + 4 * *v1) - 4) == v2 || result <= 0 )
          break;
        *v1 = result - 1;
      }
    }
    else
    {
      while ( 1 )
      {
        result = *v1;
        if ( v2 == *(_DWORD *)(*(_DWORD *)(v1[13] + 4 * *v1) - 4) )
          break;
        if ( result >= (unsigned int)v1[5] )
        {
          if ( v1[9] <= 0 )
            return result;
          sub_457958();
        }
        else
        {
          *v1 = result + 1;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)dword_486010 = 0;
  }
  return result;
}

