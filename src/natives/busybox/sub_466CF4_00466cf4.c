// busybox.exe @ 0x466cf4 size=383

int __cdecl sub_466CF4(int a1, int a2)
{
  int v2; // ecx
  LPCSTR *v3; // ebx
  int v4; // edi
  int *v5; // eax
  int v6; // edx
  __time32_t *Time; // [esp+0h] [ebp-A4h]
  int v9; // [esp+4h] [ebp-A0h]
  char v10; // [esp+18h] [ebp-8Ch]
  int v11; // [esp+1Ch] [ebp-88h] BYREF
  int *v12; // [esp+20h] [ebp-84h] BYREF
  __time32_t v13; // [esp+24h] [ebp-80h] BYREF
  int v14[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v15; // [esp+30h] [ebp-74h]
  int v16; // [esp+34h] [ebp-70h]
  struct tm v17; // [esp+38h] [ebp-6Ch] BYREF
  int v18; // [esp+70h] [ebp-34h]

  v11 = 0;
  v12 = nullptr;
  v14[1] = 0;
  v16 = 0;
  v10 = sub_435D60(a2, (int)"cr:d:t:fma", (int)"no-create", &v11, &v12, &v12);
  v3 = (LPCSTR *)(a2 + 4 * dword_473090);
  if ( *v3 == nullptr )
    sub_418164();
  if ( v11 != 0 )
  {
    sub_471860(v2, &v17);
    v14[0] = v18;
    v15 = v18;
  }
  if ( v12 != nullptr )
  {
    time(&v13);
    sub_43E8F8(&v13, &v17);
    sub_4497F0((int)v12, &v17.tm_sec);
    v17.tm_isdst = -1;
    v14[0] = sub_46C858();
    v15 = v14[0];
  }
  v4 = 0;
  do
  {
    v5 = v14;
    if ( v11 == 0 )
    {
      v5 = v12;
      if ( v12 != nullptr )
        v5 = v14;
    }
    if ( sub_46C3FC(*v3, (int)v5) != 0 )
    {
      if ( *_errno() != 2 )
        goto LABEL_18;
      if ( (v10 & 1) != 0 )
        goto LABEL_19;
      if ( sub_443508((char *)*v3, 258, 438) >= 0 )
      {
        sub_470B50(Time, v9);
        if ( v11 != 0 || v12 != nullptr )
          sub_46C3FC(*v3, (int)v14);
      }
      else
      {
LABEL_18:
        sub_418224(*v3, v6);
        v4 = 1;
      }
    }
LABEL_19:
    ++v3;
  }
  while ( *v3 != nullptr );
  return v4;
}

