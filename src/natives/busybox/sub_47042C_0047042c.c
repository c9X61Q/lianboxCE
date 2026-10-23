// busybox.exe @ 0x47042c size=269

int sub_47042C()
{
  int v0; // edx
  int v1; // ebx
  void *v2; // eax
  DWORD v3; // eax
  DWORD v5[2]; // [esp+Ch] [ebp-8h] BYREF

  if ( *(&qword_485BF8 + 1) == 1 )
  {
    v1 = sub_461710((const char **)MultiByteStr);
  }
  else
  {
    v1 = qword_485BF8 | *(&qword_485BF8 + 1);
    if ( *(_QWORD *)&qword_485BF8 == 0 )
      return v1;
    v1 = sub_46D7B0(v5);
    if ( *(&qword_485BF8 + 1) != 0 )
    {
      v2 = (void *)sub_444C0C((char **)MultiByteStr);
      v0 = v5[0];
      lpHandles[v5[0]] = v2;
    }
    else
    {
      while ( qword_485BF8 != 0 )
      {
        v3 = sub_46D7B0(v5);
        if ( v3 == 0 || v1 != 0 )
          v3 = v1;
        v1 = v3;
      }
    }
  }
  if ( v1 < 0 )
  {
    sub_418224(*(const char **)MultiByteStr, v0);
    v1 = (*_errno() == 2) + 126;
LABEL_20:
    LOBYTE(dword_485C04) = v1;
    return v1;
  }
  if ( v1 > 383 )
  {
    sub_41783C("'%s' terminated by signal %u", *(const char **)MultiByteStr, v1 - 384);
    v1 = 125;
    goto LABEL_20;
  }
  if ( v1 != 0 )
  {
    if ( v1 == 255 )
    {
      sub_41783C("%s: exited with status 255; aborting", *(const char **)MultiByteStr);
      v1 = 124;
      goto LABEL_20;
    }
    LOBYTE(dword_485C04) = 123;
    return 0;
  }
  return v1;
}

