// busybox.exe @ 0x42f428 size=166

int __userpurge sub_42F428@<eax>(const char *a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>, int a4)
{
  int v6; // edx
  int v7; // esi
  int v8; // edx
  FILE *v9; // esi
  FILE *Stream; // [esp+0h] [ebp-74h]
  _BYTE v12[16]; // [esp+8h] [ebp-6Ch] BYREF
  int v13; // [esp+18h] [ebp-5Ch]

  if ( (*(_DWORD *)(a2 + 16) & 0xF000) == 0xA000 )
  {
    if ( sub_444C28(a1, v12) != 0 )
    {
      v7 = 0;
      if ( (dword_486008 & 0x10) == 0 )
        sub_418224(a1, v6);
      return v7;
    }
    v7 = 1;
    if ( (v13 & 0xF000) == 0x4000 )
      return v7;
  }
  v9 = (FILE *)sub_4314C0(Stream);
  if ( v9 != nullptr )
  {
    lpHandles = (HANDLE *)a1;
    *a3 |= sub_4368E0();
    fclose(v9);
    return 1;
  }
  else
  {
    if ( (dword_486008 & 0x10) == 0 )
      sub_418224(a1, v8);
    BYTE2(NumOfElements) = 1;
    return 0;
  }
}

