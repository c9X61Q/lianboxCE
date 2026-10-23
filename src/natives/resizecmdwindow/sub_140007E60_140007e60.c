// resizecmdwindow.exe @ 0x140007e60 size=436

__int64 *__fastcall sub_140007E60(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // al
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v18; // [rsp+20h] [rbp-38h] BYREF
  bool v19; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  v6 = 0;
  v21 = 0;
  v7 = *(int *)(*a1 + 4);
  v8 = *(__int64 *)((char *)a1 + v7 + 40);
  if ( v8 <= 0 || v8 <= a3 )
    v9 = 0;
  else
    v9 = v8 - a3;
  v10 = a1;
  v18 = a1;
  v11 = *(__int64 *)((char *)a1 + v7 + 72);
  if ( v11 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *v5;
  v13 = *(int *)(*v5 + 4);
  if ( *(_DWORD *)((char *)v5 + v13 + 16) != 0 )
  {
    v14 = false;
  }
  else
  {
    v15 = *(__int64 **)((char *)v5 + v13 + 80);
    if ( v15 != nullptr && v15 != v5 )
    {
      __wind
      {
        std::ostream::flush(v15);
        v12 = *v5;
        v14 = *(_DWORD *)((char *)v5 + *(int *)(*v5 + 4) + 16) == 0;
      }
      __unwind
      {
        sub_140006400(&v18);
      }
    }
    else
    {
      v14 = true;
    }
  }
  __wind
  {
    __eh34_enter_try_state(1, 2);
    v19 = v14;
    if ( v14 )
    {
      if ( (*(_DWORD *)((_BYTE *)v5 + *(int *)(v12 + 4) + 24) & 0x1C0) != 0x40 )
      {
        while ( v9 != 0 )
        {
          if ( (unsigned int)std::streambuf::sputc(
                               *(__int64 *)((char *)v5 + *(int *)(*v5 + 4) + 72),
                               *((unsigned __int8 *)v5 + *(int *)(*v5 + 4) + 88)) == -1 )
          {
            v6 = 4;
            v21 = 4;
            goto LABEL_20;
          }
          --v9;
        }
      }
      if ( std::streambuf::sputn(*(__int64 *)((char *)v5 + *(int *)(*v5 + 4) + 72), a2, v3) == v3 )
      {
LABEL_20:
        while ( v9 != 0 )
        {
          if ( (unsigned int)std::streambuf::sputc(
                               *(__int64 *)((char *)v5 + *(int *)(*v5 + 4) + 72),
                               *((unsigned __int8 *)v5 + *(int *)(*v5 + 4) + 88)) == -1 )
            goto LABEL_23;
          --v9;
        }
      }
      else
      {
LABEL_23:
        v6 |= 4u;
        v21 = v6;
      }
      *(__int64 *)((char *)v5 + *(int *)(*v5 + 4) + 40) = 0;
      if ( __eh34_catch(2) )
      {
catch_state_2:
        if ( __eh34_catch_ellipsis(2) )
        {
          LOBYTE(a3) = 1;
          std::ios::setstate((char *)a1 + *(int *)(*a1 + 4), 4, a3);
          v5 = a1;
          v6 = v21;
          v10 = v18;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v6 = 4;
      if ( __eh34_catch(2) )
        goto catch_state_2;
    }
    __eh34_exit_try_state(2, 1);
LABEL_25:
    std::ios::setstate((char *)v5 + *(int *)(*v5 + 4), v6, 0);
  }
  __unwind
  {
    sub_140006260(&v18);
  }
  __wind
  {
    if ( !std::uncaught_exception() )
      std::ostream::_Osfx(v10);
    __wind
    {
      v16 = *(__int64 *)((char *)v10 + *(int *)(*v10 + 4) + 72);
      if ( v16 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    __unwind
    {
      __std_terminate();
    }
  }
  __unwind
  {
    __std_terminate();
  }
  return v5;
}

