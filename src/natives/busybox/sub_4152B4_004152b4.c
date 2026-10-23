// busybox.exe @ 0x4152b4 size=145

const char *__usercall sub_4152B4@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // edx
  int **v5; // edi
  const char *Str2; // ecx
  int **v7; // ebp
  const char *v9; // [esp+8h] [ebp-20h]
  int v10; // [esp+Ch] [ebp-1Ch]
  _DWORD v11[6]; // [esp+10h] [ebp-18h] BYREF

  v3 = *(_DWORD *)(a2 + 20);
  if ( v3 != 0 )
  {
    v3 = (*(int (**)(void))(a1 + 4))();
    if ( v3 != 0 )
    {
      v5 = *(int ***)(a1 + 12);
      Str2 = *(const char **)(a2 + 20);
      v7 = v5;
      while ( 1 )
      {
        if ( v7 == nullptr )
        {
          v11[1] = Str2;
          v11[0] = v5;
          *(_DWORD *)(a1 + 12) = v11;
          *(_QWORD *)a2 = sub_42C608();
          *(_DWORD *)(a1 + 12) = v5;
          return *(const char **)a1;
        }
        v10 = v3;
        v9 = Str2;
        if ( strcmp((const char *)v7[1], Str2) == 0 )
          break;
        v7 = (int **)*v7;
        v3 = v10;
        Str2 = v9;
      }
      return "expression recursion loop detected";
    }
    else
    {
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = 0;
    }
  }
  return (const char *)v3;
}

