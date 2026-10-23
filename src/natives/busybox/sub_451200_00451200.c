// busybox.exe @ 0x451200 size=1555

int __userpurge sub_451200@<eax>(int *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4@<ebx>, _DWORD *a5)
{
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  void *v9; // edx
  int v10; // esi
  void *v11; // edx
  int v12; // eax
  int v13; // ecx
  void *v14; // ebp
  int *v15; // edi
  int v16; // esi
  int v17; // eax
  void *v18; // edx
  int v19; // eax
  int i; // ebx
  _BYTE *v21; // eax
  _BYTE *v22; // ebx
  __int64 v23; // rax
  int v24; // ebx
  int v25; // eax
  int v26; // edi
  int v27; // ebx
  void *Block; // [esp+0h] [ebp-254h]
  void *Blocka; // [esp+0h] [ebp-254h]
  int v32; // [esp+Ch] [ebp-248h]
  int v33; // [esp+14h] [ebp-240h]
  int v34; // [esp+14h] [ebp-240h]
  int v35; // [esp+18h] [ebp-23Ch]
  int v36; // [esp+1Ch] [ebp-238h]
  int v37; // [esp+20h] [ebp-234h]
  int v38; // [esp+24h] [ebp-230h]
  int v39; // [esp+28h] [ebp-22Ch]
  int j; // [esp+2Ch] [ebp-228h]
  int v42[3]; // [esp+34h] [ebp-220h] BYREF
  _DWORD *v43; // [esp+40h] [ebp-214h]
  _BYTE v44[4]; // [esp+44h] [ebp-210h] BYREF
  int v45; // [esp+54h] [ebp-200h] BYREF

  v36 = (sub_451138(a2) > 49) + 2;
  if ( (**(_DWORD **)(a3 + 12) & 1) == 0 )
    sub_418210("pstm_montogomery_setup failure\n");
  ((void (*)(void))sub_451864)();
  v6 = sub_451138((int *)a3);
  v7 = 32;
  if ( (v6 & 0x1F) != 0 )
    v7 = v6 % 32;
  if ( *(int *)a3 <= 1 )
  {
    sub_4526C8();
    *v43 = 1;
    v42[0] = 1;
    v7 = 1;
  }
  else
  {
    v8 = v7 + 32 * (*(_DWORD *)a3 - 1) - 1;
    sub_4526C8();
    a4 = -9;
    if ( v8 > 0x1FFFF )
      goto LABEL_80;
    a4 = v8 >> 5;
    v42[0] = (v8 >> 5) + 1;
    if ( v42[0] > v42[1] )
      sub_451814();
    v43[a4] = 1 << v8;
  }
  v10 = v7 - 1;
  do
  {
    if ( sub_451F20() != 0 || sub_451098(v42, (int *)a3) != -1 && sub_45C3C0(v42, a3) != 0 )
    {
      a4 = -8;
      goto LABEL_80;
    }
    ++v10;
  }
  while ( v10 != 32 );
  ((void (*)(void))sub_451864)();
  if ( sub_451098((int *)a3, a1) == 1 )
  {
    sub_4510E4(a1, &v45);
  }
  else
  {
    a4 = sub_4518E8(&v45, a3);
    if ( a4 != 0 )
      goto LABEL_79;
  }
  v12 = sub_4522DC(&v45);
  Block = (void *)a4;
  a4 = v12;
  if ( v12 == 0 )
  {
    v32 = 8 * v45 + 24;
    v14 = (void *)sub_4728CC(v13);
    v35 = 1 << (v36 - 1);
    v15 = (int *)&v44[16 << (v36 - 1)];
    if ( v15 != &v45 )
    {
      sub_451864(Block);
      sub_4510E4(&v45, v15);
    }
    do
    {
      v16 = sub_4523F4(v32);
      if ( v16 != 0 )
        goto LABEL_78;
      v17 = sub_451D5C(v14, v32);
      Blocka = v18;
      if ( v17 != 0 )
      {
        v16 = v17;
        goto LABEL_78;
      }
      v19 = a4 + 1;
      a4 = 1;
    }
    while ( v36 - 1 > v19 );
    v33 = v35 + 1;
    v37 = 1 << v36;
    for ( i = v35 + 1; v37 > i; ++i )
      sub_451864(Blocka);
    v21 = &v44[16 << (v36 - 1)];
    while ( v37 > v33 )
    {
      v22 = v21 + 16;
      v16 = sub_452054(v14, v32);
      if ( v16 != 0 )
        goto LABEL_75;
      v16 = sub_451D5C(v14, v32);
      if ( v16 != 0 )
        goto LABEL_75;
      ++v33;
      v21 = v22;
    }
    v24 = *a2 - 1;
    v25 = 0;
    v34 = 0;
    v16 = 0;
    v39 = 1;
    v38 = 0;
    while ( 2 )
    {
      if ( --v39 == 0 )
      {
        if ( v24 == -1 )
        {
          if ( v34 > 0 && v25 == 2 )
          {
            v27 = v16;
            while ( 1 )
            {
              v23 = sub_4523F4(v32);
              v16 = v23;
              if ( (_DWORD)v23 != 0 )
                break;
              v16 = sub_451D5C(v14, v32);
              if ( v16 != 0 )
                break;
              v27 *= 2;
              if ( (v27 & v37) != 0 )
              {
                v16 = sub_452054(v14, v32);
                if ( v16 != 0 )
                  break;
                v16 = sub_451D5C(v14, v32);
                if ( v16 != 0 )
                  break;
              }
              if ( v34 <= ++v39 )
                goto LABEL_62;
            }
          }
          else
          {
LABEL_62:
            v16 = sub_451D5C(v14, v32);
            if ( v16 == 0 )
              sub_4510E4(v42, a5);
          }
LABEL_75:
          while ( v37 != v35 )
            sub_45102C(&v44[16 * v35++], (void *)HIDWORD(v23));
LABEL_78:
          free(v14);
          a4 = v16;
          goto LABEL_79;
        }
        v38 = *(_DWORD *)(a2[3] + 4 * v24--);
        v39 = 32;
      }
      if ( v25 != 0 )
      {
        if ( v38 >= 0 && v25 == 1 )
        {
          v23 = sub_4523F4(v32);
          if ( (_DWORD)v23 != 0 || (LODWORD(v23) = sub_451D5C(v14, v32), (_DWORD)v23 != 0) )
          {
            v16 = v23;
            goto LABEL_75;
          }
LABEL_59:
          v25 = 1;
          goto LABEL_43;
        }
      }
      else if ( v38 >= 0 )
      {
LABEL_43:
        v38 *= 2;
        continue;
      }
      break;
    }
    v26 = v16 | ((unsigned int)v38 >> 31 << (v36 - (v34 + 1)));
    if ( v36 == v34 + 1 )
    {
      for ( j = 0; ; ++j )
      {
        v23 = sub_4523F4(v32);
        v16 = v23;
        if ( (_DWORD)v23 != 0 )
          break;
        v16 = sub_451D5C(v14, v32);
        if ( v16 != 0 )
          break;
        if ( v34 <= j )
        {
          v16 = sub_452054(v14, v32);
          if ( v16 == 0 )
          {
            v16 = sub_451D5C(v14, v32);
            if ( v16 == 0 )
            {
              v34 = 0;
              goto LABEL_59;
            }
          }
          goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
    ++v34;
    v16 = v26;
    v25 = 2;
    goto LABEL_43;
  }
LABEL_79:
  sub_45102C(&v45, v11);
LABEL_80:
  sub_45102C(v42, v9);
  return a4;
}

