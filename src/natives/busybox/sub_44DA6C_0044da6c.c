// busybox.exe @ 0x44da6c size=69

int __usercall sub_44DA6C@<eax>(_DWORD *a1@<eax>, int (__cdecl *a2)(int, _DWORD *)@<edx>, int a3@<ecx>)
{
  _DWORD *v5; // ebx
  int result; // eax

  do
  {
    do
    {
LABEL_1:
      v5 = a1;
      a1 = (_DWORD *)a1[1];
    }
    while ( a1 != nullptr );
    a1 = (_DWORD *)v5[2];
  }
  while ( a1 != nullptr );
  while ( 1 )
  {
    result = a2(a3, v5);
    if ( result != 0 || *v5 == 0 )
      return result;
    a1 = *(_DWORD **)(*v5 + 8);
    if ( a1 != nullptr && a1 != v5 )
      goto LABEL_1;
    v5 = (_DWORD *)*v5;
  }
}

