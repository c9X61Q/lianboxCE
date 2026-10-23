// resizecmdwindow.exe @ 0x140007980 size=52

__int64 __fastcall sub_140007980(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_140008C10(v3);
      v3 += 160;
    }
    while ( v3 != a2 );
  }
  return result;
}

