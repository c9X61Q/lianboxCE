// busybox.exe @ 0x45115c size=164

int __usercall sub_45115C@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int *a3@<ecx>)
{
  char v5; // dl
  int *v6; // esi
  int v7; // edi
  int v8; // ebp
  int v10; // [esp+8h] [ebp-1Ch]

  if ( a2 != 0 )
  {
    sub_4510E4(a1, a3);
    if ( a2 > 31 )
      sub_4523A8();
    v5 = a2 & 0x1F;
    if ( (a2 & 0x1F) != 0 )
    {
      v6 = (int *)(a3[3] + 4 * *a3 - 4);
      v10 = *a3 - 1;
      v7 = 0;
      while ( v10 >= 0 )
      {
        v8 = *v6;
        *v6 = ((unsigned int)*v6 >> v5) | (v7 << (32 - v5));
        --v6;
        --v10;
        v7 = v8 & ~(-1 << v5);
      }
    }
    sub_45100C(a3);
  }
  else
  {
    sub_4510E4(a1, a3);
  }
  return 0;
}

