// busybox.exe @ 0x452850 size=144

char __usercall sub_452850@<al>(const char *Str@<eax>, int a2@<edx>)
{
  int v4; // ecx
  size_t v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // ebx

  v5 = strlen(Str);
  ++*(_DWORD *)(dword_485FF0 + 56);
  v6 = (_DWORD *)((char *)off_473358 + 32);
  if ( *((_DWORD *)off_473358 + 7) != 0 )
  {
    v6 = (_DWORD *)sub_4728CC(v4);
    *v6 = *((_DWORD *)off_473358 + 7);
  }
  v7 = off_473358;
  *((_DWORD *)off_473358 + 7) = v6;
  v6[1] = v7[5];
  v6[2] = v7[3];
  v6[7] = v7[18];
  v8 = v7[17];
  v6[5] = v7[16];
  v6[6] = v8;
  v6[3] = a2;
  if ( a2 != 0 )
  {
    *(_DWORD *)(a2 + 12) |= 1u;
    v6[4] = Str;
  }
  v7[5] = Str;
  v7[3] = v5;
  v7[18] = 0;
  return sub_43B8DC();
}

