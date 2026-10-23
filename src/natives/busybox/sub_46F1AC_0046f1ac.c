// busybox.exe @ 0x46f1ac size=231

size_t __cdecl sub_46F1AC(FILE *Stream, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // eax
  char *v5; // edi
  size_t v6; // esi
  int v8; // [esp+10h] [ebp-114h]
  _BYTE v9[272]; // [esp+14h] [ebp-110h] BYREF

  v3 = fileno(Stream);
  if ( sub_43C480(v3) != 0 )
  {
    v4 = sub_407C50((int)v9, 256, a2, a3);
    if ( v4 <= 0xFF )
    {
      v5 = v9;
      goto LABEL_7;
    }
    v8 = v4 + 1;
    v5 = (char *)malloc(v4 + 1);
    if ( v5 != nullptr && sub_407C50((int)v5, v8, a2, a3) != -1 )
    {
LABEL_7:
      v6 = sub_414398(v5, Stream);
      if ( v5 != v9 )
        free(v5);
      return v6;
    }
  }
  SetLastError(0);
  v6 = sub_404B90((int)Stream, a2, a3);
  if ( v6 == -1 )
    sub_41C430(Stream);
  return v6;
}

