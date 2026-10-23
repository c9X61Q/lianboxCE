// busybox.exe @ 0x43a4ec size=122

__int64 __usercall sub_43A4EC@<edx:eax>(_DWORD *a1@<eax>)
{
  int Block; // ebx
  int v3; // edx
  int v4; // edx
  __int64 v6; // [esp+4h] [ebp-10h]

  Block = sub_4728CC();
  v3 = a1[11];
  *(_DWORD *)(Block + 40) = a1[10];
  *(_DWORD *)(Block + 44) = v3;
  *(_DWORD *)(Block + 48) = 4;
  *(_DWORD *)(Block + 36) = sub_470E78();
  v6 = sub_43A568();
  free(*(void **)(Block + 36));
  a1[12] = *(_DWORD *)(Block + 8);
  v4 = *(_DWORD *)(Block + 4);
  a1[8] = *(_DWORD *)Block;
  a1[9] = v4;
  free((void *)Block);
  return v6;
}

