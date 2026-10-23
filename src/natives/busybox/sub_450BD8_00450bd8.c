// busybox.exe @ 0x450bd8 size=400

int __userpurge sub_450BD8@<eax>(int a1@<eax>, const void *a2@<edx>, unsigned int a3@<ecx>, _WORD *a4, unsigned int a5)
{
  _BYTE *v5; // ebp
  int v6; // ebx
  const char *v8; // eax
  _WORD *v9; // edi
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // edi
  int v15; // [esp+0h] [ebp-38h]
  int v17; // [esp+10h] [ebp-28h]
  _BYTE v19[12]; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+24h] [ebp-14h]

  v5 = a4;
  v6 = *(_DWORD *)(a1 + 128);
  if ( v6 > a5 )
    sub_41784C("RSA crypt outlen:%d < size:%d", a5, *(_DWORD *)(a1 + 128));
  v8 = "pkcs1Pad failure\n";
  if ( (int)(v6 - a3 - 3) <= 7 )
    goto LABEL_10;
  *a4 = 512;
  v9 = a4 + 1;
  v17 = v6 - a3 - 3;
  sub_465F08();
  v10 = 0;
  do
  {
    if ( *((_BYTE *)a4 + v10 + 2) == 0 )
      *((_BYTE *)a4 + v10 + 2) = 1;
    ++v10;
  }
  while ( v17 != v10 );
  *((_BYTE *)v9 + v17) = 0;
  qmemcpy((char *)v9 + v17 + 1, a2, a3);
  if ( v6 < 0 )
  {
    v8 = "Error padding psRsaEncryptPub. Likely data too long\n";
    goto LABEL_10;
  }
  v20 = 0;
  if ( sub_451850() != 0 )
    goto LABEL_24;
  if ( sub_452350(v6, a4) != 0 )
  {
    sub_45102C();
LABEL_24:
    v8 = "Error performing psRsaEncryptPub\n";
    goto LABEL_10;
  }
  if ( sub_451074() == -1 )
  {
    v12 = a5;
    v13 = -9;
  }
  else
  {
    v11 = sub_451200(v19);
    if ( (_DWORD)v11 != 0 )
    {
      v8 = "psRsaCrypt error: pstm_exptmod\n";
      goto LABEL_10;
    }
    v12 = sub_4526AC(HIDWORD(v11));
    v8 = "psRsaCrypt error: pstm_unsigned_bin_size\n";
    if ( v12 > a5 )
      goto LABEL_10;
    while ( v12 < *(_DWORD *)(a1 + 128) )
    {
      *v5++ = 0;
      ++v12;
    }
    memset(v5, 0, v12);
    sub_4526AC(v15);
    v13 = sub_45262C();
    v8 = "psRsaCrypt error: pstm_to_unsigned_bin\n";
    if ( v13 != 0 )
      goto LABEL_10;
  }
  sub_45102C();
  if ( v13 != 0 )
    goto LABEL_24;
  v8 = "Encrypted size error in psRsaEncryptPub\n";
  if ( v6 != v12 )
LABEL_10:
    sub_418210(v8);
  return v6;
}

