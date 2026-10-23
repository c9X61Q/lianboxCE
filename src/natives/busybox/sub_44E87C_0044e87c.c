// busybox.exe @ 0x44e87c size=186

void __cdecl sub_44E87C(int a1, _BYTE *a2)
{
  _BYTE *v2; // ebx
  unsigned __int8 v3; // al
  int v4; // eax
  FILE *v5; // [esp+4h] [ebp-1Ch]
  FILE *v6; // [esp+4h] [ebp-1Ch]
  FILE *v7; // [esp+4h] [ebp-1Ch]
  char Buffer[24]; // [esp+8h] [ebp-18h] BYREF

  v2 = a2;
  qmemcpy(Buffer, "   x", 0xBu);
  Buffer[11] = 0;
  while ( &a2[a1] != v2 )
  {
    v3 = *v2 & 0x7F;
    if ( v3 == 127 )
    {
      v5 = off_4730E8(1);
      sub_46EF20(" del", v5);
    }
    else if ( v3 <= 0x20u )
    {
      v4 = 3 * v3;
      Buffer[6] = aNulsohstxetxeo[v4];
      Buffer[7] = aNulsohstxetxeo[v4 + 1];
      Buffer[8] = aNulsohstxetxeo[v4 + 2];
      v7 = off_4730E8(1);
      sub_46EF20(&Buffer[5], v7);
    }
    else
    {
      Buffer[3] = *v2 & 0x7F;
      v6 = off_4730E8(1);
      sub_46EF20(Buffer, v6);
    }
    ++v2;
  }
}

