// busybox.exe @ 0x445be8 size=36

int *__usercall sub_445BE8@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int *v5; // edx
  int *result; // eax
  int v7; // ebx

  v5 = (int *)(a1 + 4 * a2);
  result = (int *)(a1 + 4 * a3);
  while ( a4 > 0 )
  {
    v7 = *v5;
    *v5 = *result;
    *result = v7;
    --a4;
    ++v5;
    ++result;
  }
  return result;
}

