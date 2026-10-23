// busybox.exe @ 0x415348 size=236

int __usercall sub_415348@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  __int64 v7; // [esp+10h] [ebp-1Ch]
  __int64 v8; // [esp+18h] [ebp-14h]

  if ( (unsigned __int8)sub_466BE8() != 0 && (unsigned __int8)sub_466BE8() != 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a2 + 8);
    switch ( a3 )
    {
      case '+':
        return v8 + v7;
      case '-':
        return v7 - v8;
      case '*':
        return v8 * v7;
      default:
        break;
    }
    if ( v8 != 0 )
    {
      if ( a3 == 47 )
        return sub_4023F0(v7, v8);
      else
        return sub_402540(v7, v8);
    }
  }
  sub_418210();
}

