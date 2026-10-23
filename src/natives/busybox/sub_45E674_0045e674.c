// busybox.exe @ 0x45e674 size=295

int __usercall sub_45E674@<eax>(char *a1@<eax>, char a2@<dl>)
{
  _BYTE *v4; // ebp
  int v5; // eax
  int v6; // ebx
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  void *v11; // ecx
  int *v12; // eax
  int v13; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int v17; // [esp+8h] [ebp-14h]
  char *v18; // [esp+8h] [ebp-14h]
  char *v19; // [esp+8h] [ebp-14h]

  v4 = (_BYTE *)dword_485FF0;
  ++*(_DWORD *)(dword_485FF0 + 56);
  v5 = sub_443508(a1, 0, v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (a2 & 2) == 0 )
    {
      *v4 = 127;
      v7 = _errno();
      v18 = strerror(*v7);
      sub_415B40(v8, "can't open '%s': %s", a1, v18);
    }
    goto LABEL_16;
  }
  if ( v5 > 9 )
  {
    sub_41CB70(v5);
    v9 = v6;
    goto LABEL_11;
  }
  v9 = sub_42EE40(v5, 0, 10);
  if ( v9 >= 0 )
    goto LABEL_9;
  v10 = *_errno();
  if ( v10 != 9 )
  {
    if ( v10 != 0 )
    {
      v12 = _errno();
      v19 = strerror(*v12);
      sub_415B40(v13, "%d: %s", v6, v19);
    }
LABEL_9:
    sub_442EA4(v6);
    sub_41CB70(v9);
  }
LABEL_11:
  if ( (a2 & 1) != 0 )
  {
    sub_4527B4(v11);
    *((_DWORD *)off_473358 + 6) = 0;
  }
  v14 = off_473358;
  *((_DWORD *)off_473358 + 2) = v9;
  if ( v14[6] == 0 )
    v14[6] = sub_470E78();
  v15 = off_473358;
  *((_DWORD *)off_473358 + 4) = 0;
  v15[3] = 0;
  v15[1] = 1;
  v6 = v9;
LABEL_16:
  sub_43B8DC();
  return v6;
}

