// busybox.exe @ 0x4435a0 size=120

int __cdecl sub_4435A0(FILE *Stream)
{
  int v2; // eax
  HANDLE *v3; // ebx
  DWORD v4; // esi

  if ( Stream == nullptr )
    return -1;
  v2 = fileno(Stream);
  if ( v2 == -1 )
    return -1;
  v3 = (HANDLE *)sub_430ADC(v2);
  if ( v3 == nullptr )
    return -1;
  fclose(Stream);
  v4 = WaitForSingleObject(*v3, 0xFFFFFFFF);
  CloseHandle(*v3);
  CloseHandle(v3[1]);
  sub_41CB90((int)v3);
  return -(v4 != 0);
}

