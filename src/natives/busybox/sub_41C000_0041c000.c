// busybox.exe @ 0x41c000 size=185

int __fastcall sub_41C000(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int i; // esi
  int v9; // [esp+Ch] [ebp-24h]
  int v10; // [esp+10h] [ebp-20h]
  int v11; // [esp+14h] [ebp-1Ch]

  v9 = sub_45CCD4(a1, a3);
  v10 = sub_45CCD4(v6, a5);
  for ( i = 0; ; ++i )
  {
    if ( *(_DWORD *)(a2 + 4) <= i )
      return 0;
    v11 = sub_41C0BC(a1, a3, v9);
    if ( v11 != sub_41C0BC(a4, a5, v10) )
      break;
  }
  return 1;
}

