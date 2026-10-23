// busybox.exe @ 0x41ed20 size=117

int __usercall sub_41ED20@<eax>(int a1@<eax>)
{
  unsigned __int16 *v1; // edx
  const char *v2; // esi
  const char *v3; // edi

  v1 = *(unsigned __int16 **)(dword_486010 + 4 * *(unsigned __int16 *)(a1 + 8) + 65528);
  v2 = *(const char **)(dword_486010 + 4 * *v1);
  v3 = *(const char **)(dword_486010 + 4 * v1[1]);
  sub_45CE08();
  sub_46F088("Setting up %s (%s)...\n", v2, v3);
  sub_45C090();
  sub_45E4C0(1, "install");
  return sub_45E4C0(3, "installed");
}

