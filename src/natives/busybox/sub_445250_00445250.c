// busybox.exe @ 0x445250 size=299

char __usercall sub_445250@<al>(int Str@<eax>, int a2@<edx>)
{
  char *v3; // edi
  _DWORD *i; // ebx
  _DWORD *v5; // ebp
  void *v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v3 = strchr((const char *)Str, 61);
  ++*(_DWORD *)(dword_485FF0 + 56);
  for ( i = *(_DWORD **)(dword_473464 + 4); i != nullptr; i = (_DWORD *)*i )
  {
    if ( i[1] != 0 && sub_46C884() == 0 )
    {
      if ( v3 != nullptr )
        sub_45ECA8();
      return sub_43B8DC();
    }
  }
  v5 = (_DWORD *)sub_4728CC();
  if ( *(_BYTE *)Str != 45 || *(_BYTE *)(Str + 1) != 0 )
  {
    v7 = (_DWORD *)sub_4382E4((unsigned __int8 *)Str);
    i = (_DWORD *)*sub_430DE0(v7);
    if ( i != nullptr )
    {
      v5[3] = i[2];
      v10 = i[1];
      v5[2] = v10;
      i[1] = v10 | 0xC;
      if ( v3 != nullptr )
        sub_45ECA8();
      else
        sub_45EC2C(v8, 0);
    }
    else
    {
      if ( v3 != nullptr )
        v9 = sub_45ECA8();
      else
        v9 = sub_45EB78(a2 | 4, 0);
      i = (_DWORD *)v9;
      v5[2] = 32;
    }
  }
  else
  {
    v6 = (void *)sub_470E78();
    qmemcpy(v6, (const void *)(dword_485FF0 + 63), 0x13u);
    v5[3] = v6;
  }
  v5[1] = i;
  v11 = dword_473464;
  *v5 = *(_DWORD *)(dword_473464 + 4);
  *(_DWORD *)(v11 + 4) = v5;
  return sub_43B8DC();
}

