// busybox.exe @ 0x46dae0 size=54

int __usercall sub_46DAE0@<eax>(int a1@<eax>)
{
  int v2; // esi
  int v4; // [esp+0h] [ebp-8h]

  sub_427BB4(a1 != 0, a1);
  if ( a1 == 0 )
    return *(unsigned __int8 *)dword_485FF0;
  v2 = sub_4364BC(a1);
  sub_431EDC(a1, v4);
  return v2;
}

