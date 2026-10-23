// busybox.exe @ 0x462a60 size=223

int __cdecl sub_462A60(int a1, int a2)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v6; // [esp+10h] [ebp-18h] BYREF
  int v7; // [esp+14h] [ebp-14h] BYREF
  intptr_t OSFileHandle[4]; // [esp+18h] [ebp-10h] BYREF

  v6 = 0;
  v7 = 0;
  v3 = sub_4728CC(v2);
  if ( (sub_435D44(a2, (int)"eh:n:", &v7, &v6) & 6) != 0 )
  {
    if ( v7 == 0 || sub_4629AC(v7, (int)"%p", OSFileHandle) != 1 )
      sub_41784C("invalid handle");
    sub_43AD2C();
    v4 = open_osfhandle(OSFileHandle[0], 32770);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 4) == 0 )
      sub_418164();
    if ( v6 == 0 )
      v6 = *(_DWORD *)(a2 + 4);
    v4 = sub_42091C();
  }
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v4;
  sub_465F60();
  sub_4667D8();
  return 0;
}

