// busybox.exe @ 0x4243f0 size=1084

int __usercall sub_4243F0@<eax>(int a1@<eax>)
{
  unsigned __int16 v2; // si
  int v3; // edi
  int v4; // esi
  char *v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  const char *v12; // eax
  int v13; // esi
  struct tm *v14; // eax
  char *v15; // edi
  unsigned __int16 v16; // di
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // esi
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  __time32_t *Time; // [esp+0h] [ebp-90h]
  int Val; // [esp+4h] [ebp-8Ch]
  int Vala; // [esp+4h] [ebp-8Ch]
  unsigned __int8 v28; // [esp+17h] [ebp-79h]
  void *Block; // [esp+18h] [ebp-78h]
  signed __int32 v30; // [esp+1Ch] [ebp-74h] BYREF
  char Buffer[16]; // [esp+20h] [ebp-70h] BYREF
  int v32; // [esp+30h] [ebp-60h]

  v2 = *(_WORD *)(a1 + 18);
  v28 = sub_4144FC(v2);
  v30 = dword_486008;
  Block = nullptr;
  v3 = dword_486008 & 0x20;
  if ( (dword_486008 & 0x20) != 0 && (v2 & 0xF000) == 0xA000 )
    Block = (void *)sub_471264();
  v4 = 0;
  if ( (v30 & 8) != 0 )
    v4 = sub_46F088("%19llu ", *(_QWORD *)(a1 + 40));
  if ( _bittest(&v30, 8u) )
    v4 += sub_46F088("%6llu ", *(__int64 *)(a1 + 48) >> 1);
  if ( v3 != 0 )
  {
    v5 = sub_417DC8(*(_WORD *)(a1 + 18));
    v6 = sub_46F088("%-10s ", v5);
    v7 = sub_46F088("%4lu ", *(_DWORD *)(a1 + 56)) + v6 + v4;
    if ( (v30 & 0x80u) == 0 )
    {
      if ( (v30 & 0x40) != 0 )
      {
        Val = sub_4335EC();
        v8 = sub_46F088("%-8.8s ", Val);
      }
      else
      {
        v9 = sub_4335EC();
        Vala = sub_433600();
        v8 = sub_46F088("%-8.8s %-8.8s ", Vala, v9);
      }
    }
    else if ( (v30 & 0x40) != 0 )
    {
      v8 = sub_46F088("%-8u ", *(_DWORD *)(a1 + 64));
    }
    else
    {
      v8 = sub_46F088("%-8u %-8u ", *(_DWORD *)(a1 + 60), *(_DWORD *)(a1 + 64));
    }
    v10 = v8 + v7;
    if ( (*(_WORD *)(a1 + 18) & 0xE000) == 0x2000 )
    {
      v11 = sub_46F088("%4u, %3u ", *(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 72));
    }
    else if ( _bittest(&v30, 0x19u) )
    {
      v12 = (const char *)sub_441B54(0);
      v11 = sub_46F088("%7s ", v12);
    }
    else
    {
      v11 = sub_46F088("%9llu ", *(_QWORD *)(a1 + 24));
    }
    v13 = v11 + v10;
    Time = (__time32_t *)(a1 + 32);
    if ( _bittest(&v30, 0x1Cu) )
    {
      v14 = localtime(Time);
      sub_444C3C(Buffer, 0x1Du, (int)"%Y-%m-%d %H:%M:%S %z", v14);
      v4 = sub_46F088("%s ", Buffer) + v13;
    }
    else
    {
      v15 = ctime(Time);
      if ( (unsigned int)(NumOfElements - *(_DWORD *)(a1 + 32) + 899) > 0xF09D42 )
      {
        *strchr(v15 + 20, 10) = 32;
        sub_46F088("%.7s%6s", v15 + 4, v15 + 20);
      }
      else
      {
        sub_46F088("%.12s ", v15 + 4);
      }
      v4 = v13 + 13;
    }
  }
  if ( (_BYTE)MultiByteStr != 0 )
  {
    v16 = *(_WORD *)(a1 + 14);
    if ( v16 == 0 && sub_443484(*(_DWORD *)(a1 + 4), Buffer) == 0 )
      v16 = v32;
    if ( (v16 & 0xF000) == 0x8000 && (v16 & 0x49) != 0 )
    {
      v17 = 32;
    }
    else
    {
      v17 = (unsigned __int8)byte_479AE9[v16 >> 12];
      if ( (v16 & 0xF000) != 0x8000 )
        goto LABEL_38;
    }
    v18 = 1;
    if ( (v16 & 0x49) != 0 )
    {
LABEL_39:
      sub_46F088("\x1B[%u;%um", v18, v17);
      goto LABEL_40;
    }
LABEL_38:
    v18 = (unsigned __int8)byte_479AFA[v16 >> 12];
    goto LABEL_39;
  }
LABEL_40:
  v19 = sub_44E7F0();
  if ( (_BYTE)MultiByteStr != 0 )
    sub_46F088("\x1B[m");
  v20 = v19 + v4;
  v30 &= 0x3000u;
  if ( Block != nullptr )
  {
    sub_46F088(" -> ");
    if ( v30 == 0 && (_BYTE)MultiByteStr == 0 )
      goto LABEL_57;
    v21 = *(_DWORD *)(a1 + 16);
    if ( (_WORD)v21 == 0 && sub_444C28(*(_DWORD *)(a1 + 4), Buffer) == 0 )
      LOWORD(v21) = v32;
    v28 = sub_4144FC(v21);
    if ( (_BYTE)MultiByteStr == 0 )
      goto LABEL_57;
    if ( (v21 & 0xF000) == 0x8000 && (v21 & 0x49) != 0 )
    {
      v22 = 32;
    }
    else
    {
      v22 = (unsigned __int8)byte_479AE9[(unsigned __int16)v21 >> 12];
      if ( (v21 & 0xF000) != 0x8000 )
        goto LABEL_55;
    }
    v23 = 1;
    if ( (v21 & 0x49) != 0 )
    {
LABEL_56:
      sub_46F088("\x1B[%u;%um", v23, v22);
LABEL_57:
      v20 += sub_44E7F0() + 4;
      free(Block);
      if ( (_BYTE)MultiByteStr != 0 )
        sub_46F088("\x1B[m");
      goto LABEL_59;
    }
LABEL_55:
    v23 = (unsigned __int8)byte_479AFA[(unsigned __int16)v21 >> 12];
    goto LABEL_56;
  }
LABEL_59:
  if ( v30 != 0 && v28 != 0 )
  {
    sub_46F0B8(v28);
    ++v20;
  }
  return v20;
}

