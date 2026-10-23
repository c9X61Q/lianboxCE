// busybox.exe @ 0x4545fc size=41

int __usercall sub_4545FC@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // ecx

  if ( a2 >= 0 )
  {
    v2 = *(_DWORD *)(result + 4);
    if ( v2 > a2 )
    {
      for ( *(_DWORD *)(result + 4) = v2 - 1;
            *(_DWORD *)(result + 4) > a2;
            *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * a2 - 4) = *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * a2) )
      {
        ++a2;
      }
    }
  }
  return result;
}

