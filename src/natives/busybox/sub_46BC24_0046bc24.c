// busybox.exe @ 0x46bc24 size=185

int __cdecl sub_46BC24(
        int a1,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        CHAR a22)
{
  int v22; // ecx
  void *v23; // esp
  int v24; // esi
  int result; // eax
  int v26; // ebx
  int v27; // edi
  int v28; // eax
  int v29; // edx
  char FileHandle; // [esp+0h] [ebp-Ch]
  int v31; // [esp+8h] [ebp-4h] BYREF

  v23 = alloca(sub_4115D8(0x1068u, v22, FileHandle));
  v24 = dword_486010;
  result = *(_DWORD *)(dword_486010 + 76);
  if ( (unsigned int)result >= 0xFFFFFFFE )
  {
    if ( ++result != 0 || (result = sub_443508(*(char **)(dword_486010 + 68), 0, v31), v26 = result, result < 0) )
    {
      *(_DWORD *)(v24 + 76) = -3;
    }
    else
    {
      if ( sub_44305C(result, (int)&v31) == 0 && (a2 & 0xF000) == 0x8000 )
      {
        v27 = 0;
LABEL_9:
        v28 = sub_45C560(4096, &a22, v26);
        if ( v28 > 0 )
        {
          v29 = 0;
          while ( *(&a22 + v29) != 10 || ++v27 != 9999999 )
          {
            if ( v28 == ++v29 )
              goto LABEL_9;
          }
        }
        *(_DWORD *)(v24 + 76) = v27;
      }
      else
      {
        *(_DWORD *)(v24 + 76) = -3;
      }
      return sub_442EA4(v26);
    }
  }
  return result;
}

