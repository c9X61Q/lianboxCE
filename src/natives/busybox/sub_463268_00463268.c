// busybox.exe @ 0x463268 size=624

int __usercall sub_463268@<eax>(const char *a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4)
{
  char *v5; // eax
  char *v6; // esi
  char v7; // al
  PCSTR v8; // edx
  int v9; // ebx
  char *v10; // eax
  int v11; // ecx
  int v12; // ecx
  PADDRINFOA v13; // esi
  unsigned int ai_addrlen; // ecx
  u_short v15; // ax
  void *v16; // esp
  const char *v17; // edx
  int v18; // ecx
  unsigned int v19; // esi
  char Str; // [esp+0h] [ebp-4Ch]
  char *Stra; // [esp+0h] [ebp-4Ch]
  unsigned int v23; // [esp+10h] [ebp-3Ch] BYREF
  int v24; // [esp+14h] [ebp-38h]
  PCSTR v25; // [esp+18h] [ebp-34h]
  PADDRINFOA pAddrInfo; // [esp+1Ch] [ebp-30h] BYREF
  ADDRINFOA v27; // [esp+20h] [ebp-2Ch] BYREF

  v23 = a2;
  v24 = a3;
  pAddrInfo = nullptr;
  if ( *a1 == 91 )
  {
    v25 = a1 + 1;
    v5 = strchr(a1 + 1, 93);
    v6 = v5;
    if ( v5 == nullptr || (v7 = v5[1], v8 = v25, v7 != 58) && v7 != 0 )
    {
      sub_41783C("bad address '%s'", a1);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = strrchr(a1, 58);
    if ( v6 == nullptr || (v10 = strchr(a1, 58), v8 = a1, v6 != v10) )
    {
      v25 = a1;
      goto LABEL_11;
    }
  }
  v16 = alloca(sub_4115D8(4 * ((unsigned int)(v6 - v8 + 16) >> 2), v6 - v8 + 1, Str));
  v25 = sub_45C5AC((char *)&v23, v17, v18);
  if ( *v6 != 58 )
  {
    if ( v6[1] != 0 )
    {
      ++v6;
      goto LABEL_34;
    }
LABEL_11:
    if ( v24 == 23 )
      goto LABEL_12;
    if ( sub_439AEC((char *)v25, (unsigned int *)&v27) != 0 )
    {
      v9 = sub_4728CC(v12);
      *(_DWORD *)v9 = 16;
      *(_WORD *)(v9 + 4) = 2;
      *(_DWORD *)(v9 + 8) = v27.ai_flags;
      goto LABEL_28;
    }
    if ( v24 != 2 )
    {
LABEL_12:
      if ( sub_439B14(23, v25, &v27) > 0 )
      {
        v9 = sub_4728CC(v11);
        *(_DWORD *)v9 = 28;
        *(_WORD *)(v9 + 4) = 23;
        *(_OWORD *)(v9 + 12) = *(_OWORD *)&v27.ai_flags;
        goto LABEL_28;
      }
    }
    memset(&v27.ai_protocol, 0, 0x14u);
    v27.ai_family = v24;
    v27.ai_socktype = 1;
    v27.ai_flags = a4 & 0xFFFFFFFD;
    if ( sub_44322C(v25, nullptr, &v27, &pAddrInfo) != 0 || pAddrInfo == nullptr )
    {
      sub_41783C("bad address '%s'", a1);
      v9 = 0;
      if ( (a4 & 2) != 0 )
LABEL_7:
        sub_470D44(Stra);
      goto LABEL_29;
    }
    v13 = pAddrInfo;
    while ( v13->ai_family != 2 )
    {
      v13 = v13->ai_next;
      if ( v13 == nullptr )
      {
        v13 = pAddrInfo;
        break;
      }
    }
    v9 = sub_470E78();
    ai_addrlen = v13->ai_addrlen;
    *(_DWORD *)v9 = ai_addrlen;
    qmemcpy((void *)(v9 + 4), v13->ai_addr, ai_addrlen);
LABEL_28:
    v15 = htons(v23);
    sub_45E440((_WORD *)(v9 + 4), v15);
LABEL_29:
    if ( pAddrInfo != nullptr )
      freeaddrinfo(pAddrInfo);
    return v9;
  }
LABEL_34:
  v19 = sub_418398(10, v6 + 1, nullptr);
  if ( *_errno() == 0 && v19 <= 0xFFFF )
  {
    v23 = v19;
    goto LABEL_11;
  }
  sub_41783C("bad port spec '%s'", a1);
LABEL_6:
  v9 = 0;
  if ( (a4 & 2) != 0 )
    goto LABEL_7;
  return v9;
}

