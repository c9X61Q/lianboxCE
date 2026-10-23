// busybox.exe @ 0x460ddc size=17

unsigned __int8 *__usercall sub_460DDC@<eax>(unsigned __int8 *a1@<eax>, int a2@<edx>, unsigned __int8 *a3@<ecx>)
{
  int v3; // eax
  unsigned __int8 *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = a3;
  v3 = sub_433658(&v5, a1, a2);
  return &v5[v3];
}

