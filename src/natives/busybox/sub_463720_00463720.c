// busybox.exe @ 0x463720 size=470

void __cdecl __noreturn sub_463720(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  char **v8; // ebx
  FILE *Stream; // ebp
  unsigned int v10; // edi
  int v11; // esi
  FILE *v12; // eax
  unsigned int v13; // [esp+10h] [ebp-3Ch]
  __int64 v14; // [esp+14h] [ebp-38h]
  char v15; // [esp+1Ch] [ebp-30h]
  char *Buffer; // [esp+20h] [ebp-2Ch]
  const char *v17; // [esp+24h] [ebp-28h]
  const char *v18; // [esp+28h] [ebp-24h]
  __int64 v19; // [esp+2Ch] [ebp-20h]
  const char *v20; // [esp+34h] [ebp-18h] BYREF
  const char *v21; // [esp+38h] [ebp-14h] BYREF

  v20 = "4";
  v21 = "o";
  sub_435D44(a2, (int)"afon:t:", &v20, &v21);
  v2 = dword_473090;
  v3 = sub_470928(0x7FFFFFFF, 1);
  v5 = sub_4728CC(v4);
  Buffer = (char *)v5;
  LOBYTE(v5) = *v21;
  v6 = v5 - 100;
  if ( (unsigned __int8)v6 > 0x14u || (v7 = 1050625, !_bittest(&v7, v6)) || v21[1] != 0 )
    sub_418164();
  v8 = (char **)(a2 + 4 * v2);
  v18 = (const char *)sub_4708BC("%%7ll%s ", v21);
  v17 = "%s: ";
  if ( *v8 == nullptr )
  {
    *--v8 = "standard input";
    v17 = "{%s}: ";
  }
  v13 = v3 - 1;
  v15 = 0;
  v19 = v3 - 1;
  while ( 1 )
  {
    Stream = sub_431518(*v8);
    if ( Stream != nullptr )
    {
      v14 = -v19;
      v10 = 0;
      do
      {
        v11 = fgetc(Stream);
        if ( (unsigned int)(v11 - 32) <= 0x5E || v11 == 9 )
        {
          if ( v10 <= v13 )
          {
            Buffer[v10] = v11;
            if ( v10 == v13 )
            {
              if ( (dword_486008 & 2) != 0 )
                sub_46F088(v17, *v8);
              if ( (dword_486008 & 0x14) != 0 )
                sub_46F088(v18, v14);
              v12 = off_4730E8(1);
              sub_46EF20(Buffer, v12);
            }
            ++v10;
          }
          else
          {
            sub_418130(v11);
          }
        }
        else
        {
          if ( v10 > v13 )
            sub_418130(10);
          v10 = 0;
        }
        ++v14;
      }
      while ( v11 != -1 );
      sub_42EE00(Stream);
    }
    else
    {
      v15 = 1;
    }
    if ( *++v8 == nullptr )
      sub_42F138(v15);
  }
}

