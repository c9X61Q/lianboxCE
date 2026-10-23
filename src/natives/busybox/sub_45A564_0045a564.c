// busybox.exe @ 0x45a564 size=268

int __usercall sub_45A564@<eax>(const char **a1@<eax>, const char **a2@<edx>)
{
  const char **v2; // ebx
  int v3; // esi
  const char *v4; // edi
  const char *v5; // edx
  const char **v6; // edi
  int v7; // eax
  int v8; // eax
  char *Str1; // [esp+0h] [ebp-7Ch]
  const char *v12; // [esp+Ch] [ebp-70h]
  const char *v13; // [esp+Ch] [ebp-70h]
  char v14[16]; // [esp+10h] [ebp-6Ch] BYREF
  int v15; // [esp+20h] [ebp-5Ch]

  if ( a1 == nullptr )
    return 0;
  v2 = a1;
  v3 = 1;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == nullptr )
      return v3 ^ 1;
    if ( *v4 != 47 )
      goto LABEL_5;
    v12 = v4 + 1;
    if ( sub_439918(".", v4 + 1) < 0 )
    {
      if ( sub_43C594((int)(v4 + 1), (int)"usr/") != 0 )
      {
        v12 = v4 + 5;
        if ( sub_43C594((int)(v4 + 5), (int)"local/") != 0 )
          v12 = v4 + 11;
      }
      if ( sub_439918("bin", v12) < 0 )
      {
LABEL_5:
        v5 = *v2;
        if ( a2 != nullptr )
        {
          v6 = a2;
          while ( *v6 != nullptr )
          {
            v13 = v5;
            v7 = strcmp(v5, *v6++);
            v5 = v13;
            if ( v7 == 0 )
              goto LABEL_20;
          }
        }
        if ( sub_443484(v5, (int)v14) >= 0 )
        {
          Str1 = (char *)*v2;
          if ( (v15 & 0xF000) == 0x4000 )
            v8 = sub_443C74(Str1);
          else
            v8 = sub_444ECC(Str1);
          v3 &= v8;
        }
      }
    }
LABEL_20:
    ++v2;
  }
}

