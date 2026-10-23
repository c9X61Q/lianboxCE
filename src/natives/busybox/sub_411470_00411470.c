// busybox.exe @ 0x411470 size=104

void __cdecl sub_411470(unsigned int a1)
{
  FILE *v1; // eax

  if ( a1 >= (unsigned int)sub_4113D0(0) && a1 <= (unsigned int)sub_4113D0(19) )
  {
    *(_DWORD *)(a1 + 12) &= ~0x8000u;
    v1 = sub_4113D0(0);
    unlock(((int)(a1 - (_DWORD)v1) >> 5) + 16);
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
}

