// busybox.exe @ 0x40fa20 size=126

int sub_40FA20()
{
  char *v0; // edx
  int v1; // eax
  int v2; // ecx
  char *v3; // edx
  int v4; // eax
  int v5; // ecx
  char *v6; // edx
  int result; // eax
  int v8; // ecx

  v0 = "123456789";
  v1 = 48;
  do
  {
    v2 = (int)&(v0++)[16 - (_DWORD)"123456789"];
    byte_485AE0[v1] = v2;
    v1 = (unsigned __int8)*(v0 - 1);
  }
  while ( (_BYTE)v1 != 0 );
  v3 = "bcdef";
  v4 = 97;
  do
  {
    v5 = (int)&(v3++)[26 - (_DWORD)"bcdef"];
    byte_485AE0[v4] = v5;
    v4 = (unsigned __int8)*(v3 - 1);
  }
  while ( (_BYTE)v4 != 0 );
  v6 = "BCDEF";
  result = 65;
  do
  {
    v8 = (int)&(v6++)[26 - (_DWORD)"BCDEF"];
    byte_485AE0[result] = v8;
    result = (unsigned __int8)*(v6 - 1);
  }
  while ( (_BYTE)result != 0 );
  return result;
}

