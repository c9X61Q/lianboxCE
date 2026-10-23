// busybox.exe @ 0x4599dc size=154

int __usercall sub_4599DC@<eax>(int a1@<eax>)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v6; // [esp+Ch] [ebp-50h]
  int *Buf; // [esp+10h] [ebp-4Ch]
  char v8; // [esp+14h] [ebp-48h] BYREF

  Buf = *(int **)(dword_485FF0 + 52);
  v6 = *(_DWORD *)(dword_485FF0 + 56);
  v1 = setjmp3();
  v2 = dword_485FF0;
  if ( v1 == 0 )
  {
    *(_DWORD *)(dword_485FF0 + 52) = &v8;
    sub_459474(a1, 1);
  }
  *(_DWORD *)(v2 + 52) = Buf;
  if ( v1 != 0 && *(_BYTE *)(v2 + 61) != 1 )
    longjmp(Buf, 1);
  v3 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 56) = v6;
  if ( *(_DWORD *)(v3 + 56) == 0 && *(_BYTE *)(v3 + 60) != 0 )
    sub_45309C();
  return v1;
}

