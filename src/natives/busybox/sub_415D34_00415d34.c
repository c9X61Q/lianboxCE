// busybox.exe @ 0x415d34 size=60

void *__usercall sub_415D34@<eax>(void *a1@<eax>)
{
  int v1; // esi
  char v2; // bl

  v1 = (unsigned __int8)byte_4732C0;
  v2 = byte_4732C0;
  free(*(&dword_473584 + (unsigned __int8)byte_4732C0));
  *(&dword_473584 + v1) = a1;
  byte_4732C0 = (v2 + 1) & 3;
  return a1;
}

