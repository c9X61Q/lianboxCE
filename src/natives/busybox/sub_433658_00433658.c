// busybox.exe @ 0x433658 size=82

int __usercall sub_433658@<eax>(unsigned __int8 **a1@<eax>, unsigned __int8 *a2@<edx>, int a3@<ecx>)
{
  int result; // eax
  bool v5; // zf
  unsigned __int8 *v6; // edx
  int v7; // [esp+0h] [ebp-Ch]

  if ( a3 - (int)a2 <= 1 )
LABEL_2:
    sub_470D44(v7);
  result = a2[1];
  if ( (a2[1] & 0x80u) != 0 )
  {
    if ( result == 128 )
      goto LABEL_2;
    if ( a3 - (int)a2 < result - 126 )
      goto LABEL_2;
    v5 = result == 130;
    if ( (unsigned int)result > 0x82 )
      goto LABEL_2;
    result = a2[2];
    if ( v5 )
    {
      result = a2[3] + (result << 8);
      ++a2;
    }
    ++a2;
  }
  v6 = a2 + 2;
  if ( a3 - (int)v6 < result )
    goto LABEL_2;
  *a1 = v6;
  return result;
}

