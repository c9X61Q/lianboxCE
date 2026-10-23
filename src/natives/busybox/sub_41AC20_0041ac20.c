// busybox.exe @ 0x41ac20 size=443

int __cdecl sub_41AC20(int a1, int a2)
{
  unsigned int v2; // ebx
  char **v3; // esi
  int i; // edi
  FILE *v5; // eax
  int v6; // ebx
  int v8; // [esp+14h] [ebp-3Ch]
  int v9; // [esp+18h] [ebp-38h]
  int v10; // [esp+1Ch] [ebp-34h]
  bool v11; // [esp+23h] [ebp-2Dh]
  int v12; // [esp+24h] [ebp-2Ch]
  char Buffer[4]; // [esp+28h] [ebp-28h] BYREF
  int v14; // [esp+2Ch] [ebp-24h]
  int v15; // [esp+30h] [ebp-20h]
  const char *v16; // [esp+34h] [ebp-1Ch]
  const char *v17; // [esp+38h] [ebp-18h]
  char v18; // [esp+3Ch] [ebp-14h]
  char v19; // [esp+3Dh] [ebp-13h]

  v2 = sub_435D44(a2, "^etvAnbu");
  v3 = (char **)(a2 + 4 * dword_473090);
  if ( *v3 == nullptr )
    *--v3 = "-";
  if ( (v2 & 7) != 0 )
  {
    v11 = (v2 & 0x30) != 0;
    v12 = 0;
    do
    {
      v9 = sub_447A6C();
      if ( v9 >= 0 )
      {
        while ( 1 )
        {
          v10 = sub_46F148(v9, (LPSTR)&MultiByteStr, 1024);
          if ( v10 <= 0 )
            break;
          for ( i = 0; i < v10; ++i )
          {
            v8 = *((unsigned __int8 *)&MultiByteStr + i);
            if ( v11 && ((v2 & 0x20) == 0 ? 256 : 10) != *((unsigned __int8 *)&MultiByteStr + i) )
              sub_46F088("%6u  ", ++v12);
            v11 = ((v2 & 0x30) == 0 ? 256 : 10) == v8;
            sub_46D720(v2, Buffer);
            v5 = off_4730E8(1);
            sub_46EF20(Buffer, v5);
          }
        }
      }
      ++v3;
    }
    while ( *v3 != nullptr );
LABEL_18:
    sub_42F138();
  }
  if ( (v2 & 0x30) != 0 )
  {
    *(_DWORD *)Buffer = 6;
    v14 = 1;
    v15 = 1;
    v16 = "\t";
    v17 = "\n";
    v18 = ((v2 >> 5) ^ 1) & 1;
    v19 = (v2 >> 4) & 2;
    v6 = 0;
    do
    {
      v6 |= sub_44E968();
      ++v3;
    }
    while ( *v3 != nullptr );
    goto LABEL_18;
  }
  return sub_416E5C(v3);
}

