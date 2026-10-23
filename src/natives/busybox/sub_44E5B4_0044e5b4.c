// busybox.exe @ 0x44e5b4 size=259

void __fastcall sub_44E5B4(void (__thiscall *a1)(int, void *), int a2, void *Block)
{
  char *Str; // ebp
  char *v4; // eax
  char *v5; // ebx
  size_t v6; // eax
  char *v7; // esi
  FILE *v8; // eax
  char *v9; // [esp+8h] [ebp-24h]
  char *Buffer; // [esp+Ch] [ebp-20h]

  Buffer = (char *)sub_47188C();
  strlen(Buffer);
  v9 = (char *)sub_470E78();
  Str = Buffer;
  while ( Str != nullptr )
  {
    v4 = strchr(Str, 37);
    v5 = v4;
    if ( v4 == nullptr )
    {
      sub_46F108(Str);
      break;
    }
    v6 = strspn(v4 + 1, "#-+.I 0123456789");
    qmemcpy(v9, v5, v6 + 1);
    v7 = &v5[v6 + 1];
    v9[v6 + 1] = 0;
    *v5 = 0;
    v8 = off_4730E8(1);
    sub_46EF20(Str, v8);
    Str = v7 + 1;
    if ( *v7 == 0 )
    {
      Str = nullptr;
      goto LABEL_9;
    }
    if ( *v7 == 37 )
LABEL_9:
      sub_418130(37);
    else
      a1(a2, Block);
  }
  free(Buffer);
  free(v9);
}

