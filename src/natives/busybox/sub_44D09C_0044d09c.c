// busybox.exe @ 0x44d09c size=39

int __cdecl sub_44D09C(int *PtHandles)
{
  return pipe(PtHandles, 0x2000u, 0) >> 31;
}

