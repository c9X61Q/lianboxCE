// busybox.exe @ 0x470e28 size=80

__int64 __userpurge sub_470E28@<edx:eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  __int64 result; // rax

  result = sub_443400(a1, __SPAIR64__(a3, a2), a4);
  if ( result == -1 )
    sub_418014(-1, "lseek(%llu, %d)", __PAIR64__(a3, a2), a4);
  return result;
}

