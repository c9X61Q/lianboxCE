// busybox.exe @ 0x410fc0 size=95

int __cdecl sub_410FC0(WCHAR *a1, BYTE *a2, unsigned int a3, int *a4)
{
  WCHAR *v4; // ebx
  int *v5; // esi
  int v7; // [esp+10h] [ebp-2Ch]
  unsigned int v8; // [esp+14h] [ebp-28h]
  WCHAR v9; // [esp+2Eh] [ebp-Eh] BYREF

  v4 = a1;
  v5 = a4;
  v9 = 0;
  if ( a1 == nullptr )
    v4 = &v9;
  v8 = sub_4114E0();
  v7 = sub_4115C0();
  if ( a4 == nullptr )
    v5 = (int *)&unk_485A28;
  return sub_410E20(v4, a2, a3, v5, v7, v8);
}

