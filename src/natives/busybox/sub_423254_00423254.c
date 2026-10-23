// busybox.exe @ 0x423254 size=791

int __cdecl sub_423254(char a1, int a2)
{
  int v2; // esi
  char v3; // bl
  int v4; // edi
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // ecx
  const char *v8; // edx
  void *v9; // esi
  const char **v10; // eax
  const char *v11; // ebx
  int v12; // edx
  unsigned __int64 v13; // rcx
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  char *Str1; // [esp+0h] [ebp-A0h]
  char v19; // [esp+4h] [ebp-9Ch]
  const char *v20; // [esp+14h] [ebp-8Ch]
  const char *v21; // [esp+18h] [ebp-88h]
  int v22; // [esp+1Ch] [ebp-84h]
  int v23; // [esp+20h] [ebp-80h]
  int v24; // [esp+24h] [ebp-7Ch]
  const char *v25; // [esp+28h] [ebp-78h]
  const char **v26; // [esp+2Ch] [ebp-74h]
  unsigned __int64 v27; // [esp+30h] [ebp-70h]
  unsigned int v28; // [esp+30h] [ebp-70h]
  _BYTE v29[8]; // [esp+38h] [ebp-68h] BYREF
  __int64 v30; // [esp+40h] [ebp-60h]
  __int64 v31; // [esp+48h] [ebp-58h]
  __int64 v32; // [esp+50h] [ebp-50h]
  __int64 v33; // [esp+58h] [ebp-48h]
  __int64 v34; // [esp+60h] [ebp-40h]
  char *v35; // [esp+90h] [ebp-10h]

  v35 = &a1;
  v2 = a2;
  v3 = sub_435D44(a2, "^kPThm");
  v4 = (v3 & 0x10) == 0 ? 1024 : 0x100000;
  if ( sub_44328C("POSIXLY_CORRECT") != 0 )
    v4 = 512;
  v24 = v3 & 2;
  if ( (v3 & 8) != 0 )
  {
    v4 = 0;
    v6 = "     Size";
  }
  else
  {
    v5 = (const char *)sub_441B54((v3 & 2) != 0);
    v6 = (const char *)sub_4708BC("%s-blocks", v5);
  }
  v7 = "Capacity";
  if ( (v3 & 2) == 0 )
    v7 = "Use%";
  v8 = "Type       ";
  v22 = v3 & 4;
  if ( (v3 & 4) == 0 )
    v8 = (const char *)&unk_479610;
  sub_46F088("Filesystem           %s%-15sUsed Available %s Mounted on\n", v8, v6, v7);
  v26 = (const char **)(v2 + 4 * dword_473090);
  if ( *v26 != nullptr )
  {
    v9 = nullptr;
  }
  else
  {
    v9 = (void *)sub_444718();
    if ( v9 == nullptr )
      sub_41823C("/proc/mounts");
  }
  v23 = 0;
  while ( v9 == nullptr )
  {
    while ( 1 )
    {
      v11 = *v26;
      if ( *v26 == nullptr )
        return v23;
      ++v26;
      v10 = (const char **)sub_430878(Str1, v19);
      if ( v10 != nullptr )
        break;
      sub_41783C("%s: can't find mount point", v11);
      v23 = 1;
    }
LABEL_22:
    v21 = *v10;
    v25 = v10[1];
    v20 = v10[2];
    if ( sub_462E78(v25, v29) != 0 )
    {
      sub_418224(v25, v12);
      v23 = 1;
    }
    else
    {
      if ( v31 == 0 )
        v31 = v30;
      if ( v32 == 0 && v9 != nullptr )
        break;
      v27 = v32 - v33;
      v13 = v34 + v32 - v33;
      if ( v13 != 0 )
      {
        while ( v13 > 0x1446F85 )
        {
          v13 >>= 1;
          v27 >>= 1;
        }
        v28 = (((unsigned int)v13 >> 1) + 100 * (_DWORD)v27) / (unsigned int)v13;
      }
      else
      {
        v28 = 0;
      }
      if ( (int)sub_46F088("%-20s", v21) > 20 && v24 == 0 )
        sub_46F088("\n%-20s", (const char *)&unk_479610);
      if ( v22 != 0 && (int)sub_46F088(" %-10s", v20) > 11 && v24 == 0 )
        sub_46F088("\n%-30s", (const char *)&unk_479610);
      v14 = (const char *)sub_441B54(v4);
      sub_46F088(" %9s ", v14);
      v15 = (const char *)sub_441B54(v4);
      sub_46F088("%9s ", v15);
      v16 = (const char *)sub_441B54(v4);
      sub_46F088("%9s %3u%% %s\n", v16, v28, v25);
    }
  }
  v10 = (const char **)sub_435B88(v9);
  if ( v10 != nullptr )
    goto LABEL_22;
  sub_429920(v9);
  return v23;
}

