// busybox.exe @ 0x46eaf0 size=384

int __cdecl sub_46EAF0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi
  const char **v4; // ebx
  const char *v5; // eax
  char *v6; // eax
  int v7; // edi
  char *v8; // ebp
  char *v9; // eax
  char *v10; // ebp
  char *v11; // eax
  char *Destination; // [esp+0h] [ebp-48h]
  char *v14; // [esp+8h] [ebp-40h]
  int v15; // [esp+Ch] [ebp-3Ch]
  char *v16[14]; // [esp+10h] [ebp-38h] BYREF

  v2 = sub_44328C("PATH");
  if ( v2 == nullptr )
    v2 = strcpy((char *)&v16[1] + 1, "/sbin;/usr/sbin;/bin;/usr/bin");
  v3 = v2;
  sub_435D44(a2, (int)"^a");
  v4 = (const char **)(a2 + 4 * dword_473090);
  v15 = 0;
  do
  {
    if ( strcmp(*v4, "busybox") == 0 && (v5 = sub_433530(), sub_43C630(v5, "busybox.exe") != nullptr) )
    {
      v6 = sub_433530();
    }
    else
    {
      if ( sub_430048(*v4) < 0 && sub_43C594((int)*v4, (int)"busybox") == 0 )
      {
        v7 = 1;
        goto LABEL_13;
      }
      v6 = (char *)*v4;
    }
    sub_46F108(v6);
    if ( dword_486008 == 0 )
      return v15;
    v7 = 0;
LABEL_13:
    if ( sub_437D6C((char *)*v4) )
    {
      v8 = sub_416E24(*v4);
      v14 = (char *)sub_41422C((char *)*v4);
      if ( sub_413848(v14) != 0 || sub_42F668(v14) )
      {
        Destination = sub_418E48(v14);
        sub_46F108(Destination);
LABEL_20:
        v7 = 0;
        goto LABEL_24;
      }
      if ( sub_4685AC() && sub_430048(v8) >= 0 )
      {
        sub_46F108(v8);
        goto LABEL_20;
      }
    }
    else
    {
      v16[0] = v3;
      do
      {
        v9 = sub_430504(*v4, v16);
        v10 = v9;
        if ( v9 == nullptr )
          break;
        v11 = sub_418E48(v9);
        sub_46F108(v11);
        free(v10);
        v7 = 0;
      }
      while ( dword_486008 != 0 );
    }
LABEL_24:
    v15 |= v7;
    ++v4;
  }
  while ( *v4 != nullptr );
  return v15;
}

