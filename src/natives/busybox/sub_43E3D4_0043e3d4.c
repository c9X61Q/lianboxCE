// busybox.exe @ 0x43e3d4 size=42

int __usercall sub_43E3D4@<eax>(int result@<eax>, int (__cdecl *a2)(int)@<edx>)
{
  int v3; // [esp+4h] [ebp-8h]

  v3 = result;
  while ( v3 != 0 )
  {
    result = sub_43E400();
    if ( a2 != nullptr )
      result = a2(result);
  }
  return result;
}

