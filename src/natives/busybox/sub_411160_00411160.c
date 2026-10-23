// busybox.exe @ 0x411160 size=84

int __cdecl sub_411160(BYTE *a1, unsigned int a2, int *a3)
{
  int *v3; // ebx
  int v5; // [esp+10h] [ebp-2Ch]
  unsigned int v6; // [esp+14h] [ebp-28h]
  WCHAR v7[7]; // [esp+2Eh] [ebp-Eh] BYREF

  v3 = a3;
  v7[0] = 0;
  v6 = sub_4114E0();
  v5 = sub_4115C0();
  if ( a3 == nullptr )
    v3 = (int *)&unk_485A20;
  return sub_410E20(v7, a1, a2, v3, v5, v6);
}

