// busybox.exe @ 0x456a04 size=92

void __usercall sub_456A04(int a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>)
{
  size_t ElementCount; // ebp
  size_t v7; // eax

  *a3 = 0;
  if ( a1 != 0 )
  {
    while ( Stream != nullptr )
    {
      ElementCount = a1 - *a3;
      v7 = fread((void *)(a2 + *a3), 1u, ElementCount, Stream);
      *a3 += v7;
      if ( ElementCount == v7 )
        break;
      sub_41BA2C();
      sub_447A00();
    }
  }
}

