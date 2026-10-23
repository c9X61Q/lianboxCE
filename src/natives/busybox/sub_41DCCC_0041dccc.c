// busybox.exe @ 0x41dccc size=274

int __cdecl sub_41DCCC(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  BOOL v4; // ebx
  bool v5; // zf
  char v6; // bl
  char *i; // esi
  void *Block; // [esp+0h] [ebp-2Ch]
  void *Blocka; // [esp+0h] [ebp-2Ch]
  char *Str2; // [esp+4h] [ebp-28h]
  char *Str2a; // [esp+4h] [ebp-28h]
  char *Str1; // [esp+Ch] [ebp-20h]
  char *v14; // [esp+10h] [ebp-1Ch]
  int v15; // [esp+14h] [ebp-18h]
  int v16; // [esp+18h] [ebp-14h]

  sub_435D44(a2, "^123");
  v15 = sub_470D10(Block, Str2);
  v16 = sub_470D10(Blocka, Str2a);
  Str1 = nullptr;
  v14 = nullptr;
  v2 = 0;
  while ( 1 )
  {
    if ( v2 > 0 || (free(Str1), Str1 = (char *)sub_470E94(), v2 == 0) )
    {
      free(v14);
      v14 = (char *)sub_470E94();
    }
    v3 = v14 == nullptr ? 2 : 0;
    v4 = Str1 == nullptr;
    v5 = v3 + v4 == 0;
    v6 = v3 + v4;
    if ( !v5 )
      break;
    v2 = strcmp(Str1, v14);
    sub_470378();
  }
  for ( i = (&Str1)[v6 & 1]; i != nullptr; i = (char *)sub_470E94() )
  {
    sub_470378();
    free(i);
  }
  return 0;
}

