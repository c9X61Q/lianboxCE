// busybox.exe @ 0x403610 size=176

int __usercall sub_403610@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v6; // ecx
  __int64 v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int result; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ebx
  bool v15; // cc
  int *v16; // ecx
  int v17; // ebx
  int v18; // [esp+0h] [ebp-24h]
  int v20; // [esp+8h] [ebp-1Ch]
  int v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+10h] [ebp-14h]

  v6 = a3 - a2;
  v7 = a2 - a1;
  v21 = v7;
  v8 = v7 % v6;
  v20 = v6;
  if ( v8 != 0 )
  {
    v9 = v6;
    do
    {
      v6 = v8;
      v8 = v9 % v8;
      v9 = v6;
    }
    while ( v8 != 0 );
  }
  v18 = (a3 - a1) / v6;
  v10 = a2;
  result = v6 + a2;
  v22 = v6 + a2;
  if ( v6 > 0 )
  {
    do
    {
      result = v10;
      if ( v18 > 0 )
      {
        v12 = *(_DWORD *)(a4 + 4 * v10);
        v13 = 0;
        while ( 1 )
        {
          v14 = result + v20;
          v15 = a2 <= result;
          result -= v21;
          if ( !v15 )
            result = v14;
          ++v13;
          v16 = (int *)(a4 + 4 * result);
          v17 = *v16;
          *v16 = v12;
          *(_DWORD *)(a4 + 4 * v10) = v17;
          if ( v18 == v13 )
            break;
          v12 = v17;
        }
      }
      ++v10;
    }
    while ( v22 != v10 );
  }
  return result;
}

