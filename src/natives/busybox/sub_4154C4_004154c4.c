// busybox.exe @ 0x4154c4 size=85

__int64 sub_4154C4()
{
  __int64 v0; // rax
  __int64 v2; // [esp+4h] [ebp-18h]
  const char *v3[4]; // [esp+Ch] [ebp-10h] BYREF

  v3[1] = (const char *)sub_43E9A4;
  v3[2] = (const char *)sub_45EC2C;
  ++*(_DWORD *)(dword_485FF0 + 56);
  LODWORD(v0) = sub_414E14(v3);
  if ( v3[0] != nullptr )
    sub_415B40(v3[0]);
  v2 = v0;
  sub_43B8DC();
  return v2;
}

