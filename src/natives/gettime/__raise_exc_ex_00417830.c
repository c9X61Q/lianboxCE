// gettime.exe @ 0x417830 size=753

unsigned int __cdecl _raise_exc_ex(
        ULONG_PTR Arguments,
        unsigned int *a2,
        char a3,
        int a4,
        float *a5,
        float *a6,
        int a7)
{
  DWORD v7; // edi
  char v8; // cl
  unsigned int *v9; // esi
  char v10; // al
  int v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  float *v17; // ebx
  ULONG_PTR v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int result; // eax

  *(_DWORD *)(Arguments + 4) = 0;
  v7 = -1073741811;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  v8 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    v7 = -1073741681;
    *(_DWORD *)(Arguments + 4) |= 1u;
  }
  if ( (v8 & 2) != 0 )
  {
    v7 = -1073741677;
    *(_DWORD *)(Arguments + 4) |= 2u;
  }
  if ( (v8 & 1) != 0 )
  {
    v7 = -1073741679;
    *(_DWORD *)(Arguments + 4) |= 4u;
  }
  if ( (v8 & 4) != 0 )
  {
    v7 = -1073741682;
    *(_DWORD *)(Arguments + 4) |= 8u;
  }
  if ( (v8 & 8) != 0 )
  {
    v7 = -1073741680;
    *(_DWORD *)(Arguments + 4) |= 0x10u;
  }
  v9 = a2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(16 * *a2)) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v9)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 5)) & 1;
  v10 = _statfp();
  if ( (v10 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v10 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v10 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v10 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v10 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v11 = *v9 & 0xC00;
  switch ( v11 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v12 = (unsigned int *)Arguments;
      v13 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 2048:
      v12 = (unsigned int *)Arguments;
      v13 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v12 = v13;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
    default:
      break;
  }
  v14 = *v9 & 0x300;
  switch ( v14 )
  {
    case 0:
      v15 = (unsigned int *)Arguments;
      v16 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v15 = (unsigned int *)Arguments;
      v16 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v15 = v16;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
    default:
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (32 * a4)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 32) |= 1u;
  if ( a7 != 0 )
  {
    *(_DWORD *)(Arguments + 32) &= 0xFFFFFFE1;
    *(float *)(Arguments + 16) = *a5;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v17 = a6;
    *(_DWORD *)(Arguments + 96) &= 0xFFFFFFE1;
    *(float *)(Arguments + 80) = *v17;
  }
  else
  {
    *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 16) = *(double *)a5;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v17 = a6;
    *(_DWORD *)(Arguments + 96) = *(_DWORD *)(Arguments + 96) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 80) = *(double *)v17;
  }
  _clrfp();
  RaiseException(v7, 0, 1u, &Arguments);
  v18 = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *v9 &= ~1u;
  if ( (*(_BYTE *)(v18 + 8) & 8) != 0 )
    *v9 &= ~4u;
  if ( (*(_BYTE *)(v18 + 8) & 4) != 0 )
    *v9 &= ~8u;
  if ( (*(_BYTE *)(v18 + 8) & 2) != 0 )
    *v9 &= ~0x10u;
  if ( (*(_BYTE *)(v18 + 8) & 1) != 0 )
    *v9 &= ~0x20u;
  v19 = *(_DWORD *)v18 & 3;
  if ( v19 == 0 )
  {
    *v9 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v20 = v19 - 1;
  if ( v20 == 0 )
  {
    v22 = *v9 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v21 = v20 - 1;
  if ( v21 == 0 )
  {
    v22 = *v9 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v9 = v22;
    goto LABEL_59;
  }
  if ( v21 == 1 )
    *v9 |= 0xC00u;
LABEL_59:
  v23 = (*(_DWORD *)v18 >> 2) & 7;
  if ( v23 == 0 )
  {
    result = *v9 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v24 = v23 - 1;
  if ( v24 == 0 )
  {
    result = *v9 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v9 = result;
    goto LABEL_66;
  }
  result = v24 - 1;
  if ( result == 0 )
    *v9 &= 0xFFFFF3FF;
LABEL_66:
  if ( a7 != 0 )
    *v17 = *(float *)(v18 + 80);
  else
    *(double *)v17 = *(double *)(v18 + 80);
  return result;
}

