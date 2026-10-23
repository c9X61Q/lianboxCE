// busybox.exe @ 0x43e868 size=53

int __usercall sub_43E868@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebx
  int *v5; // eax
  int v7; // [esp+0h] [ebp-Ch]

  v7 = a2;
  while ( 1 )
  {
    v4 = sub_463A10(a3, "\n");
    if ( v4 == 0 )
      break;
    v5 = (int *)sub_4728CC();
    *v5 = v4;
    sub_43E368(a1, (int)v5);
  }
  return v7;
}

