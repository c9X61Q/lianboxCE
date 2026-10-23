// busybox.exe @ 0x411400 size=108

void __cdecl sub_411400(unsigned int a1)
{
  FILE *v1; // eax

  if ( a1 >= (unsigned int)sub_4113D0(0) && a1 <= (unsigned int)sub_4113D0(19) )
  {
    v1 = sub_4113D0(0);
    lock(((int)(a1 - (_DWORD)v1) >> 5) + 16);
    *(_DWORD *)(a1 + 12) |= 0x8000u;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
}

