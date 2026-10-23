// busybox.exe @ 0x417c00 size=456

signed __int32 __usercall sub_417C00@<eax>(char *a1@<eax>, int a2@<edx>, signed __int32 a3@<ecx>)
{
  signed __int32 v4; // esi
  char *v5; // esi
  unsigned __int16 v6; // di
  char v7; // al
  const char *v8; // eax
  signed __int32 v10; // [esp+14h] [ebp-7Ch]
  signed __int32 v12; // [esp+1Ch] [ebp-74h] BYREF
  __int16 v13; // [esp+20h] [ebp-70h]
  char v14; // [esp+23h] [ebp-6Dh]
  char v15[16]; // [esp+24h] [ebp-6Ch] BYREF
  int v16; // [esp+34h] [ebp-5Ch]

  v12 = a3;
  if ( (unsigned __int8)(*a1 - 46) <= 1u )
  {
    v4 = 0;
    if ( a1[1] == 0 )
      return v4;
  }
  sub_418E48();
  v5 = a1;
  v6 = -1;
  v13 = -1;
  while ( 1 )
  {
    v10 = v12 & 4;
    if ( (v12 & 4) != 0 )
    {
      if ( v5 == a1 )
        v5 += sub_45B414(v5);
      while ( *v5 != 0 )
      {
        if ( *v5 == 47 )
        {
          do
          {
            v7 = *++v5;
            v14 = v7;
          }
          while ( v7 == 47 );
          *v5 = 0;
          if ( v7 == 0 )
            break;
          if ( v13 == -1 )
          {
            v6 = sub_444EA4(0);
            v13 = v6 & 0xFF3F;
            if ( (v6 & 0xFF3F) != 0 )
              sub_444EA4(v6 & 0xFF3F);
          }
          goto LABEL_18;
        }
        ++v5;
      }
    }
    v14 = 0;
    if ( v13 != v6 )
    {
      sub_444EA4(v6);
      v13 = v6;
    }
LABEL_18:
    if ( sub_443494(a1) >= 0 )
      break;
    if ( *_errno() != 17 && *_errno() != 21 || v10 == 0 || (int)sub_444C28(a1, v15) < 0 || (v16 & 0xF000) != 0x4000 )
    {
      v8 = "create";
      v4 = -1;
      goto LABEL_36;
    }
    if ( v14 == 0 )
      goto LABEL_27;
LABEL_34:
    *v5 = v14;
  }
  if ( _bittest(&v12, 0xCu) )
    sub_46F088("created directory: '%s'\n", a1);
  if ( v14 != 0 )
    goto LABEL_34;
  if ( a2 == -1 || sub_442E6C(a1, a2) >= 0 )
  {
LABEL_27:
    v4 = 0;
    goto LABEL_37;
  }
  v4 = ~v12 >> 31;
  v8 = "set permissions of";
LABEL_36:
  sub_417FE4("can't %s directory '%s'", v8, a1);
LABEL_37:
  if ( v13 != v6 )
    sub_444EA4(v6);
  return v4;
}

