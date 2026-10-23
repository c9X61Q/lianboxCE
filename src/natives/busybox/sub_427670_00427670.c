// busybox.exe @ 0x427670 size=260

int __usercall sub_427670@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v8; // [esp+14h] [ebp-44h]
  int v9[4]; // [esp+18h] [ebp-40h] BYREF
  int v10[12]; // [esp+28h] [ebp-30h] BYREF

  sub_466CC0();
  sub_466CC0();
  if ( **(_BYTE **)(a2 + 8) == 94 )
    sub_41783C(
      "warning: '%s': using '^' as the first character\nof a basic regular expression is not portable; it is ignored",
      *(const char **)(a2 + 8));
  memset(v10, 0, 0x20u);
  memset(v9, 0, sizeof(v9));
  sub_4716D4(0, *(_DWORD *)(a2 + 8));
  if ( sub_459FE8((int)v10, *(char **)(a1 + 8), 2, (int)v9, 0) == 1 || v9[0] != 0 )
  {
    if ( v10[6] == 0 )
    {
      v6 = sub_4728CC();
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  if ( v10[6] != 0 && v9[2] >= 0 )
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v9[3]) = 0;
LABEL_10:
    v6 = sub_463530();
    goto LABEL_12;
  }
  v4 = v9[1];
  v5 = v9[1] >> 31;
  v6 = sub_4728CC();
  *(_DWORD *)(v6 + 8) = v4;
  *(_DWORD *)(v6 + 12) = v5;
LABEL_12:
  v8 = v6;
  sub_45A08C(v10);
  return v8;
}

