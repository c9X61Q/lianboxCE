// busybox.exe @ 0x432468 size=371

int __cdecl sub_432468(int a1, int a2)
{
  int (__cdecl *v2)(_BYTE *); // esi
  int v3; // ebx
  const char *v4; // eax
  int FileHandle; // eax
  const char *v6; // eax
  int v7; // eax

  v2 = sub_432108;
  if ( dword_485AD0[3] != 103 )
    v2 = (int (__cdecl *)(_BYTE *))sub_432230;
  MultiByteStr = (u_long)"anonymous";
  *(&MultiByteStr + 1) = (u_long)"busybox";
  sub_435D60(a2, "^cvu:p:P:", "continue");
  v3 = a2 + 4 * dword_473090;
  sub_417B80("ftp", "tcp", 0x15u);
  NumOfElements = sub_470DF0();
  if ( qword_485BF0 != nullptr )
  {
    v4 = (const char *)sub_47144C();
    sub_46F088("Connecting to %s (%s)\n", *(const char **)v3, v4);
  }
  FileHandle = sub_470C28();
  *(&NumOfElements + 1) = (__time32_t)fdopen_0(FileHandle, "r+");
  if ( *(&NumOfElements + 1) == 0 )
    sub_418048();
  if ( sub_43228C(nullptr, nullptr) != 220 )
  {
    v6 = nullptr;
    goto LABEL_13;
  }
  v7 = sub_43228C("USER", (const char *)MultiByteStr);
  if ( v7 != 230 )
  {
    if ( v7 != 331 )
    {
      v6 = "USER";
LABEL_13:
      sub_4320C4(v6);
    }
    if ( sub_43228C("PASS", (const char *)*(&MultiByteStr + 1)) != 230 )
    {
      v6 = "PASS";
      goto LABEL_13;
    }
  }
  sub_43228C("TYPE I", nullptr);
  return v2(*(_BYTE **)(v3 + 4));
}

