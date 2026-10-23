// busybox.exe @ 0x435cd0 size=115

int __usercall sub_435CD0@<eax>(char *a1@<eax>)
{
  int v2; // ebx
  int *v3; // eax
  int v4; // ecx
  const char *v5; // edx
  char *v7; // [esp+10h] [ebp-10h] BYREF

  *_errno() = 0;
  v2 = sub_4041F0(a1, &v7, 10);
  v3 = _errno();
  v5 = "out of range";
  if ( *v3 != 0 )
LABEL_4:
    sub_46456C(v4, v5);
  if ( v7 == a1 || *(_BYTE *)sub_460FB8() != 0 )
  {
    v5 = "bad number";
    goto LABEL_4;
  }
  return v2;
}

