// busybox.exe @ 0x40b030 size=251

int __usercall sub_40B030@<eax>(int a1@<eax>, double a2, int a3, int a4, int a5, int a6, int *a7)
{
  char v10; // c2
  char v11; // c3
  char v12; // c0
  __int16 v13; // cx
  int v14; // ebx
  int v15; // eax
  _WORD v17[6]; // [esp+20h] [ebp-2Ch] BYREF
  int v18; // [esp+2Ch] [ebp-20h]
  int v19; // [esp+38h] [ebp-14h] BYREF
  _BYTE v20[16]; // [esp+3Ch] [ebp-10h] BYREF

  *(double *)v17 = a2;
  *(_DWORD *)&v17[4] = a3;
  _ST7 = a2;
  v18 = a4;
  __asm { fxam }
  if ( v12 != 0 )
  {
    if ( v10 == 0 )
    {
      v19 = 4;
      v14 = 0;
      v15 = 0;
      goto LABEL_7;
    }
    v19 = 3;
    v13 = v17[4];
    v14 = 0;
  }
  else
  {
    v13 = v17[4];
    if ( v10 != 0 )
    {
      if ( v11 != 0 )
      {
        v19 = 2;
        v14 = -16445;
      }
      else
      {
        v19 = 1;
        v14 = (v17[4] & 0x7FFF) - 16446;
      }
    }
    else
    {
      v19 = 0;
      v14 = 0;
    }
  }
  v15 = v13 & 0x8000;
LABEL_7:
  *a7 = v15;
  return sub_40D7B0(&unk_4730CC, v14, v17, &v19, a1, a5, a6, v20);
}

