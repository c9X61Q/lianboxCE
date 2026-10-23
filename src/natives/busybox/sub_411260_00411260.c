// busybox.exe @ 0x411260 size=65

int __cdecl sub_411260(CHAR *a1, WCHAR a2)
{
  CHAR *v2; // ebx
  int v3; // edi
  UINT v4; // eax
  CHAR v6; // [esp+1Bh] [ebp-11h] BYREF

  v2 = a1;
  if ( a1 == nullptr )
    v2 = &v6;
  v3 = sub_4114E0();
  v4 = sub_4115C0();
  return sub_4111C0(v2, a2, v4, v3);
}

